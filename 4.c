#include <stdio.h>
#include <string.h>

int main()
{

	char capital[8]={'C','a','p','i','t','a','l','\0'};

	for(int i=0;i<8;i++)
	{
		fprintf(stdout, "%c", capital[i]);
	}
	printf("\n");

	char string[]={"Santiago de Chile"};

		for(int i=0;i<=strlen(string);i++)
		{
			fprintf(stdout, "%c", string[i]);
		}
	printf("\n");

	int masiv[]={1,2,3,4,5,6,7,8,9,10};

	for(int i=0;i<10;i++)
	{
		fprintf(stdout, "%d\n", masiv[i]);
	}
}