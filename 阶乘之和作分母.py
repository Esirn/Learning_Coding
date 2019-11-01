def jc(k): #返回k!。
    if(k!=1):
        return k*jc(k-1)
    else:
        return 1

temp=0;
S=0;

for i in range(1,21,3):
    temp += jc(i)
    print("temp={0}".format(temp))
    S += 1/temp

print("S={0}".format(S))