#pragma once
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class Vector
{
private:
	int* data;
	int capacity;
	int size;
public:
	Vector();
	//Vector(int* myData, int myCapacity, int mySize); v
	Vector(int mcapacity);//boild v
	Vector(const Vector& vec);//•	copy constructor. v
	~Vector(); //	destructor.v
	void print();//print
	int getCapacity()const ;//return capacity
	int	getSize()const;//return size
	void assign(const Vector& vec);//like =
	bool isEqual (const Vector& r1) const;//like ==
	int& at(int index);//return the value in index
	void clear();//clear the data
	void delLast();//dalete tha last value
	void insert(int val);// insert value to data
	int strcatcat(Vector& r1);//machpala vectorit
	Vector strnewcat(const Vector& r1) const;//shirshur vectorim
};

