#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *user;
char *pass;
char *host;

void *xmalloc(int size)
{
		return NULL;
}

char *mystrcpy(char *to, const char*from)
{
	char *save = to;
	while((*to = *from) != '\0'){
					++from;++to;
	}
	return (save);
}

void *connect(char *h, char *u, char*p)
{
		void *handle;
		
		/*get th copy of inputs */
	user = xmalloc(strlen(u));
	host = xmalloc(strlen(h));
	pass = xmalloc(strlen(p));


	printf("waiting for input \n");
	getchar();
	mystrcpy(host, h);
	mystrcpy(user, u);
	mystrcpy(pass, p);

	/*make a connection request */
	printf("Connecting to the server %s, with username %s\n", host, user);
	return handle;
}

int main(int argc, char *argv[])
{
	void *handle;
	char buf[512];

	if(argc < 4){
			printf("usage: connecct <host> <user name> <password>\n");
			return 0;
	}
	handle = connect(argv[1], argv[2], argv[3]);
	printf("Connected..\n");
	while(1)
	{
		//accept commands
					if(!fgets(buf, 512, stdin))
									continue;

					//proccess the command
					printf("Processing the command %s\n", buf);
					printf("Process the command\n");
	}
}



	







































