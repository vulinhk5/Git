#include <iostream>
#include <cmath>
using namespace std;

int roundWithCeilFloor(double num) {
    return static_cast<int>(floor(num + 0.5));
}

int main() {
    double num;
    cout << "Nhap mot so thuc: ";
    cin >> num;

    int roundedNum = roundWithCeilFloor(num);
    cout<< roundedNum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int roundWithoutCeilFloor(double num) {
    if (num >= 0) {
        return static_cast<int>(num + 0.5);
    } else {
        return static_cast<int>(num - 0.5);
    }
}

int main() {
    double num;
    cin >> num;
    int roundedNum = roundWithoutCeilFloor(num);
    cout << roundedNum << endl;

    return 0;
}

