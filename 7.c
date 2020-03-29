// Создание Функций, прототип функций
#include <stdio.h>
#define SUM(a,b) (a+b)*2
int new();


int main()
{
	int i=new();
	fprintf(stdout, "Значение функции new: %i\n", i);
}

int new()

{

	int a=10, b=11;
	int result;
		result = SUM(a,b);
		return result;
}

