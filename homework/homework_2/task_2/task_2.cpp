#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[]) {
    // std::string file1{"trial"};
    // std::string file2{"trial"};
    // std::cout << "Enter first filename" << std::endl;
    // std::cin >> file1;
    // std::cout << "Enter second filename" << std::endl;
    // std::cin >> file2;
    if (argc > 3) {
        std::cerr << "There should be only two argument" << std::endl;
        return 1;
    } else {
        std::stringstream filename1{argv[1]};
        std::stringstream filename2{argv[2]};
        int num1 = 0;
        int num2 = 0;
        std::string ext1{"init"};
        std::string ext2{"initial"};
        filename1 >> num1 >> ext1;
        filename2 >> num2 >> ext2;
        std::string pre_ext1{".txt"};
        std::string pre_ext2{".png"};
        // std::cout << ext1 << std::endl;
        // std::cout << ext2 << std::endl;

        if ((ext1 == pre_ext1) && (ext2 == pre_ext1)) {
            // std::cout << "same\n";
            float out = (num1 + num2) / 2.0;
            std::cout << "Output is: " << out << std::endl;
            return 0;
        } else if ((ext1 == pre_ext2) && (ext2 == pre_ext2)) {
            float out = num1 + num2;
            std::cout << "Output is: " << out << std::endl;
            return 0;
        } else if ((ext1 == pre_ext1) && (ext2 == pre_ext2)) {
            float out = num1 % num2;
            std::cout << "Output is: " << out << std::endl;
            return 0;
        } else {
            std::cerr << "Extensions do not match." << std::endl;
            return 1;
        }
    }
}