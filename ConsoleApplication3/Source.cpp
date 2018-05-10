#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<locale.h>
#include"Header.h"


void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	FILE *fp;
	User user;

	char pat[100] = "test.txt";
	/*if ((fp = fopen("test.txt", "w")))
	{*/

	printf("-----------Добро пожаловать---------\n");
	printf("Вы хотите зайти как...\n");
	printf("1.Админ:\n");//       Логин:login//// Пароль:parol     
	printf("2.Оператор:\n");
	/*user.admin = 1;
	user.oper = 2;*/
	int p;
	scanf("%d", &p);
	system("cls");

	switch (p)
	{
	case 1:
	{
		system("cls");
		if ((fp = fopen("admin.txt", "w+")) != NULL)
		{

			loginA();
			fclose(fp);
		}
		else
		{
			printf("Error !!!");
		}
	}break;
	case 2:
	{
		system("cls");
		if ((fp = fopen("operator.txt", "w+")) != NULL)
		{
			loginO();

			fclose(fp);
		}
		else
		{
			printf("Error!!!");
		}

	}break;
	}

}

