#include <iostream>
using namespace std;

int MaxBinaryStringLen(int arr[], int n) {
    int maxLen = 0, currLen = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 0;
        }
    }
    return maxLen;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << MaxBinaryStringLen(arr, n) << endl;
    return 0;
}
