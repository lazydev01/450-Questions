#User function Template for python3

class Solution:
    def factorial(self, N):
        ans = 1
        for i in range(2,N+1):
            ans*=i
        lst = []
        while(True):
            if(len(str(ans))==1):
                break
            lst.append(ans %10)
            ans = ans // 10
        lst.append(ans)
        lst.reverse()
        return lst

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.factorial(N);
        for i in ans:
            print(i,end="")
        print()
    
# } Driver Code Ends
