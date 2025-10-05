#include "../Math.h"
#include <iostream>

int main(void) {
    std::cout << Math::square(3);
    std::cout << Math::isPrime(123);
    std::cout << Math::parseInt("5G");
    std::cout << Math::add(3, 5);
    std::cout << Math::power(2, 8) << std::endl;


    return 0;
}
