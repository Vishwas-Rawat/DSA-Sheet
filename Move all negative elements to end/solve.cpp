void segregateElements(int arr[],int n)
    {
        std::vector<int> ans;

        // Copying positive numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                ans.push_back(arr[i]);
            }
        }

        // Copying negative numbers
        for (int j = 0; j < n; j++) {
            if (arr[j] < 0) {
                ans.push_back(arr[j]);
            }
        }

        // Copying vector into input array
        for (int k = 0; k < n; k++) {
            arr[k] = ans[k];
        }
    }
