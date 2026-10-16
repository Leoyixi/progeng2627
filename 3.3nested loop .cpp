#include <iostream>
int main() {
	int n;
	std::cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int r = i;r <= i*n;r = r + i) {
			std::cout << r<<"  ";
		}
		std::cout << std::endl;
	}
}