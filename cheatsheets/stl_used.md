# 🧰 STL Components & Methods Cheat Sheet

This cheat sheet tracks all STL components and their methods **as encountered in solved problems** — along with usage context, time complexity, and problem links.

---

## 🧭 Quick Navigation

- [`unordered_map<K, V>`](#unordered_mapk-v)
- [`unordered_set<T>`](#unordered_sett)
- [`vector<T>`](#vectort)
- [`priority_queue<T>` (Min-Heap)](#priority_queuet-min-heap)
- [`pair<T1, T2>`](#pairt1-t2)

---

## 📦 `unordered_map<K, V>`

| Method             | Purpose / Context                            | Time Complexity | Problem(s) Used In                          |
|--------------------|----------------------------------------------|------------------|---------------------------------------------|
| `mp[key]++`        | Count frequency                              | `O(1)` avg       | Valid Anagram, Top-K                        |
| `.count(key)`      | Check existence                              | `O(1)` avg       | Contains Duplicate II, Two Sum              |
| `.insert({k,v})`   | Insert key-value pair                        | `O(1)` avg       | Valid Anagram                               |
| `.clear()`         | Reset map                                    | `O(n)`           | Valid Anagram (compare)                     |
| `.begin(), .end()` | Iterate map                                  | `O(n)`           | Debugging / printing                        |

---

## 📦 `unordered_set<T>`

| Method             | Purpose / Context                            | Time Complexity | Problem(s) Used In                          |
|--------------------|----------------------------------------------|------------------|---------------------------------------------|
| `.insert(val)`     | Add to window                                | `O(1)` avg       | Contains Duplicate II                       |
| `.erase(val)`      | Remove from window                           | `O(1)` avg       | Contains Duplicate II                       |
| `.count(val)`      | Check for duplicate                          | `O(1)` avg       | Contains Duplicate II                       |
| `.clear()`         | Reset set                                    | `O(n)`           | -                                           |

---

## 📦 `vector<T>`

| Method               | Purpose / Context                          | Time Complexity | Problem(s) Used In                          |
|----------------------|--------------------------------------------|------------------|---------------------------------------------|
| `.push_back(val)`    | Add element                                | `O(1)` amortized | Top-K                                       |
| `.emplace_back(val)` | More efficient push                        | `O(1)` amortized | Top-K                                       |
| `.resize(n)`         | Set result vector size                     | `O(n)`           | Top-K                                       |
| `.clear()`           | Reset vector                               | `O(n)`           | Top-K                                       |

---

## 📦 `priority_queue<T>` (Min-Heap with comparator)

| Method               | Purpose / Context                          | Time Complexity       | Problem(s) Used In           |
|----------------------|--------------------------------------------|------------------------|-------------------------------|
| `.push(val)`         | Insert `(freq, num)` pair                  | `O(log n)`             | Top-K Frequent Elements       |
| `.pop()`             | Remove smallest (min-heap)                 | `O(log n)`             | Top-K Frequent Elements       |
| `.top()`             | Peek min                                   | `O(1)`                 | Top-K Frequent Elements       |
| Custom Compare       | Use `greater<>` for min-heap               | -                      | Top-K Frequent Elements       |

---

## 📦 `pair<T1, T2>`

| Method / Usage        | Purpose / Context                          | Time Complexity | Problem(s) Used In                         |
|------------------------|--------------------------------------------|------------------|--------------------------------------------|
| `pair<int,int>`        | Store `(freq, val)` for heap               | `O(1)`           | Top-K Frequent Elements                    |
| `make_pair(x, y)`      | Construct pair                             | `O(1)`           | Top-K Frequent Elements                    |
| `.first / .second`     | Access pair values                         | `O(1)`           | Top-K Frequent Elements                    |

---

## 🧠 Summary Table (Used Today)

| STL Component        | Methods Seen / Practiced                        |
|----------------------|------------------------------------------------|
| `unordered_map`      | `[]`, `.count()`, `.insert()`, `.clear()`      |
| `unordered_set`      | `.insert()`, `.erase()`, `.count()`, `.clear()`|
| `vector`             | `.push_back()`, `.emplace_back()`, `.resize()` |
| `priority_queue`     | `.push()`, `.pop()`, `.top()`, `custom cmp`    |
| `pair`               | `.first`, `.second`, `make_pair()`             |

---

_Last updated: July 30, 2025_

To be updated after every 5 problems 💪

🔁 Want to contribute? Add the method when you **code it or debug it**, not just when you read about it. Learn by doing.

