#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the array
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp(n);   // Temporary array
    k = k % n;             // In case k > n

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];  // Place element at new position
    }

    nums = temp;  // Copy back to original array
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter rotation count k: ";
    cin >> k;

    rotate(nums, k);  // Call function directly

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
