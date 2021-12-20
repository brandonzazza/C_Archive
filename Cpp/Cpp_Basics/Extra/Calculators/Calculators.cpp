// Factorial Calculator
// Author Brandon Zazza

#include <iostream>

using namespace std;

int factorial_calculator(int number) {
	int new_number = 1;

	for (int i = 1; number >= i;) {
		new_number = new_number * i;
		i++;
	}
	return new_number;
}

int main() {
	int raw_factorial;
	int answer;

	cout << "Enter number to calculate factorial: ";
	cin >> raw_factorial;
	answer = factorial_calculator(raw_factorial);
	cout << "\n" << answer;
	return 0;
}