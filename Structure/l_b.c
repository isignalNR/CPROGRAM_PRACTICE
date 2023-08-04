#include <stdio.h>
typedef union {
				unsigned short value;
				struct {
								unsigned short v1   : 1;
								unsigned short v2   : 2;
								unsigned short v3   : 3;
								unsigned short v4   : 4;
								unsigned short v5   : 5;
				} bit;
} data_t;

int main() {
				data_t var ;
				unsigned char *ptr = (unsigned char*)(&var);
				var.bit.v1   = 1;
				var.bit.v2   = 2;
				var.bit.v3   = 3;
				var.bit.v4   = 4;
				var.bit.v5   = 5;
				printf("Entire val: 0x%X\n", var.value);
				printf("First byte: 0x%X @ %p\n", *(ptr+0), ptr+0);
				printf("First byte: 0x%X @ %p\n", *(ptr+1), ptr+1);
				return 0;
}
