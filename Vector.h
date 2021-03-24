#pragma once
#include<cstring>
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
	int getCapacity();//return capacity
	int	getSize();//return size
	void assign( Vector vec);//like =
	bool isEqual (const Vector& r1) const;//like ==
	int& at(int index);//return the value in index
	void clear();//clear the data
	void delLast();//dalete tha last value
	void insert(int val);// insert value to data
	int strcatcat(Vector& r1);//machpala vectorit
	Vector strnewcat( Vector r1) ;//shirshur vectorim
};

