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

##########################################################
# @INFO
# Code by Ashish Singh
# @INFO
# Gmail - ashishlodhi5559@gmail.com
# @INFO
# Github - AshishBytes
# @INFO
# LinkedIn - ashishbytes
# @INFO
# Instagram - @itz_ash._u
# @INFO
# Twitter - @itz_ash_u
# @INFO
##########################################################
