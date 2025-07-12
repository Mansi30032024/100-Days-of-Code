#include <iostream>
using namespace std;

bool binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return false;

    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return true;
    else if (arr[mid] < target)
        return binarySearch(arr, mid + 1, high, target);
    else
        return binarySearch(arr, low, mid - 1, target);
}

int main() {
    int n;
  cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int target;
    cin >> target;

    bool found = binarySearch(arr, 0, n - 1, target);
   if(found)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}