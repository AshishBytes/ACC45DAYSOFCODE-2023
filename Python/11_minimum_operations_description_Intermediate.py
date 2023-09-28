T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    freq = {}
    for num in A:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    max_freq = max(freq.values())
    print(N - max_freq)

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
