#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    cout << "Decimal equivalent: " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}
