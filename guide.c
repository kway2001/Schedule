#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_printing()		//main menu print
{
	printf("1. print all the schedules\n");
	printf("2. search for schedules in the month\n");
	printf("3. search for schedules in the place\n");
	printf("4. search for specific type schedule\n");
	printf("5. exit\n\n");
}

int menu_select()		//get main menu select number
{
	int num;
	printf(" select an option: ");
	scanf("%d", &num);
	return num;
}

void line()
{
	printf(" -------------------------------\n");
}
