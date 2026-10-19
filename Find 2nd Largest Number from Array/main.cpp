#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    int largest = a[0];
    int second = a[0];
    bool hasSecond = false;

    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
            hasSecond = true;
        } else if (a[i] < largest &&
                   (!hasSecond || a[i] > second)) {
            second = a[i];
            hasSecond = true;
        }
    }

    if (hasSecond)
        cout << "Second largest = " << second;
    else
        cout << "No second distinct number";

    return 0;
}
