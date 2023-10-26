class Solution:
    def segregateElements(self, arr, n):
        ans = []

        # Copying positive numbers
        for i in range(n):
            if arr[i] > 0:
                ans.append(arr[i])

        # Copying negative numbers
        for j in range(n):
            if arr[j] < 0:
                ans.append(arr[j])

        # Copying list into input array
        for k in range(n):
            arr[k] = ans[k]
