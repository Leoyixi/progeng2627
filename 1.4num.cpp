#include <iostream>

int main() {
	double length,width,peri,area;
	std::cout << "please enter the first number" << std::endl;
	std::cin >> length;

	std::cout << "please enter the second number" << std::endl;
	std::cin >> width;

	peri = 2*length + 2*width;
	area = length * width;
	std::cout << " perimeter is : " << peri << std::endl;
	std::cout << "area is : " << area << std::endl;
}