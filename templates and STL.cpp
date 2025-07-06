#include <iostream>
#include <vector>
#include <map>
#include <algorithm>  // for sort
using namespace std;

// Template function to sort arrays of any data type
template <typename T>
void sortArray(T arr[], int size) {
    sort(arr, arr + size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to demonstrate std::vector
void vectorExample() {
    vector<string> names = {"Ali", "Zara", "Bilal"};

    cout << "\nOriginal Vector: ";
    for (const string& name : names) {
        cout << name << " ";
    }

    // Sort vector
    sort(names.begin(), names.end());

    cout << "\nSorted Vector: ";
    for (const string& name : names) {
        cout << name << " ";
    }
    cout << endl;
}

// Function to demonstrate std::map
void mapExample() {
    map<string, int> ageMap;
    ageMap["Ali"] = 25;
    ageMap["Zara"] = 22;
    ageMap["Bilal"] = 27;

    cout << "\nMap Contents:\n";
    for (auto pair : ageMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

// Main function
int main() {
    // Test template sort with int
    int intArr[] = {5, 2, 9, 1, 7};
    int sizeInt = sizeof(intArr) / sizeof(intArr[0]);
    sortArray(intArr, sizeInt);

    // Test template sort with float
    float floatArr[] = {2.1, 1.5, 4.7, 3.3};
    int sizeFloat = sizeof(floatArr) / sizeof(floatArr[0]);
    sortArray(floatArr, sizeFloat);

    // Use vector
    vectorExample();

    // Use map
    mapExample();

    return 0;
}
