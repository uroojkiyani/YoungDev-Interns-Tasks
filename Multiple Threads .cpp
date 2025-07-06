#include <iostream>
#include <thread>
#include <vector>
using namespace std;

// Function to compute partial sum of array
void partialSum(int arr[], int start, int end, int& result) {
    result = 0;
    for (int i = start; i < end; i++) {
        result += arr[i];
    }
}

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Two threads, so divide array in half
    int mid = size / 2;
    int sum1 = 0, sum2 = 0;

    // Create two threads
    thread t1(partialSum, arr, 0, mid, ref(sum1));
    thread t2(partialSum, arr, mid, size, ref(sum2));

    // Wait for threads to complete
    t1.join();
    t2.join();

    // Final result
    int totalSum = sum1 + sum2;

    // Output
    cout << "Sum from Thread 1: " << sum1 << endl;
    cout << "Sum from Thread 2: " << sum2 << endl;
    cout << "Total Sum: " << totalSum << endl;

    return 0;
}
