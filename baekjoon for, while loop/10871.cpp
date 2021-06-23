#include <iostream>

int main() {
	int n, x;
	std::cin >> n >> x;
	int *list = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> list[i];
	}
	for (int i = 0; i < n; i++) {
		if (list[i] < x) { 
			std::cout << list[i]; 
			if (i != n - 1)std::cout << " ";
		}
	}
	delete[] list;
}