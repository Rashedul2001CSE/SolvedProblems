def solve():
    n = int(input())
    numbers = list(map(int, input().split()))
    xOr = 0
    for num in numbers:
        xOr ^= num
    if n % 2 == 1 or xOr == 0:
        print("YES")
    else:
        print("NO")


for _ in range(int(input())):
    solve()
