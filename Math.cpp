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
		cout << "����: \n1 - ��������\n2 - ���������\n3 - ���������\n4 - �������\n5 - ������� �� ������� �� �����\n6 - ����� �����\n7 - ������� �����\n8 - ������� �����\n9 - ��������� �����\n";
		cin >> Chose;
		switch (Chose)
		{
		case 1:
			cout << "������� �,�" << endl;
			cin >> a >> b;
			cout << "����� " << math.GetPlus(a, b);
			break;
		case 2:
			cout << "������� �,�" << endl;
			cin >> a >> b;
			cout << "����� " << math.GetMinus(a, b);
			break;
		case 3:
			cout << "������� �,�" << endl;
			cin >> a >> b;
			cout << "����� " << math.GetPro(a, b);
			break;
		case 4:
			cout << "������� �,�" << endl;
			cin >> a >> b;
			cout << "����� " << math.GetDel(a, b);
			break;
		case 5:
			cout << "������� �,�" << endl;
			cin >> a >> b;
			cout << "����� " << math.GetOst(a, b);
			break;
		case 6:
			cout << "������� �����: " << endl;
			cin >> a;
			cout << "����� " << math.GetSin(a);
			break;
		case 7:
			cout << "������� �����: " << endl;
			cin >> a;
			cout << "����� " << math.GetCos(a);
			break;
		case 8:
			cout << "������� �����: " << endl;
			cin >> a;
			cout << "����� " << math.GetTg(a);
			break;
		case 9:
			cout << "������� �����: " << endl;
			cin >> a;
			cout << "����� " << math.GetCtg(a);
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	} while (Chose < 1 || Chose >9);

	cout << endl;

	system("pause");
	return 0;
}