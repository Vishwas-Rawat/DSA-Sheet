#include <iostream>
using namespace std;
#include <algorithm>

class Solution {
public:
// Copy from here
    static int kthSmallest(int arr[], int l, int r, int k) {
        std::sort(arr + l, arr + r + 1);
        return arr[l + k - 1];
    }
};

// Don't copy main function if you code in geeks for geeks
int main() {
    int arr[] = {12, 3, 11, 5, 2, 7, 6};
    int k = 3;
    int kthSmallestElement = Solution::kthSmallest(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, k);
    std::cout << "The " << k << "th smallest element is: " << kthSmallestElement << std::endl;
    return 0;
}
