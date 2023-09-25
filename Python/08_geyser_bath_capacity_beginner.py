T = int(input())
for _ in range(T):
    X, Y = map(int, input().split())
    max_people = X // (2 * Y)
    print(max_people)
