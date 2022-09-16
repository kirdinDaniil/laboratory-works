n=int(input())
a=list(map(int,input().split()))
a1=a.copy()
a1[0]=a[n-1]
for i in range(1,n):
    a1[i]=a[i-1]

print(" ".join(map(str,a1)))
