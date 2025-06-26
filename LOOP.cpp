#include <iostream>  // Input/output functions ke liye
using namespace std;

int main() {

    // ---------- PART 1: For loop to print numbers from 1 to 10 ----------
    cout << "Numbers from 1 to 10 using for loop:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << i << " ";  // Number print karna
    }

    cout << endl << endl;  // Thoda space chhodna next part ke liye

    // ---------- PART 2: While loop to sum numbers from 1 to 10 ----------
    int sum = 0;     // Sum ko 0 se initialize karna
    int num = 1;     // Starting number

    while (num <= 10) {
        sum += num;  // sum = sum + num
        num++;       // num ko next number par move karna
    }

    // Sum print karna
    cout << "Sum of numbers from 1 to 10 using while loop: " << sum << endl;

    return 0;  // Program successfully end
}
