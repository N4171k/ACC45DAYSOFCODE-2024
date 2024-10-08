# cook your dish here
n=int(input())
for i in range(n):
    a=int(input())
    x=list(map(int,input().split()))
    m=0
    for j in x:
        if(j%2==1):
            m+=1
    if(m%2==1 or m==0):
        print("NO")
    else:
        print("YES")
