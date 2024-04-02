#include <iostream>
using namespace std;

void star(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}
int main() {
    int cot;
    cin >>cot;

    for (int i = 0; i <cot; ++i) {
        star(cot - i - 1, 2 * i + 1);
    }

    return 0;
}

