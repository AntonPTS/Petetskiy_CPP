#include <iostream>
#include <Windows.h>
#include <math.h>
#include <cmath>
#include <list>
#include <random>
#include <iterator>
#include <cctype>
#include <string>
#include <map>

using namespace std;

int PZ_2_1(int chislo, int result);
int PZ_3_1(int chislo);
int PZ_3_2(float a, float b, float c);
int PZ_4_1(int n, int delitel, long double fact, int i);
int PZ_4_2(float a, float b, float c, float d);
int PZ_5_1(int width, int height, int m);
int PZ_5_2(float a, double b);
int PZ_6_1(int m);
int PZ_6_2(int n, int l, int k, int result);
int PZ_6_3(int n, int k);
int PZ_7_1(string str);
int PZ_8_1(float sum, map <string, int> book);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int g;
	cout << "Выберите практическую. Для этого введите число от 1 до 10\n" << "1 - PZ_2_1\n" << "2 - PZ_3_1\n" << "3 - PZ_3_2\n" << "4 - PZ_4_1\n" << "5 - PZ_4_2\n" << "6 - PZ_5_1\n" << "7 - PZ_5_2\n" << "8 - PZ_6_1\n" << "9 - PZ_6_2\n" << "10 - PZ_6_3\n" << "11 - PZ_7_1\n" << "12 - PZ_8_1\n\n";
	cin >> g;
	cout << "\n";

	if (g >= 1 && g <= 12) {
		cout << "Вариант 17\n";
		cout << "Практическая #";
		if (g == 1) {
			cout << "2_1\n" << "Дано трехзначное число. Вывести число, полученное при прочтении исходного числа справа налево.\n\n";
			int chislo;

			cout << "Введите трёхзначное число: ";
			cin >> chislo;

			if (chislo > 99 && chislo < 1000) {
				PZ_2_1(chislo, 0);
			}
			else {
				cout << "\nВы ввели неверное число или не число!" << endl;
				return 0;
			}
		}

		if (g == 2) {
			cout << "3_1\n\n" << "Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».\n\n";
			int chislo;

			cout << "Введите целое положительное число: ";
			cin >> chislo;

			if (chislo > 0) {
				PZ_3_1(chislo);
			}
			else {
				cout << "\nВы ввели отрицательное число или не число" << endl;
				return 0;
			}
		}

		if (g == 3) {
			cout << "3_2\n\n" << "Даны три переменные вещественного типа: A, B, C. Если их значения упорядочены по возрастанию, то удвоить их;\nв противном случае заменить значение каждой переменной на противоположное. Вывести новые значения переменных A, B, C.\n\n";
			float a;
			float b;
			float c;

			cout << "Введите число A: ";
			cin >> a;
			if (!cin || a < -10e9 || a > 10e9) {
				cout << "\nВы ввели неверное число!" << endl;
				return 0;
			}

			cout << "Введите число B: ";
			cin >> b;
			if (!cin || b < -10e9 || b > 10e9) {
				cout << "\nВы ввели неверное число!" << endl;
				return 0;
			}

			cout << "Введите число C: ";
			cin >> c;
			if (!cin || c < -10e9 || c > 10e9) {
				cout << "\nВы ввели неверное число!" << endl;
				return 0;
			}
			cout << "\n";

			PZ_3_2(a, b, c);
			return 0;

		}

		if (g == 4) {
			cout << "4_1\n\n" << "Дано целое число N (>0). Используя один цикл, найти сумму 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1 / (N!)\n(выражение N!— N - факториал — обозначает произведение всех целых чисел от 1 до N : N!= 1 - 2 - ...N).\nПолученное число является приближенным значением константы e = exp(1)\n\n";
			int n;
			cout << "Введите число N: ";
			cin >> n;

			if (n > 0) {
				PZ_4_1(n, 0, 1, 0);
			}
			else {
				cout << "\nВы ввели неправильное число!" << endl;
				return 0;
			}
		}

		if (g == 5) {
			cout << "4_2\n\n" << "Даны положительные числа A и B (A > Б).\nНа отрезке длины A размещено максимально возможное количество отрезков длины Б(без наложений).\nНе используя операции умножения и деления, найти длину незанятой части отрезка A.\n\n";
			float a;
			float b;
			cout << "Введите положительное число A: ";
			cin >> a;
			if (a <= 0) {
				cout << "\nНеверно!" << endl;
				return 0;
			}

			cout << "Введите положительное число Б: ";
			cin >> b;
			if (b <= 0) {
				cout << "\nНеверно!" << endl;
				return 0;
			}

			PZ_4_2(a, b, 0, 0);
		}

		if (g == 6) {
			cout << "5_1\n\n" << "Составить программу, в которой функция построит изображение,\nв котором в первой строке 1 звездочка, во второй - 2, в третьей - 3, ..., в строке с номером m - m звездочек.\n\n";
			int width;
			cout << "Введите количество строк: ";
			cin >> width;

			if (width > 0) {
				PZ_5_1(width, width, width);
			}
			else {
				cout << "\nВы ввели число <=0 или не число!" << endl;
				return 0;
			}
		}

		if (g == 7) {
			cout << "5_2\n\n" << "Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменную B\n(A — входной, B — выходной параметр; оба параметра являются вещественными).\nС помощью этой функции найти третьи степени пяти данных чисел.\n\n";
			float a;

			for (int i = 1; i <= 5; i++) {
				cout << "Введите число А: ";
				cin >> a;
				if (a > 0) {
					PZ_5_2(a, 0);
				}
				else {
					cout << "\nВы ввели число <=0 или не число!" << endl;
					return 0;
				}
			}
		}

		if (g == 8) {
			cout << "6_1\n\n" << "Дан список A ненулевых целых чисел размера 10.\nВывести значение первого из тех его элементов AK, которые удовлетворяют неравенству AK < A10.\nЕсли таких элементов нет, то вывести 0\n\n";
			int m = 0;
			PZ_6_1(m);
		}

		if (g == 9) {
			cout << "6_2\n\n" << "Дан список размера N. Найти номера двух ближайших элементов из этого списка\n(то есть элементов с наименьшим модулем разности) и вывести эти номера в порядке возрастания.\n\n";
			int n;
			int l = 0;
			int k = 99;
			int result = 0;
			cout << "Введите число N: ";
			cin >> n;
			if (n > 0) {
				PZ_6_2(n, l, k, result);
			}
			else {
				cout << "\nВы ввели число <=0 или не число!" << endl;
				return 0;
			}
		}
		if (g == 10) {
			cout << "6_3\n\n" << "Дан список A размера N и целое число K (1 < K < 4, K < N ).\nОсуществить циклический сдвиг элементов списка влево на K позиций\n(при этом AN перейдет в AN_K, AN - 1 — в ANK - 1, ..., A1 — в AN - K + 1).\nДопускается использовать вспомогательный список из 4 элементов.\n\n";
			int n;
			int k;

			cout << "Введите число N: ";
			cin >> n;
			if (n <= 0) {
				cout << "\nВы ввели число <=0 или не число!" << endl;
				return 0;
			}
			cout << "Введите число K: ";
			cin >> k;
			if (k < 1 || k > 4 || k >= n) {
				cout << "\nВы ввели число <=0 или не число!" << endl;
				return 0;
			}
			PZ_6_3(n, k);
		}
		if (g == 11) {
			cout << "7_1\n\n" << "Дана строка. Преобразовать в ней все строчные буквы (как латинские, так и русские) в прописные.\n\n";
			string str;
			cout << "Введите строку: ";
			cin >> str;
			PZ_7_1(str);
		}
		if (g == 12) {
			cout << "8_1\n\n" << "Дан словарь на 6 персон, найти и вывести их средний возраст.\n(Пример, {Андрей: 32, Виктор : 29, Максим : 18, …}, среднее 26, 33).\n\n";
			float sum = 0;
			map <string, int> book = { {"Андрей", 0},
							   {"Виктор", 0},
							   {"Максим", 0},
							   {"Владимир", 0},
							   {"Алексей", 0},
							   {"Анатолий", 0}};
			PZ_8_1(sum, book);
		}
	}
	else {
		cout << "Вы выбрали несуществующую практическую!" << endl;
		return 0;
	}
	return 0;
}


