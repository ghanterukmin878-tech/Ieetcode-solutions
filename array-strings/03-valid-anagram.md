# Valid Anagram

**LeetCode Problem:** 242  
**Difficulty:** Easy  
**Topic:** Arrays & Strings

## Problem
Check whether two strings are anagrams of each other.

## Approach
1. Create an array of 26 integers.
2. Increase the count for each character in the first string.
3. Decrease the count for each character in the second string.
4. If all counts are zero, return true. Otherwise, return false.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Result
Accepted on LeetCode.

## Language
C