struct Login
{
	char *log;
	char *pasword;
};
struct Loginoperat
{
	char log[10];
	char pasword[10];
};

struct User
{
	int admin;
	int oper;
};
struct Car
{
	char marka[5];
	char dvigatel[5];
	char kuzov[5];
	char privod[5];
	int rul;
	float obem;
	int numCar;

};
struct Vremya
{
	int h;
	int m;
	int s;
};
struct Marshrut
{
	int numRoad;
	int numCar;
	char punkt[10];
	Vremya viezd;
	Vremya pribitya;
	int dlitelnost;
};

void adminInfo();
void loginA();
void loginO();
void CreateCar();
void Kordinate();
void pm();
void log();
void nazad();



