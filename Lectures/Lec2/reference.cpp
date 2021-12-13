#include <iostream>

int main() {
    int num = 42;
    int &ref = num;
    const int &kRef = num;
    ref = 0;
    std::cout << ref << " " << num << " " << kRef << std::endl;
    num = 42;
    std::cout << ref << " " << num << " " << kRef << std::endl;
    return 0;
}