# 🚀 Data Structures & Algorithms (DSA) in C++

A structured repository containing Data Structures and Algorithms implementations, problem walkthroughs, revision cheat sheets, and recursive call traces written in C++.

---

## 📌 Repository Structure

```
dsa/
├── binary-search.md                  # Comprehensive Binary Search Revision Sheet & Variants
├── maxdiff_test.cpp                  # Greedy / Sorting: Max difference between subset sums
└── recursion/                        # Recursion deep dive, traces, and subsets
    ├── recursion_order.cpp           # Head vs tail recursion printing order
    ├── recursion_trace.cpp           # Call stack visualization (enter vs exit)
    ├── recursion_m.cpp               # Bi-directional tracing (down & up unwinding)
    ├── recursion_sum.cpp             # Basic mathematical recursion (sum of 1..N)
    ├── Recursion_digitprint.cpp      # Digit extraction and printing using call stack
    ├── Recursion_fibo.cpp            # Standard Fibonacci recursive formulation
    ├── recursion_fib_calls.cpp       # Tree call counts & exponential complexity demo
    ├── recursion_fib_memo.cpp        # Top-down Dynamic Programming / Memoization
    ├── recursion_subsets.cpp         # Backtracking: Subsets generation (pick / don't pick)
    └── recursion_overflow.cpp        # Stack overflow demonstration (missing base case)
```

---

## 📚 Topics Covered

### 1. 🔍 Binary Search Variants & Paradigms
Detailed notes and templates are available in [`binary-search.md`](binary-search.md).
- **Exact Match Template**: `while (low <= high)`
- **Boundary / Converge Template**: `while (low < high)`
- **Key Variants**:
  - Search in Rotated Sorted Array (LeetCode 33 & 81)
  - Find Minimum in Rotated Sorted Array (LeetCode 153)
  - Single Element in a Sorted Array (LeetCode 540)
  - Peak Element (LeetCode 162)
  - **Binary Search on Answer / Monotonic Predicates**: Sqrt, Koko Eating Bananas, Minimum Time to Complete Trips (LeetCode 2187).

### 2. 🔁 Recursion & Backtracking
Located in [`recursion/`](recursion/):
- **Call Stack & Execution Order**:
  - Tracing downward execution vs unwinding phase (`recursion_trace.cpp`, `recursion_m.cpp`, `recursion_order.cpp`).
  - Stack overflow mechanics & call limits (`recursion_overflow.cpp`).
- **Divide & Conquer / Mathematics**:
  - Sum of $N$ numbers (`recursion_sum.cpp`).
  - Digit processing via recursion (`Recursion_digitprint.cpp`).
- **Optimization & Memoization**:
  - Exponential call explosion analysis: $O(2^n)$ in naive Fibonacci (`recursion_fib_calls.cpp`).
  - Memoization / Top-down Dynamic Programming reducing calls to $O(n)$ (`recursion_fib_memo.cpp`).
- **Combinatorics & Backtracking**:
  - Power set / Subsets generation using pick/don't pick recursion tree (`recursion_subsets.cpp`).

### 3. ⚖️ Greedy & Sorting
- **Maximum Difference Problem** ([`maxdiff_test.cpp`](maxdiff_test.cpp)): Maximize the absolute difference between subsets of size $k$ and $n-k$ using sorting and prefix sums.

---

## 🛠️ How to Compile & Run

Make sure you have `g++` or `clang++` installed with C++17 (or C++20) support.

### Compile a single file:
```bash
# Example: Running subset generation
g++ -std=c++17 -O2 recursion/recursion_subsets.cpp -o subsets
./subsets

# Example: Testing Fibonacci memoization call comparisons
g++ -std=c++17 -O2 recursion/recursion_fib_memo.cpp -o fib_memo
./fib_memo
```

---

## 💡 Key Takeaways & Cheat Sheet

| Technique | Common Pitfall / Key Insight |
| :--- | :--- |
| **Binary Search on Answer** | Confirm monotonicity: check function must evaluate to `[F, F, ..., T, T]` or `[T, T, ..., F, F]`. |
| **Rotated Arrays** | Always identify which half is sorted first: `nums[low] <= nums[mid]` (handle duplicates carefully). |
| **Recursion Base Cases** | Ensure arguments strictly move towards the base case to prevent stack overflow. |
| **Backtracking (Subsets)** | Explore "Include" choice $\rightarrow$ recurse $\rightarrow$ explore "Exclude" choice $\rightarrow$ backtrack state. |
| **Memoization** | Cache results using state keys (e.g. array/hash table) before returning to avoid redundant sub-tree traversals. |

---

## 👤 Author
- **Arjit** ([@Obito-bot25](https://github.com/Obito-bot25))
