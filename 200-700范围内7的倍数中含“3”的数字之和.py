def IsContain(i):
    if i//100==3 or i//10%10==3 or i%100==3:
        return 1
    else:
        return 0

sum=0
print("200~700范围内，7的倍数且包含数字“3”的数字之和为：")
for i in range(200,701):
    if i%7==0 and IsContain(i):
        sum += i;
        print("+{0}".format(i),end='')
print("={0}".format(sum))