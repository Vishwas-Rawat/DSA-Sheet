class Solution:
    @staticmethod
    # Copy from here
    def kthSmallest(arr, l, r, k):
        arr.sort()
        return arr[k - 1]

# Don't copy main function if you code in geeks for geeks
if __name__ == "__main__":
    arr = [12, 3, 11, 5, 2, 7, 6]
    k = 3
    kthSmallestElement = Solution.kthSmallest(arr, 0, len(arr) - 1, k)
    print(f"The {k}th smallest element is: {kthSmallestElement}")
