#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

// get byte order conversion functions
#include "byteorder.h"

struct packet {
				uint8_t x;
				uint32_t y;
} __attribute__((packed));

static void decode_packet (uint8_t *recv_data, size_t recv_len)
{
				// check size
				if (recv_len < sizeof(struct packet)) {
								fprintf(stderr, "received too little!");
								return;
				}

				// make pointer
				struct packet *recv_packet = (struct packet *)recv_data;

				// fix byte order
				uint8_t x = ntoh8(recv_packet->x);
				uint32_t y = ntoh32(recv_packet->y);

				printf("Decoded: x=%"PRIu8" y=%"PRIu32"\n", x, y);
}

int main (int argc, char *argv[])
{
				// build packet
				struct packet p;
				p.x = hton8(17);
				p.y = hton32(2924);

				// send packet over link....
				// on the other end, get some data (recv_data, recv_len) to decode:
				uint8_t *recv_data = (uint8_t *)&p;
				size_t recv_len = sizeof(p);

				// now decode
				decode_packet(recv_data, recv_len);

				return 0;
}
