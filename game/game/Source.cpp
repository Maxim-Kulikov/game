#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));

	int b, i, x, k, pop = 0, s = 0, X, j = 0;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Выберите диапазон чисел от 0 до X: ";
	cin >> b;
	int n, a = rand() % b + 1;
	n = a;
	X = a;
	cout << "Выберите количество попыток: ";
	cin >> i;
	k = i;
	cout << "Угадай число: ";
	cin >> x;
	cout << endl;
	do
	{
		i--;

		if (x > a and i > 0)
		{
			cout << "Вы указали большее число, продолжайте дальше, осталось " << i << " попыток: ";
			cin >> x;
			cout << endl;
		}
		if (x < a and i > 0)
		{
			cout << "Вы указали меньшее число, продолжайте дальше, осталось " << i << " попыток: ";
			cin >> x;
			cout << endl;
		}
		if (x == a)
		{
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "					Вы выйграли! ";
			cout << "Вы использовали " << abs(k - i) + 1 << " попыток!" << endl;
			break;
		}
		if (i == 0)
		{
			cout << "			Вы проиграли! Компьютер загадал число " << a << ". Вы использовали " << abs(k - i) << " попыток" << endl;
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
	cout << "Сумма цифр загаданного числа равна " << s << endl;
	double p = 1;
	for (i = 1; i <= X; i++)p = p * i;
	cout << "Факториал загаданного числа равен " << p << endl;

	double c;
	int m = 0;
	cout << "Делителями числа являются: ";
	do
	{
		m++;
		if (n % m == 0) { cout << m << " "; j++; }

	} while (m < (n / 2));
	cout << n;
	cout << endl;
	if (j > 2)cout << "Загаданное число сложное";
	else cout << "Загаданное число простое";
	cout << endl;
	cout << endl;
	return 0;
}