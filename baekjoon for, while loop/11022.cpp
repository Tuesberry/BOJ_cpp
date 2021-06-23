#include <iostream>

int main() {
	int n, num1, num2;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> num1 >> num2;
		std::cout << "Case #" << i << ": " << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
	}
}