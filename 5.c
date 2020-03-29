#include <stdio.h>

int main()

{

	int i=1;
		while(i<=5)
			{

				//fprintf(stdout, "%i итерация цыкла\n", (i != 4)?i:break;);
				if (i!=4)
					{
						fprintf(stdout, "%i итерация цыкла\n", i);
						i+=1;
					}
				else
					{   i+=1;
						continue;
					}

				

			}
	printf("Продолжение программы\n");

//..................................................................
	/*for(int j=0;j<=10;j++)
	{
		if(j==5)
			continue;
		printf("%d\n", j);

	}
printf("Продолжение программы\n");

	for(int j=0;j<=10;j++)
	{
		if(j==5)
			break;
		printf("%d\n", j);
	}
	printf("Продолжение программы\n");*/
}