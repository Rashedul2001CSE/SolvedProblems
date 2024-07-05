# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        if not head or not head.next:
            return [-1, -1]
        mem = []
        prevData = head.val
        head = head.next
        pos = 2
        while head.next:
            currData = head.val
            nextData = head.next.val
            if currData > prevData and currData > nextData:
                mem.append(pos)
            if currData < prevData and currData < nextData:
                mem.append(pos)
            pos += 1
            prevData = currData
            head = head.next
        if len(mem) < 2:
            return [-1, -1]
        else:
            minValue = min((b - a) for a, b in zip(mem, mem[1:]))
            return [minValue, mem[-1] - mem[0]]
