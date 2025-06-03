for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    motu = sorted(a[::2], reverse=True)
    tomu = sorted(a[1::2])
    for i in range(min(len(motu), len(tomu), k)):
        if motu[i] > tomu[i]:
            motu[i], tomu[i] = tomu[i], motu[i]
        else:
            break
    print("YES" if sum(tomu) > sum(motu) else "NO")
