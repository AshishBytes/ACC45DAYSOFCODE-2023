T = int(input())
for _ in range(T):
    X, Y, Z = map(int, input().split())
    if X == Y + Z or Y == Z + X or Z == X + Y:
        print("yes")
    else:
        print("no")

##########################################################
# @INFO
# Code by Ashish Singh
# @INFO
# Github - AshishBytes
# @INFO
# Gmail - ashishlodhi5559@gmail.com
# @INFO
# Instagram - @itz_ash._u
# @INFO
# Twitter - @itz_ash_u
# @INFO
##########################################################
