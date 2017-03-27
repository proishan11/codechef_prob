T = int(input())
n = []
for i in range(T):
	N = int(input())
	n.append(N)
for i in range(len(n)):
	x = n[i]
	y = 0
	j = 0
	while(j<x):
		y += x//(5**(j+1))
		j += 1
		if(x//(5**j)==0):
			break
	print(y)