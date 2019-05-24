#include <iostream>
#include "Func.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int choise;
	bool exit = true;
	while (exit) {
		system("cls");
		cout << "Что вы хотите сделать?" << endl;
		cout << "1) int" << endl;
		cout << "2) char" << endl;
		cout << "3) double" << endl;
		cout << "4) float" << endl;
		cout << "0) Апути" << endl;
		cout << "Ваш выбор: ";
		cin >> choise;
		switch (choise)
		{
		case 1: workWithMass(1); break;
		case 2: workWithMass('a'); break;
		case 3: workWithMass(1.0); break;
		case 4: workWithMass(1.0f); break;
		case 0: exit = false; break;
		default:
			break;
		}
	}
	return 0;
}

