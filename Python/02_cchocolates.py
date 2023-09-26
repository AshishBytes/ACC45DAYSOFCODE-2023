T = int(input())
for _ in range(T):
    X, Y, Z = map(int, input().split())
    total_rupees = X * 5 + Y * 10
    max_chocolates = total_rupees // Z
    print(max_chocolates)

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
