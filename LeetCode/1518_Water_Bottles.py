class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        ans =have = numBottles
        while have >= numExchange:
            ans += have//numExchange
            have = have//numExchange + have%numExchange
        return ans