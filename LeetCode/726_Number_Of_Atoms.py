class Solution:
    def countOfAtoms(self, formula: str) -> str:
        stack = [defaultdict(int)]
        i = 0
        while i < len(formula):
            if formula[i] == "(":
                stack.append(defaultdict(int))
            elif formula[i] == ")":
                currMap = stack.pop()
                count = ""
                while i + 1 < len(formula) and formula[i + 1].isdigit():
                    count += formula[i + 1]
                    i += 1
                count = 1 if not count else int(count)
                prevMap = stack[-1]
                for ele in currMap:
                    prevMap[ele] += currMap[ele] * count
            else:
                element = formula[i]
                count = ""
                if i + 1 < len(formula) and formula[i + 1].islower():
                    element = formula[i : i + 2]
                    i += 1
                while i + 1 < len(formula) and formula[i + 1].isdigit():
                    count += formula[i + 1]
                    i += 1
                count = 1 if not count else int(count)
                currMap = stack[-1]
                currMap[element] += count
            i += 1

        headMap = stack[-1]
        result = ""
        for ele in sorted(headMap.keys()):
            count = "" if headMap[ele] == 1 else headMap[ele]
            result += ele + str(count)
        return result
