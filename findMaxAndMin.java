public class findMaxAndMin {
    public static class Pair {
        long first;
        long second;

        public Pair(long first, long second) {
            this.first = first;
            this.second = second;
        }
    }

    public static Pair getMinMax(long a[], long n) {
        long ans1 = min(a, n);
        long ans2 = max(a, n);
        Pair p = new Pair(ans1, ans2);
        return p;
    }

    public static long min(long arr[], long n) {
        long min = Long.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        return min;
    }

    public static long max(long arr[], long n) {
        long max = Long.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }




    // Don't write main function if you are coding in gfg
    public static void main(String[] args) {
        long[] arr = { 10, 5, 8, 2, 7 };
        int n = arr.length;

        Pair result = getMinMax(arr, n);

        System.out.println("Minimum: " + result.first);
        System.out.println("Maximum: " + result.second);
    }
}
