#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<locale.h>
#include <stdio.h>
#include"Header.h"


FILE *fp;

void adminInfo()
{

	printf("1.������� ���������� �� ���� ��������� � ��������� ������������ ������� �� ����(� �������\n");
	printf("2.������ ��� �������� �������\n");
	printf("3.������� ���������� � ���������, ����� ������� ����������� � ��������� �������� ������� ������������� ������� ������ ����� �� ��������� 10 ��������������� ���������� ���������, ����� �������� ������� ���������� �� ������ �������� ���(����� 12:00) � ������� ��� �������� � ���\n");
	printf("4.����� ����� ������� �� ������� ���� �������\n");
	printf("5.������������ �������� ���������� �� ���� ������, � ������ ��������� ���������� �� ���� ���������, ����� ������ �� ������� � ������ �������� �����, � �� ������ ���� ���������� � ��������� �� �������� ������ �� ������ �������� �����.\n");
	printf("6.����� � �����");
}

void CreateCar()
{
	Car *empl;
	if ((fp = fopen("car.txt", "wb")) != NULL)
	{
		empl = (Car*)malloc(sizeof(Car));
		for (int i = 0; i < 14; i++)
		{
			empl->marka[i] = 95 + rand() % 25;
			empl->dvigatel[i] = 95 + rand() % 25;
			empl->kuzov[i] = 95 + rand() % 25;
			empl->privod[i] = 95 + rand() % 25;
			empl->rul = 1 + rand() % 4;
			empl->obem = 1 + rand() % 4;
			empl->numCar = 1 + rand() % 9000;

			printf("marka= %s\n", empl->marka);
			printf("dvigatel-%s\n", empl->dvigatel);
			printf("kuzov-%s\n", empl->kuzov);
			printf("privod-%s\n", empl->privod);
			printf("rul-%d\n", empl->rul);
			printf("obem-%d\n", empl->obem);
			printf("numer-%d\n", empl->numCar);
		}
		fclose(fp);
	}
	else
	{
		printf("erroor");
	}
}
void Kordinate()
{
	Marshrut *mt;
	mt = (Marshrut*)malloc(sizeof(Marshrut));
	for (int i = 0; i < 14; i++)
	{
		mt->numRoad = 1 + rand() % 100;
		mt->numCar = 1 + rand() % 100;
		//mt->punkt[i] = 65 + rand() % 15;

		mt->viezd.h = 1 + rand() % 23;
		mt->viezd.m = 1 + rand() % 59;
		mt->viezd.s = 1 + rand() % 59;
		mt->pribitya.h = 1 + rand() % 23;
		mt->pribitya.m = 1 + rand() % 59;
		mt->pribitya.s = 1 + rand() % 59;
		mt->dlitelnost = (mt->viezd.m - mt->pribitya.m);

		printf("---------%d------------\n", i);
		printf("� ��������-%d\n", mt->numRoad);
		printf("� ������-%d\n", mt->numCar);

		//printf("%s\n", mt->punkt[i]);

		printf("����� ������ �� �������:%d.%d.%d\n", mt->viezd.h, mt->viezd.m, mt->viezd.s);
		printf("����� �������� � ����������� �����:%d.%d.%d\n", mt->pribitya.h, mt->pribitya.m, mt->pribitya.s);
		printf("������������ ������� ������ ����� � �������-%d\n", mt->dlitelnost);

		printf("---------------------------------------------\n");
	}
}

void pm()
{
	Vremya vr;
	Marshrut *mt;
	mt = (Marshrut*)malloc(sizeof(Marshrut));
	for (int i = 0; i < 14; i++)
	{
		mt->numRoad = 1 + rand() % 100;
		mt->numCar = 1 + rand() % 100;
		//mt->punkt[i] = 65 + rand() % 15;

		mt->viezd.h = 1 + rand() % 23;
		mt->viezd.m = 1 + rand() % 59;
		mt->viezd.s = 1 + rand() % 59;
		mt->pribitya.h = 1 + rand() % 23;
		mt->pribitya.m = 1 + rand() % 59;
		mt->pribitya.s = 1 + rand() % 59;
		mt->dlitelnost = (mt->viezd.m - mt->pribitya.m);

		if ((mt->viezd.h) && (mt->pribitya.h > 12))
		{
			printf("----PM---------\n");
			printf("---------%d------------\n", i);
			printf("� ��������-%d\n", mt->numRoad);
			printf("� ������-%d\n", mt->numCar);

			//printf("%s\n", mt->punkt[i]);

			printf("����� ������ �� �������:%d.%d.%d\n", mt->viezd.h, mt->viezd.m, mt->viezd.s);
			printf("����� �������� � ����������� �����:%d.%d.%d\n", mt->pribitya.h, mt->pribitya.m, mt->pribitya.s);
			printf("������������ ������� ������ ����� � �������-%d\n", mt->dlitelnost);

			printf("---------------------------------------------\n");
		}
		else
		{
			printf("--------AM----------\n");
			printf("---------%d------------\n", i);
			printf("� ��������-%d\n", mt->numRoad);
			printf("� ������-%d\n", mt->numCar);

			//printf("%s\n", mt->punkt[i]);

			printf("����� ������ �� �������:%d.%d.%d\n", mt->viezd.h, mt->viezd.m, mt->viezd.s);
			printf("����� �������� � ����������� �����:%d.%d.%d\n", mt->pribitya.h, mt->pribitya.m, mt->pribitya.s);
			printf("������������ ������� ������ ����� � �������-%d\n", mt->dlitelnost);

			printf("---------------------------------------------\n");
		}
	}


}

