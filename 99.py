c = [0 for each in range(10)]

for a in range(0,10):
    for b in range(0,a+1):
        print(a*b,end='\t')
        c[a*b//10] += 1
        c[a*b%10] += 1
    print('\n')

for a in range(0,10):
    print("c[{0}]={1}\t{2}".format(a,c[a],c[a]/200))