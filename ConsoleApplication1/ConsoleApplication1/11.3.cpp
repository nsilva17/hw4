#include <iostream>
#include <string>
using namespace std;
int * doublecapacity(const int* list, int size);

int main(){
	int * doublecapacity(const int* list, int size) {
		int* doublecapacity = new int[size];
		for (int list = 0; list < size; list++)
			doublecapacity[list] = 42;
		return doublecapacity;
	}
}