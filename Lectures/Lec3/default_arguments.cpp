#include <iostream>
using std::cout;
using std::endl;
using std::string;

string SayHello(const string& to_whom = "World") {
    return "Hello " + to_whom + "!";
}

int main() {
    // Will call SayHello using the default argument
    cout << SayHello() << endl;

    // This will override the default argument
    cout << SayHello(" students ") << endl;
    return 0;
}