#include <iostream>
using namespace std;
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrime(int N) {
    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int N;
    cin >> N;
    printPrime(N);
    return 0;
}