int PZ_2_1(int chislo, int result) {
	while (chislo)
	{
		result = result * 10 + chislo % 10;
		chislo /= 10;
	}
	cout << "\n" << result << endl;
	return 0;
}

int PZ_3_1(int chislo)
{
	if (chislo % 2 == 0)
	{
		if (chislo >= 10 && chislo <= 99) {
			cout << "\nДанное число двузначное четное" << endl;
		}
		else {
			cout << "\nДанное число недвузначное четное" << endl;
		}
	}
	else {
		if (chislo >= 10 && chislo <= 99) {
			cout << "\nДанное число двузначное нечетное" << endl;
		}
		else {
			cout << "\nДанное число недвузначное нечетное" << endl;
		}
	}
	return 0;
}

int PZ_3_2(float a, float b, float c)
{
	if (a < b && b < c)
	{
		cout << a * 2 << "\n";
		cout << b * 2 << "\n";
		cout << c * 2 << "\n";
	}
	else {
		cout << -a << "\n";
		cout << -b << "\n";
		cout << -c << endl;
	}
	return 0;
}

int PZ_4_1(int n, int delitel, long double fact, int i)
{

	delitel = i + 1;
	while (i < n) {
		i += 1;
		delitel *= i;
		fact += static_cast<float>(1) / delitel;
	}
	cout << "\n" << fact << endl;

	return 0;
}

