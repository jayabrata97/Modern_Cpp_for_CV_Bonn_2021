#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<std::string> names = {"Nacho", "Joy"};

    names.emplace_back("Suresh");

    cout << "First name: " << names.front() << endl;
    cout << "Last name: " << names.back() << endl;
    cout << "Last number: " << numbers.back() << endl;
    return 0;
}
