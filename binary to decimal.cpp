#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary digits
    int i = 0; // Index for binary array

    // Loop until decimal becomes 0
    while (decimal > 0) {
        binary[i] = decimal % 2; // Store remainder (0 or 1)
        decimal = decimal / 2; // Update decimal
        i++;
    }

    // Display binary representation
    cout << "Binary Representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
}

int main() {
    int decimal;

    // Prompt user to input decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    decimalToBinary(decimal);

    return 0;
}

