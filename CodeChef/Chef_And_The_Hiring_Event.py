def solve():
    k = int(input()) - 1
    li = []
    if k == 0:
        print(0)
    else:
        while k:
            li.append(2 * (k % 5))
            k //= 5
        print("".join([str(digit) for digit in li][::-1]))


for _ in range(int(input())):
    solve()
