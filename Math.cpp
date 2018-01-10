#include <iostream>
#include <string>
#include <string.h>
#include <cmath>

#define PI 3.1415926535

using namespace std;

class Math
{
private:

	double a;
	double b;
	double c;
	double d;

public:

	int GetPlus(int a, int b);
	int GetMinus(int a, int b);
	int GetPro(int a, int b);
	int GetDel(int a, int b);
	int GetOst(int a, int b);
	double GetSin(int a);
	double GetCos(int a);
	double GetTg(int a);
	double GetCtg(int a);

	Math();
	~Math();

};

int GetPlus(int a, int b)
{
	return a + b;
}
int GetMinus(int a, int b)
{
	return a - b;
}
int GetPro(int a, int b)
{
	return a * b;
}
int GetDel(int a, int b)
{
	return a / b;
}
int GetOst(int a, int b)
{
	return a % b;
}
double GetSin(int a)
{
	return sin(a * PI / 180);
}
double GetCos(int a)
{
	return cos(a * PI / 180);
}
double GetTg(int a)
{
	return tan(a * PI / 180);
}
double GetCtg(int a)
{
	return 1 / GetTg(a);
}

Math::Math()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

Math::~Math()
{
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Math math;
	char* Formula = new char(255);
	int Chose = 0;
	int a = 0, b = 0;

	do {
		system("cls");
		cout << "Меню: \n1 - Сложение\n2 - Вычитание\n3 - Умножение\n4 - Деление\n5 - Остаток от деления на число\n6 - Синус числа\n7 - Косинус числа\n8 - Тангенс числа\n9 - Котангенс числа\n";
		cin >> Chose;
		switch (Chose)
		{
		case 1:
			cout << "Введите а,б" << endl;
			cin >> a >> b;
			cout << "Ответ " << math.GetPlus(a, b);
			break;
		case 2:
			cout << "Введите а,б" << endl;
			cin >> a >> b;
			cout << "Ответ " << math.GetMinus(a, b);
			break;
		case 3:
			cout << "Введите а,б" << endl;
			cin >> a >> b;
			cout << "Ответ " << math.GetPro(a, b);
			break;
		case 4:
			cout << "Введите а,б" << endl;
			cin >> a >> b;
			cout << "Ответ " << math.GetDel(a, b);
			break;
		case 5:
			cout << "Введите а,б" << endl;
			cin >> a >> b;
			cout << "Ответ " << math.GetOst(a, b);
			break;
		case 6:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ответ " << math.GetSin(a);
			break;
		case 7:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ответ " << math.GetCos(a);
			break;
		case 8:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ответ " << math.GetTg(a);
			break;
		case 9:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ответ " << math.GetCtg(a);
			break;
		default:
			cout << "Неверно" << endl;
			break;
		}
	} while (Chose < 1 || Chose >9);

	cout << endl;

	system("pause");
	return 0;
}