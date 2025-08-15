# Valid Sudoku

## 📌 Problem Statement
Determine if a given 9×9 Sudoku board is valid.  
A valid Sudoku must satisfy:
- Each row contains digits 1–9 without repetition.
- Each column contains digits 1–9 without repetition.
- Each of the nine 3×3 sub-boxes contains digits 1–9 without repetition.

Empty cells are denoted by `'.'`.

**Constraints:**
- Board size: 9×9
- Only digits `'1'`–`'9'` and `'.'` are allowed.
- A partially filled board **may be valid** without being solvable.

---

## 🏷 Type / Tag
`Hashing` `Matrix` `Simulation` `Validation`

---

## 💡 Approach
We check **three rules in parallel**:
1. **Rows:** Ensure no duplicate numbers in any row.
2. **Columns:** Ensure no duplicate numbers in any column.
3. **3×3 Boxes:** Ensure no duplicate numbers in each sub-grid.

We can use:
- **Hash sets** (or fixed boolean arrays) for constant-time lookups.
- A **single pass** through the board to check all constraints.

---

## 🐇 Optimal Solution Outline
1. Create 3 data structures:
   - `row[9][10]` → Tracks numbers in each row.
   - `col[9][10]` → Tracks numbers in each column.
   - `box[9][10]` → Tracks numbers in each 3×3 sub-box.
2. Iterate through each cell `(r, c)`:
   - Skip if cell is `'.'`.
   - Convert character to integer `num`.
   - Calculate `boxIndex = (r / 3) * 3 + (c / 3)`.
   - If `num` already exists in `row[r]`, `col[c]`, or `box[boxIndex]` → return false.
   - Mark presence in `row[r]`, `col[c]`, and `box[boxIndex]`.
3. Return `true` if no violations.

---

## ⏱️ Complexity Analysis
- **Time:** `O(1)` (since 9×9 board → 81 cells, constant size)
- **Space:** `O(1)` (fixed-size arrays for tracking)

---

## 📌 Example
**Input:**
```text
[
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
**Output:**  true



🔗 Related Problems

Sudoku Solver → Backtracking approach

N-Queens → Constraint validation + search
