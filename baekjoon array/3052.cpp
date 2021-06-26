#include <iostream>
#include <vector>
int main() {
	std::vector<int>list;
	int temp;
	bool existence = false;
	for (int i = 0; i < 10; i++) {
		std::cin >> temp;
		temp %= 42;
		if (i == 0)list.push_back(temp);
		else {
			existence = false;
			for (int j = 0; j < list.size(); j++) {
				if (list[j] == temp)existence = true;
			}
			if (!existence)list.push_back(temp);
		}
	}
	std::cout << list.size() << std::endl;
}