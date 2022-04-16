class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        sorted_nums = sorted(nums)
        if (nums == sorted_nums[::-1]):
             nums.sort()
        else:
            n = len(nums)
            for i in range(n - 1, 0, -1):
                if (nums[i] <= nums[i - 1]):
                    continue
                else:
                    temp = i-1
                    break
            new_arr = nums[temp+1:]
            new_arr.sort()
            for i in new_arr:
                if(i>nums[temp]):
                    new_num = i
                    break
            for i in range(n-1, 0, -1):
                if(nums[i]==new_num):
                    new_temp = i
                    break
            nums[temp], nums[new_temp] = nums[new_temp], nums[temp]
            new_arr_2 = nums[temp+1:]
            new_arr_2.sort()
            for i in range(len(new_arr_2)):
                nums[temp+i+1] = new_arr_2[i]
                    
            
        
        
