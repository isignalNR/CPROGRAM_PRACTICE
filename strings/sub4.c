#include<stdio.h>
#include <stdlib.h>

int main()
{
				int i,j,temp;
				char str[100]={"This is a pattern matching"};
				char substr[20]={"pattern"};

				for(i=0;str[i]!='\0';i++)
				{
								j=0;
								if(str[i]==substr[j])
								{
												temp=i+1;
												while(str[i]==substr[j])
												{
																i++;
																j++;
												}

												if(substr[j]=='\0')
												{
																printf("The substring is present in given string at position %d\n",temp);
																exit(0);
												}
												else
												{
																i=temp;
																temp=0;
												}
								}
				}

				if(temp==0)
								printf("The substring is not present in given string\n");

				return 0;
}
