# C005. 📘 `factorial(n)` – Explained Step-by-Step

```c
int factorial(int n)
{
    if (n < 2) return 1; // Base case
    
    return n * factorial(n - 1); // Recursive case
}
```

---

## 🧱 Function Structure Breakdown

### 1. Function Definition

```c
int factorial(int n)
```

- Declares a function named `factorial` that takes an integer `n`.
- Returns an `int` — the factorial result.

---

### 2. Base Case

```c
if (n < 2) return 1;
```

- If `n` is `0` or `1`, it returns `1`.
- This **stops** the recursion from going on forever — it’s the "exit door".

---

### 3. Recursive Case

```c
return n * factorial(n - 1);
```

- Function calls **itself** with `n - 1`.
- Builds up a chain like this:  
  `factorial(4) = 4 * factorial(3)`  
  `factorial(3) = 3 * factorial(2)`  
  ...until it hits the base case.

---

## 🔁 Recursion Flow Example (`factorial(4)`)

### Going Down

Recursion functions calls **more copies of itself (instances)** till a function **returns a value (base case)**. Like here it's **decrementing value of n by 1** with each call from `return n * factorial(n - 1);`:

```c
factorial(4) → starting call
→ 4 * factorial(3)
    → 3 * factorial(2)
        → 2 * factorial(1)
            → return 1 at factorial(1) (base case hit)
```

Don't get confused, when the recursive functions reaches `factorial(1)` it executes these lines:

```c
if (n < 2) return 1;
```

where the **value of `n` is `1`**:

```c
int factorial(int n) → factorial(1) → n = 1
```

which is less than 2 i.e. **1 < 2** so `if condition` becomes **true** and it **returns 1**. This is called the **base case.**

### Going Up

After the function reaches a **base case** that **returns a value** it starts **substituting the values** from their **previous calls.**

After going down we go up, `factorial(2)` resumes after getting return value from `factorial(1)` i.e. `1` from the **base case.**

```c
→ factorial(2) returns 2 * factorial(1)
```

Here, `factorial(1)` was already calculated as `1`, so we plug it in. Just like we did in our school while solving linear equations in Maths by **substitution**. *Each solved value gets plugged back into the previous one — just like substituting x = 2 back into an equation.*

```c
→ factorial(2) returns 2 * 1
→ factorial(2) returns 2
```

Similarly we will follow this till we go back to the **starting call**:

```c
→ factorial(3) returns 3 * factorial(2) = 3 * 2 = 6
→ factorial(4) returns 4 * factorial(3) = 4 * 6 = 24
```

### Final Picture

```c
factorial(4)
→ 4 * factorial(3)
    → 3 * factorial(2)
        → 2 * factorial(1)
            → return 1 at factorial(1) (base case hit)
        ← returns 2 * factorial(1) = 2 * 1 = 2
    ← returns 3 * 2 = 6
← returns 4 * 6 = 24
```

### Call Stack

```c
Call Stack (top to bottom):
→ factorial(4)
→ factorial(3)
→ factorial(2)
→ factorial(1)
← return 1
← return 2
← return 6
← return 24
```

---

## 📝 Summary

- Recursion is like stacking calls, then solving them backward. [`UP` to `DOWN` and then `DOWN` to `UP`]
- The **base case** ends the recursion.
- The **recursive case** breaks the problem down.

---

## Memory Line

**"Dive down, solve up."**
(Recursion dives into subproblems, then solves them as it returns.)

---

## ✨ Short Tip

- Using **function prototypes** along with function definitions is a *good practice* in C, as it improves code clarity, program organization and helps the compiler catch errors early!

- In C, it's better to return `0` and `1` for `true/false` values rather than using boolean types like `true` or `false`. Some compilers might not support them, and in the end, conditions are evaluated as integers (`0` for `false` and anything `non-zero` for `true`).
