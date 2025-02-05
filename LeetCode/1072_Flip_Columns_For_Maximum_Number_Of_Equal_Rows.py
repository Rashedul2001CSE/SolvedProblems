class Solution:
    def maxEqualRowsAfterFlips(self, matrix: List[List[int]]) -> int:
        memo = defaultdict(int)
        for row in matrix:
            curr = tuple(row)
            if row[0]:
                curr = tuple([0 if n else 1 for n in row])
            memo[curr] += 1
        return max(memo.values())
