#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin) {
    double sum = 0;
    for (int i = 0; i < vin.size(); i++) {
        sum = sum + vin[i];
    }

    return sum;

}
int main() {
    std::vector<double> v;
    int num;
    std::cin >> num;
    int elem;
    for (int i = 0;i < num;i++) {
        std::cin >> elem;
        v.push_back(elem);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}