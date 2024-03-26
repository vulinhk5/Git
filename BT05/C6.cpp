#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
bool areSamePrime(int a, int b) {
    if (a != b)
        return false;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int greatest_common_divisor = gcd(num1, num2);
    cout<< greatest_common_divisor <<endl;
    bool same_prime = areSamePrime(num1, num2);
    if (same_prime)
        cout << num1 << " and " << num2 << " are the same prime." << endl;
    else
        cout << num1 << " and " << num2 << " are not the same prime." <<endl;

    return 0;
}
