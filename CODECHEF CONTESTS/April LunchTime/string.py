t = int(input())
for i in range(t):
	n,a,b=list(map(int,input().split()))
	n1,n2=0,0
	for i in range(n):
		x = input()
		if x[0] in "EQUINOX":
			n1 += a
		else:
			n2 +=b
	if n1==n2:
		print("DRAW")
	elif n1>n2:
		print("SARTHAK")
	else:
		print("ANURADHA")