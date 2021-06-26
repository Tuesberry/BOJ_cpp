#include <iostream>

int main() {
	int a, b, c, list[10] = { 0,0,0,0,0,0,0,0,0,0 }, temp;
	std::cin >> a >> b >> c;
	int num = a * b * c;
	while (num > 0)
	{
		list[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << list[i] << std::endl;
	}
}