#ifndef FUNC_CPP
#define FUNC_CPP

#include "Func.h"
#include <iostream>

using namespace std;

template <typename T>
void workWithMass(T) {
	system("cls");
	int size;
	int choise;
	bool exit = true;
	cout << "������� ������ �������: ";
	cin >> size;
	Mass<T> first(size);
	Mass<T> second(size);
	Mass<T> res;
	cout << "���� ������� �������: " << endl;
	cin >> first;
	cout << "���� ������� �������: " << endl;
	cin >> second;
	while (exit) {
		system("cls");
		cout << "first = " << first << endl;
		cout << "second = " << second << endl << endl;
		cout << "��� �� ������ �������?" << endl;
		cout << "1) res = first + second" << endl;
		cout << "2) res = first - second" << endl;
		cout << "3) first != second" << endl;
		cout << "4) first < second" << endl;
		cout << "5) first > second" << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> choise;
		switch (choise) {
		case 1:
			res = first + second;
			cout << "res = " << res << endl;
			break;
		case 2: 
			res = first - second;
			cout << "res = " << res << endl; 
			break;
		case 3: (first != second) ? (cout << "true" << endl) : (cout << "false" << endl); break;
		case 4: (first > second) ? (cout << "true" << endl) : (cout << "false" << endl); break;
		case 5: (first < second) ? (cout << "true" << endl) : (cout << "false" << endl); break;
		case 0: exit = false; break;
		default:
			break;
		}
		system("pause");
	}
}

#endif