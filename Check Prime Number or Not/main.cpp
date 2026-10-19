#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool prime = (n >= 2);

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
