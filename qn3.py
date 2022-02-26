t=int(input())
for _ in range(t):
    n=int(input())
    c =0
    x=0
    lst=[]
    while n>0:
        for i in range(0, n):
            ele = int(input())
 
            lst.append(ele)
        for i in range(0,n): 
           x=i+c+1
           if x==lst[i] :
               c=c+1
    print(c)
