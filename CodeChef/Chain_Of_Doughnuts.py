def solve():
    n, k = map(int, input().split())
    doughnuts = list(map(int, input().split()))
    doughnuts.sort(reverse = True)
    if doughnuts[0] >= n:
        print(0)
        return
    current_size = doughnuts[0]
    count, i, j = 0, 1, -1
    while current_size < n:
        if doughnuts[j] == 0:
            j -= 1
        doughnuts[j] -= 1
        current_size += doughnuts[i] + 1
        count += 1
        i += 1
    print(count)


for _ in range(int(input())):
    solve()
