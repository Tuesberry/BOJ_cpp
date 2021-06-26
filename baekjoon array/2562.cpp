#include <iostream>

int main() {
	int list[9], max = 0;
	for (int i = 0; i < 9; i++) {
		std::cin >> list[i];
		if (list[max] < list[i])max = i;
	}
	std::cout << list[max] << std::endl;
	std::cout << max + 1 << std::endl;
}