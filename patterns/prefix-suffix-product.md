# Prefix–Suffix Product Pattern

💡 **Core Idea:**  
Use two passes — one for prefix products (product of elements before the index) and one for suffix products (product of elements after the index) — to compute results like "product of array except self" without using division.

🛠️ **Common Use-Cases:**  
- Product of all elements except self  
- Multiplicative accumulation without division  
- Handling zero values in product computation  

⚙️ **Techniques:**  
1. Build a prefix product array: `prefix[i] = prefix[i-1] * nums[i-1]`  
2. Traverse from the right keeping a running suffix product  
3. Multiply prefix and suffix products for the result  

🧠 **Time Complexity:**  
- Time: O(N)  
- Space: O(1) extra (excluding output array)  

✅ **Related Problems:**  

| Problem | Link | Note |
|---------|------|------|
| Product of Array Except Self | [🔗](../../problems/medium/product-of-array-except-self/README.md) | Core use-case |
