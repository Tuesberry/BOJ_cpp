#include <iostream>

int main() {
	int n, max;
	std::cin >> n;
	int* list = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> list[i];
		if (i == 0)max = list[i];
		else { if (max < list[i])max = list[i]; }
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ((double)list[i] / (double)max * 100.0);
	}
	std::cout << sum / (double)n;
	delete[]list;
}
