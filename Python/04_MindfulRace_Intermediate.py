import math

t = int(input())
for _ in range(t):
    L, v1, v2 = map(int, input().split())
    t1 = math.ceil(L / v1)
    t2 = math.ceil(L / v2)
    if t1 > t2:
        if t1 == t2 + 1:
            print("0")
        else:
            print(t1 - t2 - 1)
    elif t1 == t2:
        print("-1")