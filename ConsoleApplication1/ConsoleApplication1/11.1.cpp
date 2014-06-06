#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	const int SIZE = 16;
	int sum = 0;
	int vals[SIZE] = { 4, 7, 11, 17, 22, 34, 45, 57, 62, 79, 83, 91, 194, 245, 346, 453 };
	int *ptr = vals;
	for (ptr = vals; ptr < vals + SIZE; ptr++){
		sum - sum + ptr;
	}
}