#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if it's possible to paint all boards with the given constraints
bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

// Function to find the minimum time required to paint all boards
int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;

    // Calculate the total sum and the maximum value in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    // Initialize the search range
    int st = maxVal, end = sum, ans = 0;

    // Perform binary search to find the minimum time
    while (st <= end) {
        int mid = (st + end) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid; // Update the answer
            end = mid - 1; // Search in the left half
        } else {
            st = mid + 1; // Search in the right half
        }
    }

    return ans; // Return the minimum time
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << "Minimum time to paint all boards: " << minTimeToPaint(arr, n, m) << endl;
    return 0;
}