def minimumDeletions(self, s: str) -> int:
    res = 0
    bc = 0
    for i in range(len(s)):
        if s[i] == "b":
            bc += 1
        elif s[i] == "a" and bc > 0:
            bc -= 1
            res += 1
    return res
