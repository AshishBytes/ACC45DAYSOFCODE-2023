t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    if x >= y:
        print(y)
    else:
        print(x + 2 * (y - x))
