#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 100) {
        cout<< endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<(i + j + 1)%n+1<< " ";
        }
        cout << endl;
    }
    return 0;
}

