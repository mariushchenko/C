//First Program 
//swich()  case:  break;

#include <stdio.h>

int main()

{

int number;
	printf("Выберите РЕЦЕПТ: \n");
		printf("1. Лазанья\n");
		printf("2. Паелья\n");
		printf("3. Шарлотка\n");
		printf("4. Пицца\n");
	scanf("%i", &number);

switch(number)
	{
		case 1: printf("Рецепт Лазаньи..\n");
			break;
		case 2: printf("Рецепт Паельи..\n");
			break;
		case 3: printf("Рецеепт Шарлотки..\n");
			break;
		case 4: printf("Рецепт Пиццы..\n");
		default: printf("Нет такого РЕЦЕПТА.\n");
			break;

	}

}

