#include <iostream>

int main() {
	int n, rem;
	std::cin >> n;
	rem = n % 2;
	if (rem == 0) {
		std::cout << "this is even";
	}
	else {
		std::cout << "this is odd";
	}
}