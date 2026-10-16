#include <iostream>

int main(){
	for (int i = 0; i < 5; i = i + 1) {
		for (int n = 0;n < i;n = n + 1) {
			std::cout << "*";
		}
		std::cout << i << std::endl;
	}
}