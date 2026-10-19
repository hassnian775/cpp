#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    while (j < n) {
        a[j] = 0;
        j++;
    }

    cout << "Array after moving zeros: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
