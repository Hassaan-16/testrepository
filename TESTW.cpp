#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; // Height of the diamond
    cout << "Enter the height of the diamond: ";
    cin >> n;

    int maxWidth = n * 2 - 1;

    for (int i = 1; i <= n; i++) {
        int num = 1;
        // Set width and print leading spaces
        cout << setw((maxWidth - 2 * i + 1) / 2);

        // Print numbers in ascending order
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << num << " ";
            if (k < i) {
                num++;
            }
            else {
                num--;
            }
        }

        // Move to the next line
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        int num = 1;
        // Set width and print leading spaces
        cout << setw((maxWidth - 2 * i + 1) / 2);

        // Print numbers in ascending order
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << num << " ";
            if (k < i) {
                num++;
            }
            else {
                num--;
            }
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
