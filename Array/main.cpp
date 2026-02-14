#include <iostream>

using namespace std;

int main()
{


    int units;
    int bill = 0;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = units * 40;
    }
    else if (units <= 300) {
        bill = units * 20;
    }
    else {
        bill = units * 45;
    }

    cout << "Total Electricity Bill = Rs. " << bill << endl;

    return 0;
}

