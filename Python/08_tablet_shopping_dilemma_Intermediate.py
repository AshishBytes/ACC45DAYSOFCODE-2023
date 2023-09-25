T = int(input())
for _ in range(T):
    N, B = map(int, input().split())
    max_area = -1
    for _ in range(N):
        W, H, P = map(int, input().split())
        if P <= B:
            area = W * H
            if area > max_area:
                max_area = area
    if max_area == -1:
        print("no tablet")
    else:
        print(max_area)
