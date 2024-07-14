class Solution:
    def getSmallestString(self, s: str) -> str:
        s = list(s)
        pt1, pt2 = 0, 1
        while pt2 < len(s):
            if int(s[pt1]) & 1 == int(s[pt2]) & 1 and s[pt1] > s[pt2]:
                s[pt1], s[pt2] = s[pt2], s[pt1]
                break
            else:
                pt1 += 1
                pt2 += 1
        return "".join(s)
