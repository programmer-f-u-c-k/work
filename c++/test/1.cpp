#include<iostream>
using namespace std;

    int longestArithmeticSubarray(int arr[], int n) {
    if (n <= 1) {
        return n;
    }
    int currentSubarrayLength = 0;
    int maxLength = 1;
    int prevDiff = arr[1] - arr[0]; // Difference between first two elements

    for (int i = 2; i < n; i++) {
        int currentDiff = arr[i] - arr[i - 1];
        if (currentDiff == prevDiff) {
            currentSubarrayLength++;
        } else {
            maxLength = max(maxLength, currentSubarrayLength);
            currentSubarrayLength = 0;
        }
        prevDiff = currentDiff;
    }

    maxLength = max(maxLength, currentSubarrayLength);

    return maxLength;
}

int main() {
     int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = longestArithmeticSubarray(arr, n);
    cout << "Longest arithmetic subarray length: " << result << endl;

    return 0;
}
