#include <iostream>

int main() {
	int n, min, max, temp;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		if (i == 0) { min = temp; max = temp; }
		else {
			if (min > temp)min = temp;
			else if (max < temp)max = temp;
		}
	}
	std::cout << min << " " << max << std::endl;
}