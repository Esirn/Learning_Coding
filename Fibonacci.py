def fbnc(k):
    if k<1:
        return 0
    elif k==1 or k==2:
        return 1
    else:
        return fbnc(k-1) + fbnc(k-2)
for i in range(10):
    print(fbnc(i))