class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a,n,b,m):
        
        us = set()

        for i in range(n):
            us.add(a[i])

        for i in range(m):
            us.add(b[i])

        return len(us)
