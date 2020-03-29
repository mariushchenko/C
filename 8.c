//Функция с параметрами и приемом аргументов
#include <stdio.h>
//#define SUMM(a,b,c) ((a+b)*2)+c
#define M 50
//int erste_function(int first, int second, int three);
void str(char massiv[]);

int main()
{
   //int a,b,c; 
   //a=3; b=2; c=5;
   
   //fprintf(stdout, "Отработка функции erste_function: %d\n", erste_function(a, b, c));

   char name[M]="Santiago de Chile";
   str(name);
   


}

/*int erste_function(int first, int  second, int three)
{
	
     return SUMM(first, second, three);
     
	
}*/

void str(char massiv[])
{
     fprintf(stdout, "Столица Чили - %s\n", massiv);

}