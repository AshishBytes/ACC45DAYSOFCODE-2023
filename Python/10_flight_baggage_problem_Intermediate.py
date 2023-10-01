T = int(input())
for _ in range(T):
    A, B, C, D, E = map(int, input().split())
    if (A + B <= D and C <= E) or (B + C <= D and A <= E) or (A + C <= D and B <= E):
        print("YES")
    else:
        print("NO")

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
