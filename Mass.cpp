#ifndef MASS_CPP
#define MASS_CPP

#include <iostream>
#include <exception>
#include "Mass.h"

using namespace std;

template<typename T>
Mass<T>::Mass(const int size) {
	try {
		if (size <= 0) {
			std::exception ex("Ќельз€ создать массив нулевого или отрицательного размера");
			throw ex;
		}
		data = new T[size];
		this->size = size;
	}
	catch (std::exception& ex) {
		cout << ex.what() << endl;
		system("pause");
		exit(0);
	}
}

template<typename T>
Mass<T>::Mass(const Mass<T>& ob) {
	this->data = new T[ob.size];
	this->size = ob.size;
	for (int i = 0; i < size; i++) 
		this->data[i] = ob.data[i];
}

template<typename T>
Mass<T>::~Mass() {
	delete[] data;
}

template<typename T>
istream& Mass<T>::operator>>(istream& in, Mass<T>& ob) {
	T input;
	for (int i = 0; i < ob.size; i++) {
		cout << "¬ведите " << i + 1 << "е значение массива: ";
		in >> input;
		ob.data[i] = input;
	}
	return in;
}

template<typename T>
ostream& Mass<T>::operator<<(ostream& out, Mass<T>& ob) {
	for (int i = 0; i < ob.size; i++) 
		out << ob.data[i] << " ";
	return out;
}

template<typename T>
Mass<T> Mass<T>::operator+(const Mass<T>& ob) {
	Mass<T> res(ob.size);
	for (int i = 0; i < size; i++)
		res.data[i] = this->data[i] + ob.data[i];
	return res;
}

template<typename T>
Mass<T> Mass<T>::operator-(const Mass<T>& ob) {
	Mass<T> res(ob.size);
	for (int i = 0; i < size; i++)
		res.data[i] = this->data[i] - ob.data[i];
	return res;
}

template<typename T>
Mass<T> &Mass<T>::operator=(const Mass<T>& ob) {
	this->size = ob.size;
	this->data = new T[ob.size];
	for (int i = 0; i < ob.size; i++)
		this->data[i] = ob.data[i];
	return *this;
}

template<typename T>
bool Mass<T>::operator!=(const Mass<T>& ob) {
	bool res = true;
	for (int i = 0; i < this->size; i++) {
		if (data[i] == ob.data[i]) {
			res = false;
			break;
		}
		i++;
	}
	return res;
}

template<typename T>
bool Mass<T>::operator>(const Mass<T>& ob) {
	int j = 0;
	for (int i = 0; i < this->size; i++) {
		if (data[i] > ob.data[i])
			j++;
		i++;
	}
	if (j > (this->size / 2))
		return false;
	else
		return true;
}

template<typename T>
bool Mass<T>::operator<(const Mass<T>& ob) {
	int j = 0;
	for (int i = 0; i < this->size; i++) {
		if (data[i] < ob.data[i])
			j++;
		i++;
	}
	if (j > (this->size / 2))
		return false;
	else 
		return true;
}

#endif