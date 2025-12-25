#include <iostream>
using namespace std;

bool distinct(int n);

int main() {
    int n;
    cin >> n;

    // Find the next distinct number
    n++;
    while (!distinct(n)) {
        n++;
    }

    cout << n << "\n";
    return 0;
}

bool distinct(int n) {
    // Checking whether the given number has distinct digits
    bool digits[10] = {false}; // Array to track used digits

    while (n != 0) {
        int rem = n % 10; // Get the last digit
        if (digits[rem]) {
            
            return false; // Digit already encountered
        }
        digits[rem] = true; // Mark digit as used
        n /= 10; // Remove the last digit
    }

    return true;
}
