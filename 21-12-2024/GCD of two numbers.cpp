#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1 = 56, num2 = 12;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;

    return 0;
}
