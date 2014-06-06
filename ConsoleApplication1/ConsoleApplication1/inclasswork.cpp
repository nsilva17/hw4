#include <iostream>
#include <string>
using namespace std;



	//int num = -2;
	//int *ptr1 = &num;
	//int num1 = -23;
	//string hello;
	//float  cat = 4.5;
	//double down = 345;
	//int n;
	//int*p = &n;
	//cout << "give me a number 10-50";
	//cin >> *p;
	//int sum = 0;
	//for (int i = 1; i <= *p; i++){
	//sum += i;
	//}
	//const int SIZE = 4;
	//int sum = 0;
	//int vals[SIZE] = { 4, 7, 11, 17 };
	//int *ptr = vals;
	//for (ptr = vals; ptr < vals + SIZE; ptr++){
	//sum - sum + ptr;
	//	}
	//cout << "summation of" << sum << " = " << sum << endl;
	//cout << "adress of hello:" << int(&hello) << endl;
	//cout << "Number of Bytes:" << sizeof(hello) << endl;
	//cout << "Address of hello 0x:" << &hello << endl;

	//	cout << "adress of cat:" << int(&cat) << endl;
	//	cout << "Number of Bytes:" << sizeof(cat) << endl;
	//cout << "Address of cat 0x:" << &cat << endl;

	//	cout << "adress of down:" << int(&down) << endl;
	//	cout << "Number of Bytes:" << sizeof(down) << endl;
	//	cout << "Address of 0x:" << &down << endl;

	//cout << "adress of num:" << int(&num1) << endl;
	//cout << "Number of Bytes:" << sizeof(num1) << endl;
	//	cout << "Address of num: 0x:" << &num1 << endl;
	//return 0;
	//}
	//class person {
	//private:
		//string name;
		//int age;

	//public:
		//person(){ name = "george whitworth"; age = 198; }
		//person(string n, int a) { name = n; age = a; }
		//string getName(){ return name; }
		//int getAge(){ return age; }
		//void birthday(){ age++; }
//	};
//	void prompt_count(int* size){
//		cout << "how many numbers will you enter?";
//		cin >> *size;
//	}
	int *alloc_array(int size){
		int*pintarray = new int[size];
		for (int i = 0; i < size; i++)
			pintarray[i] = 42;
	}
	void populate_numbers(int* numbers, int size){
		for (int*curr = numbers; curr < numbers + size; curr++){
			cout << "enter number:";
			cin >> *curr;
		}
		int countevens(int numbers, int size) {
			int evens = 0;
			for (int i = 0; i < size; i++){
				cout << "enter numbers";
				cin >> numbers[i]
					return evens;
				int positive(int numbers, int size){
					for (int i = 1; i>0; i++){
						cout << positives << endl;
					}
	int main(){
//		person * p = NULL;
	//	p = new person("alex schmit ", 23);
		//cout << p->getName();
		//cout << "name:" << p->getName() << ", age" << p->getAge() << endl;
//		cout << "happy birthday" << p->getName() << "!";
	//	p->birthday();
		//cout << "you are now" << p->getAge() << "years old\n\n";
		//delete p;	
		int nums;
		int* numbers = alloc_array(nums);
		populate_numbers(numbers, nums);
		cout << "you gave me" << countevens(numbers, nums)
			<< "evens.\n";
		delete[] numbers;
	}