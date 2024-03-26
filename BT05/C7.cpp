#include <iostream>
using namespace std;

void print(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}
int main() {
    int M = 3;
    int N = 5;
    print(M, N);
    return 0;
}

