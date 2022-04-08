import math

d = [0 for _ in range(1001)]

def dp(n):
    d[1] = int(1)
    d[2] = int(2)
    for i in range(3, n + 1):
        d[i] = (d[i - 2] + d[i - 1]) % 10007
    return d[n]

print(dp(int(input())))
