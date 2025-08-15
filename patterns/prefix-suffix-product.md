# Pattern: Prefix–Suffix Product

## Description
The Prefix–Suffix Product pattern is used when, for each element in an array, you need to compute a result that depends on the product of all elements before and after it — without using division.  
It uses **two passes**: one for prefix products and one for suffix products.

---

## Problem Types
- Product of all elements except self.
- Multiplicative accumulation problems without division.
- Handling zeros in product computation.

---

## Steps to Solve
1. **Prefix Pass** – Create an array where `prefix[i]` = product of all elements before index `i`.
2. **Suffix Pass** – Traverse from right to left, keeping a running product and multiplying it with prefix values.
3. Combine prefix and suffix results.

---

## Complexity
| Operation | Complexity |
|-----------|------------|
| Time      | O(n)       |
| Space     | O(1) extra (excluding output) |

---

## Example Problem
- **[Leetcode 238 – Product of Array Except Self](../../problems/medium/product-of-array-except-self/README.md)**

---

## Pseudocode
```cpp
prefix[0] = 1
for i = 1 to n-1:
    prefix[i] = prefix[i-1] * nums[i-1]

suffix = 1
for i = n-1 down to 0:
    result[i] = prefix[i] * suffix
    suffix *= nums[i]
