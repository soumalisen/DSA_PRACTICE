#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];
        int second = -1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > second) {
                second = arr[i];
            }
        }
        return second;
    }
};

int main() {
    vector<int> arr = {15, 20, 5, 8};

    Solution obj;
    cout << obj.getSecondLargest(arr);

    return 0;
}
