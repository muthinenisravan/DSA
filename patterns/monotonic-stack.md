
# Monotonic Stack Patterns

## ✅ Core Idea
Maintain a stack that is either **monotonically increasing** or **decreasing** to quickly answer **nearest greater/smaller element** queries.  
Each element is pushed once and popped at most once → **O(n)** processing.

---

### 🔁 Quick Pattern Summaries

| Problem Type / Pattern         | Stack Type         | One-liner Trick |
|--------------------------------|-------------------|-----------------|
| Next Greater Element (NGE)     | Decreasing stack   | Pop while `top < cur`, assign `next[top] = cur` |
| Next Smaller Element (NSE)     | Increasing stack   | Pop while `top > cur`, assign `next[top] = cur` |
| Daily Temperatures             | Decreasing (indices) | Pop until warmer found; distance = `i - top` |
| Stock Span Problem             | Decreasing (indices) | Pop while `<= cur`; span = `i - lastGreaterIdx` |
| Largest Rectangle in Histogram | Increasing (indices) | Pop to compute area with width until new boundary |
| Trapping Rain Water (Stack ver)| Increasing         | Pop to find bounded water between bars |

---

### ✅ Common Tips

- **Value vs Index Stack**  
  - Use **value stack** when uniqueness is guaranteed and you only need mapping (e.g., LC496 NGE I).  
  - Use **index stack** when duplicates exist or when distances/spans/areas are required.

- **Strict vs Non-strict Inequality**  
  - `<` → classic NGE (pop strictly smaller).  
  - `<=` → ensures strictly monotonic property when duplicates appear.  

- **Leftover stack**  
  - Always process leftover stack items after traversal (map them to `-1` or compute final spans).

- **Direction**  
  - Left → Right: Next Greater/Smaller **to the right**.  
  - Right → Left: Next Greater/Smaller **to the left**.

---

### 🛠️ Common Use-Cases
- Next Greater/Smaller element queries
- Finding ranges/spans (stock span, daily temperatures)
- Largest rectangle in histogram
- Trapping rain water (stack-based)
- Expression parsing (operators stack)

---

### ⏱️ Time Complexity
- Each element is pushed & popped at most once → **O(n)**.  
- Space: **O(n)** for the stack + result array/map.

---

### ✅ Related Problems
Problem                        | Link | Note
--------------------------------|------|------------------------------------------------
Next Greater Element I          | 🔗   | Value stack, unique values (LC496)  
Next Greater Element II         | 🔗   | Circular array, simulate twice (LC503)  
Daily Temperatures              | 🔗   | Index stack, span calculation (LC739)  
Stock Span Problem              | 🔗   | GFG classic, decreasing stack of indices  
Largest Rectangle in Histogram  | 🔗   | Hard, compute width using left/right limits (LC84)  
Maximal Rectangle               | 🔗   | Extension of histogram to matrix (LC85)  

---

### 🎤 Interview Tips
- **State invariant explicitly**: “I’ll maintain a decreasing stack so every element is waiting for its next greater.”  
- **Explain complexity proof**: “Each element is pushed once and popped once → O(n).”  
- **Clarify duplicates**: interviewer may test `<` vs `<=`.  
- **Dry-run live** on a small array to show stack behavior.  
- **Map vs Span**: highlight when to use **values** vs **indices**.  
- **Fallback strategy**: say you’d start with brute force for clarity, then optimize.  

---

### 🧷 Recall Tip
> “Pop until stack is happy, assign popped’s answer = current, leftovers = -1.”
