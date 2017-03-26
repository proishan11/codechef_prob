n, k = input().split()
x = 0
n = int(n)
k = int(k)
for i in range(n):
	t = int(input())
	if(t%k == 0):
		x+=1

print(x)
