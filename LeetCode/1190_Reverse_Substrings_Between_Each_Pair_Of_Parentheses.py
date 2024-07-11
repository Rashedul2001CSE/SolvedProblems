class Solution:
    def reverseParentheses(self, s: str) -> str:
        st = []

        for c in s:
            if c != ")":
                st.append(c)
            else:
                temp = []
                while st[-1] != "(":
                    temp.append(st.pop())
                st.pop()
                st.extend(temp)
        return "".join(st)
