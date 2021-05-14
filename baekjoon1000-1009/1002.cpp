#include<iostream>
#include<cmath>
int main() {
	int n ,x1, y1, r1, x2, y2, r2;
	double d;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (d == 0) {
			if (r1 != r2)std::cout << 0;
			else std::cout << -1;
		}
		else if (r1 + r2 > d && abs(r1 - r2) < d)std::cout << 2;
		else if (r1 + r2 == d || abs(r1 - r2) == d)std::cout << 1;
		else std::cout << 0;
		
		std::cout << '\n';
	}
}