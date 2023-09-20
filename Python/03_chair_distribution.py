T = int(input())
for _ in range(T):
    X, Y = map(int, input().split())
    extra_chairs = max(0, X - Y)
    print(extra_chairs)
