a=int(input())
s=input()
ans=0
for i in range(a):
  if s[i]=='j' or s[i]=='i':
    ans+=2
  else:
    ans+=1
print(ans)