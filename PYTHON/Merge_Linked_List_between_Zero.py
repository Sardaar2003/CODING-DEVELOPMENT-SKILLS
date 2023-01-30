# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def Insertion_at_the_end(head: Optional[ListNode], key: int):

        temp = head
        # print(temp)
        Node = ListNode(key)
        # print(Node)
        if (temp == None):
            # print("Passes")
            temp = Node
            return Node
            # print(temp.val," ",temp.next)

        else:
            while(temp.next != None):
                temp = temp.next
            temp.next = Node
            return head

    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp = head
        result = None
        sum = 0
        while(temp):
            if (temp.val == 0 and sum != 0):
                print(sum)
                result = Solution.Insertion_at_the_end(result, sum)
                # print(Node)
                sum = 0
            else:
                sum += temp.val
            temp = temp.next
        return result
