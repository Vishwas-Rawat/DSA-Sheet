def getMinMax(a, n):
    ans1 = float('inf')  # Initialize ans1 to positive infinity
    ans2 = float('-inf')  # Initialize ans2 to negative infinity

    for i in range(n):
        ans1 = min(ans1, a[i])  # Update ans1 with the minimum value
        ans2 = max(ans2, a[i])  # Update ans2 with the maximum value

    return (ans1, ans2)



# Don't write main function if you are coding in gfg
# Example usage:
a = [10, 5, 8, 2, 7]
n = len(a)

min_val, max_val = getMinMax(a, n)

print("Minimum:", min_val)
print("Maximum:", max_val)
