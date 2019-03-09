s=0;
n = int(input("请输入一个数："))
for n in range(n,0,-1):
    if n%3==0 or n%7==0:
        s += 1/n
print(s)
