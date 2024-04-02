#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool arePrime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    int v= gcd(a, b);
    cout <<v<< endl;
    return 0;
}

