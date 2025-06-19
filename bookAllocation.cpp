#include<iostream>
#include<vector>
using namespace std;

bool isvalid(std::vector<int> &arr, int maximumpages, int m) {
    int sum = 0;
    int st = 1; // Start with one student
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] > maximumpages) return false; // If a single book has more pages than maximumpages
        if (sum + arr[i] <= maximumpages) {
            sum += arr[i]; // Add pages to current student
        } else {
            st++; // Allocate to a new student
            sum = arr[i]; // Start new sum with current book
        }
    }
    return st <= m; // Return true if students used is less than or equal to m
}

int bookallocates(vector<int> &arr, int m) {
    if (m > arr.size()) return -1; // More students than books

    int ans = -1;
    int st = 0;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i]; // Calculate total pages
    }
    int ed = sum;

    while (st <= ed) {
        int mid = st + (ed - st) / 2;
        if (isvalid(arr, mid, m)) { // Check if allocation is possible
            ans = mid; // Update answer
            ed = mid - 1; // Try for a better (lower) maximum
        } else {
            st = mid + 1; // Increase the maximum pages
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {15, 17, 20};
    int m = 2; // Number of students

    cout << bookallocates(arr, m) << endl; // Output the result

    return 0;
}
