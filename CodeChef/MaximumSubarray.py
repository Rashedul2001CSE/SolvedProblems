def solve():
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())
    b = list(map(int, input().split()))
    bSum = sum(num for num in b if num > 0)

    a, b = [bSum] + a, a + [bSum]
    currSum = maxSum1 = 0
    for num in a:
        currSum += num
        if currSum < 0:
            currSum = 0
        maxSum1 = max(currSum, maxSum1)
    currSum = maxSum2 = 0
    for num in b:
        if currSum < 0:
            currSum = 0
        maxSum2 = max(currSum, maxSum2)

    print(max(maxSum2, maxSum1))


for _ in range(int(input())):
    solve()
