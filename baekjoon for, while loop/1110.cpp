#include <iostream>

int main() {
	int n, a, b, cnt = 0, temp;
	std::cin >> n;
	a = n / 10;
	b = n % 10;
	do {
		temp = b;
		b = (a + b) % 10;
		a = temp;
		cnt++;
		if (a * 10 + b == n)break;
	} while (true);
	std::cout << cnt << '\n';
}