#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandomNumber(int N) {
    srand(time(nullptr));
    return rand() % N;
}

int main() {
    int N;
    cin >> N;

    int randomNumber = getRandomNumber(N);
    cout << randomNumber << endl;

    return 0;
}

