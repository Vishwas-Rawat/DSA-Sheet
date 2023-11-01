class Solution{
    public static int doUnion(int a[], int n, int b[], int m) 
    {
        HashSet<Integer> hs = new HashSet<>();
        for(int i=0; i<a.length; i++){
            hs.add(a[i]);
        }
        
        
        for(int j=0; j<b.length; j++){
            hs.add(b[j]);
        }
        
        return hs.size();
    }
}
