#User function Template for python3

class Solution:
    def getPairsCount(self, arr, n, k):
        maximum = max(arr)
        dict = {}
        count = 0
        for i in arr:
            dict[i] = 0
            dict[k-i] = 0
        for i in arr:
            dict[i] = dict[i] + 1
        a = list(dict.keys())
        for i in arr:
            count+= dict[k-i]
            if(k-i==i):
                count-=1
        ans = count//2
        return ans




        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getPairsCount(arr, n, k)
        print(ans)
        tc -= 1

# } Driver Code Ends
