# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(
        self, nums: List[int], head: Optional[ListNode]
    ) -> Optional[ListNode]:
        hs = {num: 1 for num in nums}
        while head and head.val in hs:
            head = head.next
        rt = head

        while head and head.next:
            curr = head
            while head.next and head.next.val in hs:
                head = head.next
            curr.next = head.next
            head = head.next

        return rt
