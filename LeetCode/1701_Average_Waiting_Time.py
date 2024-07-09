class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        time =0
        currTime = 0
        for enter,prepare in customers:
            if currTime >= enter:
                time+= prepare+currTime-enter
                currTime += prepare
            else:
                time+=prepare
                currTime = prepare+enter
        return time/len(customers)
