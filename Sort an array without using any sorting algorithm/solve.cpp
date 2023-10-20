class Solution
{
    public static void sort012(int a[], int n)
    {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0){    
                count0++;
            }
            else if(a[i] == 1){
                count1++;
            }
            else if(a[i] == 2){
                count2++;
            }
        }
       
        int j=0;
        while(count0!=0){
            a[j] = 0;
            j++;
            count0--;
        }
        while(count1!=0){
            a[j] = 1;
            j++;
            count1--;
        }
        while(count2!=0){
            a[j] = 2;
            j++;
            count2--;
        } 
    }
}
