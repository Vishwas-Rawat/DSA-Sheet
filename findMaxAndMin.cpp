#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    long long ans1 = LLONG_MAX; // Initialize ans1 to the maximum possible long long value
    long long ans2 = LLONG_MIN; // Initialize ans2 to the minimum possible long long value

    for (int i = 0; i < n; i++) {
        ans1 = min(ans1, a[i]); // Update ans1 with the minimum value
        ans2 = max(ans2, a[i]); // Update ans2 with the maximum value
    }

    return make_pair(ans1, ans2);
}


// Don't write main function if you are coding in gfg
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    long long a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<long long, long long> result = getMinMax(a, n);

    cout << "Minimum: " << result.first << endl;
    cout << "Maximum: " << result.second << endl;

    return 0;
}
