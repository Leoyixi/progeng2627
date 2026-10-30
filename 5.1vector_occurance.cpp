#include <iostream>
#include <vector>
int main() {
	int num;
	std::vector<int> v;
	std::cin >> num;
	int now = 0;
	while (now < num) {
		int elem;
		std::cin >> elem;
		v.push_back(elem);
		now = now + 1;
	}
	int target;
	std::cin >> target;
	int count = 0;
	for (int i = 0; i < num; i++) {
		if (v[i] == target){
			count = count + 1;
		}
	}
	std::cout << count << std::endl;
}