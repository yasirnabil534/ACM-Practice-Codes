def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

tc = int(input())
for i in range(tc):
    x,y = list(map(int, input().split('/')))
    z = gcd(x,y)
    print(x//z, "/", y//z)


