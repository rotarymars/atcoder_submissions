N = int(input())
S = input()

ANS = 0
n = 0
for j in range(N):
  if j > 0 and S[j] == S[j - 1]:
    n = n + 1
  else:
    n = 0
  ANS += n

print(ANS)
