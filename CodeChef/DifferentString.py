def solve():
    n = int(input())
    s = set()
    for ll in range(n):
        st = input()
        dec = 0
        for i, b in enumerate(reversed(st)):
            dec += int(b) * pow(2, i)
        s.add(dec)
    for i, num in enumerate(s):
        if num != i:
            print(str(bin(i)[2:]).zfill(n))
            return
    print(str(bin(n)[2:]).zfill(n))


for _ in range(int(input())):
    solve()
