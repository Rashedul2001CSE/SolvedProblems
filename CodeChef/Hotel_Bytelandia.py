for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    result = [0]*10001
    for i in a:
        result[i] += 1
    for i in b:
        result[i] -= 1
    for i in range(1, 10001):
        result[i] += result[i-1]
    print(max(result))
