#include <iostream>

int main() {
    int a = 15, b = 100, c = 50;
    a + b < 100 ? 
     std::cout <<  std::min(std::min(a, b), c) 
     : (b -=10, a -= 10, c -= 10, std::cout <<"eeeeee" << a * a << " " << b * b << " " << c * c);
    return 0;
}