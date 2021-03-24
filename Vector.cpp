#include "Vector.h"
#include<string>
#include<cmath>
#include <iostream>
using namespace std;

Vector::Vector() {
	data = new int[2];
	capacity = 2;
	size = 0;
}

//Vector:: Vector(int* myData, int myCapacity, int mySize) {
//	data = myData;
//	capacity = myCapacity;
//	size = mySize;
//	cout << "1";
//}

Vector::Vector(int mcapacity)//constructor
{
	capacity = mcapacity;
	data = new int[mcapacity];
	size = 0;
	
}

Vector::Vector(const Vector& vec)//copy-constructor
{
	capacity = vec.capacity;
	size = vec.size;
	data = new int[capacity];
	for (int i = 0; i < capacity; i++)
		data[i] = vec.data[i];
	
}

Vector::~Vector()
{
	if (data)
		delete[] data;
	data = NULL;
	size = 0;
}

void Vector::print()
{
	cout << "capacity: " << capacity << " size: " << size << " values: ";
	for (int i = 0; i < size; i++)
		cout << data[i] << ' ';
	cout << endl;
}

int Vector::getCapacity() {	// const
	return capacity;
}

int Vector::getSize() {	// const
	return size;
}

void Vector::assign(const Vector& vec)//like =
{ 
	capacity = vec.capacity;
	size = vec.size;
	for (int i = 0; i < size; i++) {
		data[i] = vec.data[i];
	}
}

bool Vector:: isEqual(const Vector& r1) const {//like==

	if (r1.size != size)
		return false;
	else {
		for (int i = 0; i < size; i++) {
			if (data[i] != r1.data[i])
				return false;
		}
		return true;
	}
}

int& Vector::at(int index) {//return the value in index
	if ((index > (size-1))||(index<0)) {
		cout << "ERROR" << endl;
		return data[0];
	}
	else
		return data[index];
}

void Vector::clear() {//clear the data
	for (int i = 0; i < size; i++)
		data[i] = 0;
	size = 0;
}

void Vector::delLast() {//dalete tha last value
	if (size == 0)
		cout << "ERROR" << endl;
	else {
		data[size] = 0;
		size--;
	}
}
void Vector:: insert(int val) {//insert value to last
	if ((size < capacity)) {
		data[size++] = val;
	}
	else
	{
		
		int*  ezer = new int[capacity * 2];
		for (int i = 0; i < size; i++) {
			ezer[i] = data[i];
		}
		delete[] data;
		data = ezer;
		data[size++] = val;
		capacity = capacity * 2;
	}
}

int Vector:: strcatcat(Vector& r1) {////machpala vectorit
	if (size != r1.size) {
		cout << "ERROR" << endl;
		return -1;
	}
	else {
		int mone = 0;
		for (int i = 0; i < size; i++) {
			int a = data[i];
			mone += a*r1.data[i];
		}
		return mone;
	}
}

Vector Vector::strnewcat( Vector r1)  { //shirshur vectorim

	Vector vec(capacity + r1.getCapacity());
	//vec.size = size + r1.getSize();	// This is the right one...
	vec.size = size;
	int i = 0;
	for ( i = 0; i < size; i++) {
		vec.data[i] = data[i];
	}
	


}
	//while ((i < vec.getCapacity()) & (j < r1.getSize())) {
	//	vec.data[i] = r1.data[j];
	//	i++;
	//	j++;

	//}

	
	/*for (int j = 0;(i < vec.getCapacity())&(j<r1.getSize()); j++, i++) {
		int a= r1.data[j];
		vec.insert(a);
		}
		return vec;
}*/
