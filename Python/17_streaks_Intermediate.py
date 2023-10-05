def find_max_streak(N, om_solved, addy_solved):
    om_streak = 0
    addy_streak = 0
    max_om_streak = 0
    max_addy_streak = 0

    for i in range(N):
        if om_solved[i] > 0:
            om_streak += 1
        else:
            om_streak = 0

        if addy_solved[i] > 0:
            addy_streak += 1
        else:
            addy_streak = 0

        max_om_streak = max(max_om_streak, om_streak)
        max_addy_streak = max(max_addy_streak, addy_streak)

    if max_om_streak > max_addy_streak:
        return "OM"
    elif max_addy_streak > max_om_streak:
        return "ADDY"
    else:
        return "DRAW"

T = int(input())
for _ in range(T):
    N = int(input())
    om_solved = list(map(int, input().split()))
    addy_solved = list(map(int, input().split()))
    result = find_max_streak(N, om_solved, addy_solved)
    print(result)


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
