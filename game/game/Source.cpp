#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));

	int b, i, x, k, pop = 0, s = 0, X, j = 0;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "�������� �������� ����� �� 0 �� X: ";
	cin >> b;
	int n, a = rand() % b + 1;
	n = a;
	X = a;
	cout << "�������� ���������� �������: ";
	cin >> i;
	k = i;
	cout << "������ �����: ";
	cin >> x;
	cout << endl;
	do
	{
		i--;

		if (x > a and i > 0)
		{
			cout << "�� ������� ������� �����, ����������� ������, �������� " << i << " �������: ";
			cin >> x;
			cout << endl;
		}
		if (x < a and i > 0)
		{
			cout << "�� ������� ������� �����, ����������� ������, �������� " << i << " �������: ";
			cin >> x;
			cout << endl;
		}
		if (x == a)
		{
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "					�� ��������! ";
			cout << "�� ������������ " << abs(k - i) + 1 << " �������!" << endl;
			break;
		}
		if (i == 0)
		{
			cout << "			�� ���������! ��������� ������� ����� " << a << ". �� ������������ " << abs(k - i) << " �������" << endl;
			break;
		}
	} while (x != a);
	cout << endl;
	cout << endl;
	cout << endl;
	while (a != 0)
	{
		b = a % 10;
		a = a / 10;
		s = s + b;
	}
	cout << "����� ���� ����������� ����� ����� " << s << endl;
	double p = 1;
	for (i = 1; i <= X; i++)p = p * i;
	cout << "��������� ����������� ����� ����� " << p << endl;

	double c;
	int m = 0;
	cout << "���������� ����� ��������: ";
	do
	{
		m++;
		if (n % m == 0) { cout << m << " "; j++; }

	} while (m < (n / 2));
	cout << n;
	cout << endl;
	if (j > 2)cout << "���������� ����� �������";
	else cout << "���������� ����� �������";
	cout << endl;
	cout << endl;
	return 0;
}