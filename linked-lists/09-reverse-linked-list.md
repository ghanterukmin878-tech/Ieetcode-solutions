
# 09. Reverse Linked List

## Problem
Reverse a singly linked list and return the reversed list.

## Example
Input: 1 -> 2 -> 3 -> 4 -> 5
Output: 5 -> 4 -> 3 -> 2 -> 1

## Approach
1. Create three pointers: prev, current and next.
2. Initially, prev is NULL and current is head.
3. Store the next node.
4. Reverse the current node's link.
5. Move prev and current forward.
6. Repeat until current becomes NULL.
7. Return prev as the new head.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Language
C
