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
	cout << "�������� ������������. ��� ����� ������� ����� �� 1 �� 10\n" << "1 - PZ_2_1\n" << "2 - PZ_3_1\n" << "3 - PZ_3_2\n" << "4 - PZ_4_1\n" << "5 - PZ_4_2\n" << "6 - PZ_5_1\n" << "7 - PZ_5_2\n" << "8 - PZ_6_1\n" << "9 - PZ_6_2\n" << "10 - PZ_6_3\n" << "11 - PZ_7_1\n" << "12 - PZ_8_1\n\n";
	cin >> g;
	cout << "\n";

	if (g >= 1 && g <= 12) {
		cout << "������� 17\n";
		cout << "������������ #";
		if (g == 1) {
			cout << "2_1\n" << "���� ����������� �����. ������� �����, ���������� ��� ��������� ��������� ����� ������ ������.\n\n";
			int chislo;

			cout << "������� ���������� �����: ";
			cin >> chislo;

			if (chislo > 99 && chislo < 1000) {
				PZ_2_1(chislo, 0);
			}
			else {
				cout << "\n�� ����� �������� ����� ��� �� �����!" << endl;
				return 0;
			}
		}

		if (g == 2) {
			cout << "3_1\n\n" << "���� ����� ������������� �����. ��������� ���������� ������������: ������� ����� �������� ������ ����������.\n\n";
			int chislo;

			cout << "������� ����� ������������� �����: ";
			cin >> chislo;

			if (chislo > 0) {
				PZ_3_1(chislo);
			}
			else {
				cout << "\n�� ����� ������������� ����� ��� �� �����" << endl;
				return 0;
			}
		}

		if (g == 3) {
			cout << "3_2\n\n" << "���� ��� ���������� ������������� ����: A, B, C. ���� �� �������� ����������� �� �����������, �� ������� ��;\n� ��������� ������ �������� �������� ������ ���������� �� ���������������. ������� ����� �������� ���������� A, B, C.\n\n";
			float a;
			float b;
			float c;

			cout << "������� ����� A: ";
			cin >> a;
			if (!cin || a < -10e9 || a > 10e9) {
				cout << "\n�� ����� �������� �����!" << endl;
				return 0;
			}

			cout << "������� ����� B: ";
			cin >> b;
			if (!cin || b < -10e9 || b > 10e9) {
				cout << "\n�� ����� �������� �����!" << endl;
				return 0;
			}

			cout << "������� ����� C: ";
			cin >> c;
			if (!cin || c < -10e9 || c > 10e9) {
				cout << "\n�� ����� �������� �����!" << endl;
				return 0;
			}
			cout << "\n";

			PZ_3_2(a, b, c);
			return 0;

		}

		if (g == 4) {
			cout << "4_1\n\n" << "���� ����� ����� N (>0). ��������� ���� ����, ����� ����� 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1 / (N!)\n(��������� N!� N - ��������� � ���������� ������������ ���� ����� ����� �� 1 �� N : N!= 1 - 2 - ...N).\n���������� ����� �������� ������������ ��������� ��������� e = exp(1)\n\n";
			int n;
			cout << "������� ����� N: ";
			cin >> n;

			if (n > 0) {
				PZ_4_1(n, 0, 1, 0);
			}
			else {
				cout << "\n�� ����� ������������ �����!" << endl;
				return 0;
			}
		}

		if (g == 5) {
			cout << "4_2\n\n" << "���� ������������� ����� A � B (A > �).\n�� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� �(��� ���������).\n�� ��������� �������� ��������� � �������, ����� ����� ��������� ����� ������� A.\n\n";
			float a;
			float b;
			cout << "������� ������������� ����� A: ";
			cin >> a;
			if (a <= 0) {
				cout << "\n�������!" << endl;
				return 0;
			}

			cout << "������� ������������� ����� �: ";
			cin >> b;
			if (b <= 0) {
				cout << "\n�������!" << endl;
				return 0;
			}

			PZ_4_2(a, b, 0, 0);
		}

		if (g == 6) {
			cout << "5_1\n\n" << "��������� ���������, � ������� ������� �������� �����������,\n� ������� � ������ ������ 1 ���������, �� ������ - 2, � ������� - 3, ..., � ������ � ������� m - m ���������.\n\n";
			int width;
			cout << "������� ���������� �����: ";
			cin >> width;

			if (width > 0) {
				PZ_5_1(width, width, width);
			}
			else {
				cout << "\n�� ����� ����� <=0 ��� �� �����!" << endl;
				return 0;
			}
		}

		if (g == 7) {
			cout << "5_2\n\n" << "������� ������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ���������� B\n(A � �������, B � �������� ��������; ��� ��������� �������� �������������).\n� ������� ���� ������� ����� ������ ������� ���� ������ �����.\n\n";
			float a;

			for (int i = 1; i <= 5; i++) {
				cout << "������� ����� �: ";
				cin >> a;
				if (a > 0) {
					PZ_5_2(a, 0);
				}
				else {
					cout << "\n�� ����� ����� <=0 ��� �� �����!" << endl;
					return 0;
				}
			}
		}

		if (g == 8) {
			cout << "6_1\n\n" << "��� ������ A ��������� ����� ����� ������� 10.\n������� �������� ������� �� ��� ��� ��������� AK, ������� ������������� ����������� AK < A10.\n���� ����� ��������� ���, �� ������� 0\n\n";
			int m = 0;
			PZ_6_1(m);
		}

		if (g == 9) {
			cout << "6_2\n\n" << "��� ������ ������� N. ����� ������ ���� ��������� ��������� �� ����� ������\n(�� ���� ��������� � ���������� ������� ��������) � ������� ��� ������ � ������� �����������.\n\n";
			int n;
			int l = 0;
			int k = 99;
			int result = 0;
			cout << "������� ����� N: ";
			cin >> n;
			if (n > 0) {
				PZ_6_2(n, l, k, result);
			}
			else {
				cout << "\n�� ����� ����� <=0 ��� �� �����!" << endl;
				return 0;
			}
		}
		if (g == 10) {
			cout << "6_3\n\n" << "��� ������ A ������� N � ����� ����� K (1 < K < 4, K < N ).\n����������� ����������� ����� ��������� ������ ����� �� K �������\n(��� ���� AN �������� � AN_K, AN - 1 � � ANK - 1, ..., A1 � � AN - K + 1).\n����������� ������������ ��������������� ������ �� 4 ���������.\n\n";
			int n;
			int k;

			cout << "������� ����� N: ";
			cin >> n;
			if (n <= 0) {
				cout << "\n�� ����� ����� <=0 ��� �� �����!" << endl;
				return 0;
			}
			cout << "������� ����� K: ";
			cin >> k;
			if (k < 1 || k > 4 || k >= n) {
				cout << "\n�� ����� ����� <=0 ��� �� �����!" << endl;
				return 0;
			}
			PZ_6_3(n, k);
		}
		if (g == 11) {
			cout << "7_1\n\n" << "���� ������. ������������� � ��� ��� �������� ����� (��� ���������, ��� � �������) � ���������.\n\n";
			string str;
			cout << "������� ������: ";
			cin >> str;
			PZ_7_1(str);
		}
		if (g == 12) {
			cout << "8_1\n\n" << "��� ������� �� 6 ������, ����� � ������� �� ������� �������.\n(������, {������: 32, ������ : 29, ������ : 18, �}, ������� 26, 33).\n\n";
			float sum = 0;
			map <string, int> book = { {"������", 0},
							   {"������", 0},
							   {"������", 0},
							   {"��������", 0},
							   {"�������", 0},
							   {"��������", 0}};
			PZ_8_1(sum, book);
		}
	}
	else {
		cout << "�� ������� �������������� ������������!" << endl;
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
			cout << "\n������ ����� ���������� ������" << endl;
		}
		else {
			cout << "\n������ ����� ������������ ������" << endl;
		}
	}
	else {
		if (chislo >= 10 && chislo <= 99) {
			cout << "\n������ ����� ���������� ��������" << endl;
		}
		else {
			cout << "\n������ ����� ������������ ��������" << endl;
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
		cout << "\n����� ��������� ����� �������: " << d << endl;
	}
	else {
		cout << "\n�� ����� ������������ �����!" << endl;
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
	cout << "������ ������� ����� �: " << b << "\n\n";

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
		cout << "\n������ �������� ���!" << endl;
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
	cout << "�������� ������: ";
	for (i = a.begin(); i != a.end(); i++) {
		cout << (*i) << " ";
	}
	cout << endl;

	for (int j = 0; j < k; j++) {
		int first = a.front();
		a.push_back(first);
		a.pop_front();
	}
	cout << "������ �� ������� �� K �������: ";
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