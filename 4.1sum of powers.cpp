#include <iostream>
#include <cmath>
int main() {
	int x;
	int n;
	std::cin >> x;
	std::cin >> n;
	int total = 0;
	int i = 1;
	while (i < n + 1) {
		total = total + pow(x,i);
		i = i + 1;
	}
	std::cout << total << std::endl;
}