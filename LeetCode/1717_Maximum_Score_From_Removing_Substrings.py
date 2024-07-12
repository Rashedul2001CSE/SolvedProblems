class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        def getAns(find, value):
            nonlocal s  # this gives us the ability to modify the s in the outer scope that is not global
            st = [] # this is a list used as stack there is no genuine stack ds as C++ in python
            res = 0
            for c in s:
                if st and find[1] == c and st[-1] == find[0]:
                    res += value
                    st.pop()
                else:
                    st.append(c)
            s = "".join(st)
            return res

        ans = 0
        find = "ab" if x > y else "ba"
        ans += getAns(find, max(x, y))
        ans += getAns(find[::-1], min(x, y))

        return ans
