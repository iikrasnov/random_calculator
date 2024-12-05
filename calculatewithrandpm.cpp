#include<iostream>
#include<time.h>
int main() {
	using namespace std;
	int num1, num2, obj, res;
	int start_1 = 1;
	int end_1 = 100;


	srand(time(NULL));

	num1 = rand() % (end_1 - start_1 + 1) + start_1;
	num2 = rand() % (end_1 - start_1 + 1) + start_1;
	obj = rand() % 4;
	cout << num1;
	switch (obj) {
	case 0: cout << "+"; res = num1 + num2;break;
	case 1: cout << "-"; res = num1 - num2;break;
	case 2: cout << "*"; res = num1 * num2;break;
	case 3: cout << "/"; res = num1 / num2;break;
	default:cout << "ERROR";break;
	}
	cout << num2<< endl; 
	cout << res;
	return 0; 
}
