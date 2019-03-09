a=1
b=0
print("SUM(1!~20!)\n=0",end='')
for i in range(1,21):
	a *= i;
	b += a;
	print("+{0}".format(a),end='')
print("\n={0}".format(b))