n=int(input())
a=list(map(int,input().split()))
f=int(input())
check=abs(a[0]-f)
ans=a[0]
for i in range(1,n):
    if abs(a[i]-f)<check:
        check=abs(a[i]-f)
        ans=a[i]
        
print(ans)
