class Solution {
    
    public void segregateElements(int arr[], int n)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        
        // Copying positive numbers
        for(int i=0; i<arr.length; i++){   // O(n)
            if(arr[i] > 0){
                ans.add(arr[i]);
            }
        }
        // Copying nagative numbers
        for(int j=0; j<arr.length; j++){ // O(n)
            if(arr[j] < 0){
                ans.add(arr[j]);
            }
        }
        // Copying arrayList into input array
        for(int k=0; k<arr.length; k++){ // O(n)
            arr[k] = ans.get(k);
        }
        
        // O(n) + O(n) + O(n) = O(n)
    }
}
