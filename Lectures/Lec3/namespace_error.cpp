#include <cmath>
#include <iostream>
using namespace std;  // std namespace is used
// Self - defined function power shadows std :: pow
double pow(float x, float exp) {
    float res = 1.0;
    for (int i = 0; i < exp; i++) {
        res *= x;
    }
    return res;
}
int main() {
    float x = 2;
    float exp = 2;
    cout << "2.0^2 = " << pow(x, exp) << endl;
    return 0;
}