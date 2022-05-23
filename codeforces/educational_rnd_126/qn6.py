class Solution:
    def merge(self, arr1, arr2, m): 
       
        for i in range (m):
            arr1.append(arr2[i])
        arr2.clear()
        arr1.sort()

tc=int(input())
while tc>0:
    n=int(input())
    arr1=list(map(int,input().strip().split()))
    arr2=list(map(int,input().strip().split()))
    ob=Solution()
    total=0
    ans = ob.merge(arr1,arr2,n)
    for x in arr1:
        print(x,end=" ")
    for x in arr2:
        print(x,end=" ")
 

    # for ele in range(0, len(arr1)):
    #     total = total + arr1[ele]
    # print(total)
  
    for i in range (len(arr1)):
        sum=arr1[i]-arr1[i+1]
    for i in range (len(arr2)):
        sum2=arr1[i]-arr2[i+1]

    print(sum+sum2)
    print()
    tc=tc-1
