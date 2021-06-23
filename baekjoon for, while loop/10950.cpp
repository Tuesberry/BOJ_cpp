#include <iostream>

int main() {
	int t, num1, num2;
	std::cin >> t;
	for (int i = 1; i <= t; i++) {
		std::cin >> num1 >> num2;
		std::cout << num1 + num2 << '\n';
	}
}