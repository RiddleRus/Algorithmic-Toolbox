#include <iostream>
#include <cmath>

long long fibb(long long n){
    return (((std::pow((1 + std::sqrt(5)) / 2, n) - std::pow((1 - std::sqrt(5)) / 2, n)) / std::sqrt(5)));
}

long long last_number(long long n) {
    return fibb(n % 60) % 10;
}


int main() {
    unsigned n;
    std::cin >> n;
    unsigned c = last_number(n);
    std::cout << c << '\n';
    }
