X,Y = input().split()
X = int(X)
Y = float(Y)
if(X<=Y-0.5):
	if(X%5 == 0):
		print("%.2f"%((Y)-(X+0.50)))
	else:
		print("%.2f"%Y)
else:
	print("%.2f"%Y)