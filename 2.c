#include <stdio.h>

int main()
{

	int a, b;

		printf("Введите число a: \n");
	scanf("%i", &a);
		printf("Введите число b: \n");
	scanf("%i", &b);


    
	    if(a>b)
	    	printf("Первое условие: a>b\n");
	    else if(a<b)
	    	printf("Второе условие: a<b\n");
	    else
			printf("Третье условие: a=b\n");

		printf("%s\n", "Конец программы.");

}