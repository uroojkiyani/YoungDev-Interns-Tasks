#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for array size
    cout << "Enter the number of elements: ";
    cin >> size;

    // Dynamically allocate memory for an array
    int* arr = new int[size];

    // Input values
    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the array
    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
