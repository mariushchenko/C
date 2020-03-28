#include <stdio.h>

int main()

{

	for(int i=1; i<=10;i++)
{
       if(i==5)
       	goto metka;
	printf("Итерация номер %i\n", i);
}
printf("После цыкла for\n");
metka:
printf("Текст после метки\n");

}