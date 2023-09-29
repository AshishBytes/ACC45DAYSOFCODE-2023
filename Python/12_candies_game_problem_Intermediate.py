T = int(input())
for _ in range(T):
    A, B = map(int, input().split())
    moves = 1
    while True:
        if moves % 2 == 1:
            A -= moves
            if A < 0:
                print("Bob")
                break
        else:
            B -= moves
            if B < 0:
                print("Limak")
                break
        moves += 1
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