int PZ_4_2(float a, float b, float c, float d)
{
	if (0 < a && a > b && b > 0) {
		while (c <= a) {
			c += b;
		}
		c = c - b;
		d = a - c;
		d = round(d * 1000) / 1000;
		cout << "\nДлина незанятой части отрезка: " << d << endl;
	}
	else {
		cout << "\nВы ввели неправильное число!" << endl;
	}

	return 0;
}

int PZ_5_1(int width, int height, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < (i + 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}

int PZ_5_2(float a, double b) {
	b = pow(a, 3);
	cout << "Третья степень числа А: " << b << "\n\n";

	return 0;
}

int PZ_6_1(int m) {
	list<int> a = {};
	list<int>::iterator i;
	random_device rd;
	for (int m = 0; m < 10; m++) {
		random_device  rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(1, 9);
		a.push_back(dist(gen));
	}
	for (i = a.begin(); i != a.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;
	for (auto iter = a.begin(); iter != a.end(); iter++) {
		if (*iter < a.back()) {
			cout << "\n" << *iter << endl;
			return 0;
		}
		else {
			continue;
		}
	}
	while (bool none = true) {
		cout << "\nТакого значения нет!" << endl;
		return 0;
	}
	return 0;
}

int PZ_6_2(int n, int l, int k, int result) {
	list<int> a = {};
	list<int>::iterator i;
	random_device rd;
	for (int m = 0; m < n; m++) {
		random_device  rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(1, 9);
		a.push_back(dist(gen));
	}
	for (i = a.begin(); i != a.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;

	list <int> otvet{};
	auto iter1 = a.begin();
	auto iter2 = ++a.begin();
	int poz1 = NULL;
	while (iter2 != a.end()) {
		if (*iter1 > *iter2) {
			result = *iter1 - *iter2;
			if (k > result) {
				k = result;
				poz1 = l;
			}
			else {
				k = k;
				poz1 = poz1;
			}
		}
		else {
			result = *iter2 - *iter1;
			if (k > result) {
				k = result;
				poz1 = l;
			}
			else {
				k = k;
				poz1 = poz1;
			}
		}
		++iter1;
		++iter2;
		++l;
	}
	int poz2 = poz1 + 1;
	cout << k << "\n\n" << poz1 << "\n" << poz2 << endl;
	return 0;
}

int PZ_6_3(int n, int k) {
	list<int> a = {};
	list<int>::iterator i;
	random_device rd;
	for (int m = 0; m < n; m++) {
		random_device  rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(1, 9);
		a.push_back(dist(gen));
	}
	cout << "Исходный список: ";
	for (i = a.begin(); i != a.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;

	for (int j = 0; j < k; j++) {
		int first = a.front();
		a.push_back(first);
		a.pop_front();
	}
	cout << "Список со сдвигом на K позиций: ";
	for (i = a.begin(); i != a.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;
	return 0;
}

int PZ_7_1(string str) {
	transform(str.begin(), str.end(), str.begin(), toupper);
	cout << str << endl;
	return 0;
}

int PZ_8_1(float sum, map <string, int> book) {
	map<string, int>::iterator iter;
	for (iter = book.begin(); iter != book.end(); iter++) {
		random_device  rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(1, 99);
		iter->second = dist(gen);
		cout << iter->first << " - " << iter->second << "\n";
		sum += iter->second;
	}
	float result = sum / 6;
	cout << "\n" << result << endl;
	return 0;
}