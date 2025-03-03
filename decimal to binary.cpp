#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0; // Initialize decimal number
    int base = 1; // Initialize base (2^0)

    // Iterate through binary string from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        // If current bit is 1, add base to decimal
        if (binary[i] == '1') {
            decimal += base;
        }
        // Update base (2^i)
        base *= 2;
    }

    return decimal;
}

int main() {
    string binary;

    // Prompt user to input binary number
    cout << "Enter a binary number: ";
    cin >> binary;

    // Check if input is a valid binary number
    for (char c : binary) {
        if (c != '0' && c != '1') {
            cout << "Invalid binary number. Please try again." << endl;
            return 1;
        }
    }

    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Display decimal representation
    cout << "Decimal Representation: " << decimal << endl;

    return 0;
}