void log()
{
	char arr[20];
	char a[20];
	char b[20];
	if ((fp = fopen("log.txt", "wb")) != NULL)
	{
		if ((fwrite(arr, sizeof(char), 20, fp)) != NULL)
		{
			Loginoperat *op;
			op = (Loginoperat*)malloc(sizeof(Loginoperat));
			for (int i = 0; i < 2; i++)
			{
				scanf("%s", &a[i]);
				scanf("%s", &b[i]);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("erreo");
	}
}



void loginA()
{
	Login lg;
	User us;

	lg.log = "admin";
	lg.pasword = "parol";
	char s[20];
	char pas[20];
	char *buf;
	char *buf2;
start:
	printf("������� �����::\n");
	scanf("%s", &s);

	printf("������� ������:\n");
	scanf("%s", &pas);
	/*if ((lg.log==s) &&(lg.pasword==pas))
	{*/
	buf = strstr(s, lg.log);
	buf2 = strstr(pas, lg.pasword);
	if ((buf) || (buf2) != NULL)
	{
		system("cls");
	startm:
		adminInfo();
		int x;
		scanf("%d", &x);
		system("cls");
		switch (x)
		{
		case 1:
		{
			printf("1.������� ���������� �� ���� ��������� � ��������� ������������ ������� �� ����(� �������\n");
			Kordinate();
			int f;

			nazad();
			goto startm;

		}break;
		case 2:
		{
			printf("2.������ ��� �������� �������\n");
			pm();
			nazad();
			goto startm;

		}break;
		case 3:
		{
			printf("3.������� ���������� � ���������, ����� ������� ����������� � ��������� �������� ������� ������������� ������� ������ ����� �� ��������� 10 ��������������� ���������� ���������, ����� �������� ������� ���������� �� ������ �������� ���(����� 12:00) � ������� ��� �������� � ���\n");
			nazad();
			goto startm;
		}break;
		case 4:
		{
			printf("4.����� ����� ������� �� ������� ���� �������\n");
			nazad();
			goto startm;
		}break;
		case 5:
		{
			printf("5.������������ �������� ���������� �� ���� ������, � ������ ��������� ���������� �� ���� ���������, ����� ������ �� ������� � ������ �������� �����, � �� ������ ���� ���������� � ��������� �� �������� ������ �� ������ �������� �����.\n");
			nazad();
			goto startm;
		}break;
		case 6:
		{
			log();
			nazad();
			goto startm;
		}break;
		}
	}
	else
	{
		printf("������������ ������!!!");
		goto start;
	}
}
void loginO()
{
	Login lg;
	User us;
	char s[20];
	char pas[20];
	char mas[20];

start:
	printf("������� �����:");
	scanf("%s", &s);
	printf("������� ������:");
	scanf("%s", &pas);
	if ((fp = fopen("log.txt", "rb")) != NULL)
	{
		if ((fread(mas, sizeof(char), 20, fp)) != NULL)
		{
			//� ��������� ������ ���� ����������� ������� ������ � �������, ��� ���� ��� ������ ������ ���� ��������� � ����.
			char *mas;
			mas = (char*)malloc(sizeof(char));
			printf("� ��������� ������ ���� ����������� ������� ������ � �������,");
			printf("%s", mas);

		}
		fclose(fp);
	}
	else
	{
		printf("neverniy parol");
		goto start;
	}

}

void nazad()
{
	int f;
	printf("\n");
	printf("�����=1\n");
	scanf("%d", &f);
	if (f == 1)
	{
		system("cls");
	}
}

