n = int(input("Enter the value of n "))
k = int(input("Enter the value of k "))
print("Enter the elements(space-seperated)")
lst = list(map(int, input().split()))
dict = {}
set_lst = list(set(lst))
for i in set_lst:
    dict[i] = 0
ans = []
for i in lst:
    dict[i] +=1
    if(dict[i] == (n//k)+1):
        ans.append(i)
print(*ans)
