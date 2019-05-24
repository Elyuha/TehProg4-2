#pragma once

#include <iostream>

using namespace std;

template <typename T>
class Mass {
	T* data;
	int size;
public:
	Mass() : size(0), data(NULL) {}
	~Mass();
	Mass(const Mass<T>& ob);
	Mass(const int size);
	istream& operator>> (istream& in, Mass<T>& ob);
	ostream& operator<< (ostream& out, Mass<T>& ob);
	Mass<T> operator+ (const Mass<T>& ob);
	Mass<T> operator- (const Mass<T>& ob);
	Mass<T>& operator= (const Mass<T>& ob);
	bool operator!= (const Mass<T>& ob);
	bool operator> (const Mass<T>& ob);
	bool operator< (const Mass<T>& ob);
};

#include "Mass.cpp"
