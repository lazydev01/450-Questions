#User function Template for python3

class Solution:
    
    #Function to check whether there is a subarray present with 0-sum or not.
    def subArrayExists(self,arr,n):
        sum = 0
        lst = []
        b = False
        for i in range(n):
            sum+=arr[i]
            if(sum==0):
                b = True
                break
            lst.append(sum)
        if(b):
            return b
        else:
            set_lst = list(set(lst))
            if(len(set_lst)==len(lst)):
               return b
            else:
                b = True
                return b
            
            

#{ 
#  Driver Code Starts
#Initial Template for Python 3



def main():
    T=int(input())
    while(T>0):
        
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        if(Solution().subArrayExists(arr,n)):
            print("Yes")
        else:
            print("No")
        
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends
