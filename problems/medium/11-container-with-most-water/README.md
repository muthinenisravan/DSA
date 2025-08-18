# Container With Most Water

**LeetCode Link:** [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)  
**Difficulty:** Medium  
**Tag(s):** Two Pointers, Greedy  

---

## Problem Statement
You are given `n` non-negative integers `height[0..n-1]` where each represents a vertical line of height `height[i]`.  
Find two lines that together with the x-axis form a container, such that the container contains the most water.  

Return *the maximum amount of water* a container can store.  

---

## Example
**Input:**
height = [1,8,6,2,5,4,8,3,7]

**Output:**
49

---

## Approaches

### Approach 1: Brute Force (O(n²))
- Check every pair `(i, j)`.
- Compute area = `(j - i) * min(height[i], height[j])`.
- Keep track of max.

### Approach 2: Two Pointers (O(n))
- Initialize two pointers at both ends.
- Compute area between them.
- Move the pointer pointing to the smaller line inward.
- Continue until `left >= right`.

---

## Complexity
- **Brute Force:** O(n²) time, O(1) space  
- **Two Pointers:** O(n) time, O(1) space
