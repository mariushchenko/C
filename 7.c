// Создание Функций, прототип функций
#include <stdio.h>

int new();


int main()
{
	//int i=new();
	//fprintf(stdout, "Значение функции new: %i\n", i);
	new();
}

int new()

{
  int pass[]={1,2,3,4,5,6,7,8,9,10};


  for(int i=0;i<10;i++)
  {
  	printf("%i\n", pass[i]);
  }
	
}

