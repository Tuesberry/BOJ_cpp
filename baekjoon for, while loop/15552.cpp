#include <iostream>

int main() {
	int n, num1, num2;
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> num1 >> num2;
		std::cout << num1 + num2 << '\n';
	}
}