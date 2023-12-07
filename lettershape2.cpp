#include <iostream>

using namespace std;

int main() {
    int numRaw = 7; // Number of rows for the pattern

    for (int i = 1; i <= numRaw; i++) {
        // Print spaces 
        for (int j = 1; j <= numRaw - i + 1; j++) {
            cout << " ";
        }

        // Print the characters 
        for (int j = 1; j <= i; j++) {
            char ch = 'a' + i - 1;
            cout << ch;
        }

        // Print one more space for each row
        cout << " ";

        // Move to the next line
        cout << endl;
    }

    return 0;
}
