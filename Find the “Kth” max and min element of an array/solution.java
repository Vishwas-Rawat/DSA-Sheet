import java.util.Arrays;

public class solution {
// Don't copy main function if you code in geeks for geeks
    public static void main(String[] args) {
        int[] arr = {12, 3, 11, 5, 2, 7, 6};
        int k = 3;
        int kthSmallestElement = kthSmallest(arr, 0, arr.length - 1, k);
        System.out.println("The " + k + "th smallest element is: " + kthSmallestElement);
    }

    // Copy from here
    public static int kthSmallest(int[] arr, int l, int r, int k) {
        Arrays.sort(arr);
        return arr[k - 1];
    }
}
