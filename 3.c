// while, do while

#include <stdio.h>

int main()

{
	int num;
	fprintf(stdout, "Geben Sie Zahl an: ");
	fscanf(stdin, "%d", &num);

int i=1;
	while(i<=num)
		{
			fprintf(stdout, "Zikl fangt zum %d Mal\n", i);
			i++;
		}
fprintf(stdout, "Zikl ist zu Ende\n");

i=1;

   do
   {
fprintf(stdout, "Neue Zikl\n");
++i;

   } while (i<=num-1);
}