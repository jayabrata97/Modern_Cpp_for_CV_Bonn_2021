#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    const int N = 100;
    vector<int> vec;  // size 0, capasity 0
    vec.reserve(N);   // size 0, capacity 100
    for (int i = 0; i < N; ++i) {
        vec.emplace_back(i);
    }
    // vec ends with size 100, capacity 100
    cout << vec.back() << endl;

    vector<int> vec2;  // size 0, capacity 0
    for (int i = 0; i < N; ++i) {
        vec2.emplace_back(i);
    }
    // vec2 ends with size 100, capacity 128
    cout << vec2.back() << endl;
}
