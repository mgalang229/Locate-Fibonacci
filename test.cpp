#include <iostream>
#include <iomanip>
#include <cmath>
#define GOLDENRATIO 1.61803398875
#define GOLDENRATIO2 0.61803398875
using namespace std;

int main(){
	
	double result;
	int position;
	
	cout << "Enter position of the desired Fibonacci number: ";
	cin >> position;
	
	result = (pow(GOLDENRATIO, position) + pow(GOLDENRATIO2, position)) / sqrt(5);
	cout << "The Fibonacci number at position " << position << " is: " << result;
	
	return 0;
}
