# CP005. `nth` Fibonacci Number by Recursion

This function calculates the **nth Fibonacci number** using recursion.

---

## 1. 🧱 Base Case

If `n` is 0 or 1, it simply returns `n`. This prevents infinite recursion and gives us the stopping condition.

```c
if (n <= 1) {
    return n;
}
```

---

## 2. 🔁 Recursive Case

For values greater than 1, the function recursively calls itself to compute the previous two Fibonacci numbers, then adds them.

```c
return calculate(n - 1) + calculate(n - 2);
```

This continues until it hits the base case. Then, the values bubble back up like solving a puzzle piece by piece.

---

## 🧩 Example: `calculate(5)`

Let’s break it down:

### Going down ⬇️ (Recursion in action)

* `calculate(5)`
  → `calculate(4) + calculate(3)`

  * `calculate(4)`
    → `calculate(3) + calculate(2)`

    * `calculate(3)`
      → `calculate(2) + calculate(1)`

      * `calculate(2)`
        → `calculate(1) + calculate(0)`

        * `calculate(1)` → **1** (base case)
        * `calculate(0)` → **0** (base case)

### Coming up ⬆️ (Substitution begins)

Now that base cases are reached, we go back up and keep substituing values:

* `calculate(2)` → 1 + 0 = **1**
* `calculate(3)` → 1 + 1 = **2**
* `calculate(4)` → 2 + 1 = **3**
* `calculate(5)` → 3 + 2 = **5**

✅ So, `calculate(5)` returns **5** – the 5th Fibonacci number!

---

### ⚠️ Don't Get Confused

Let’s take a quick detour for those feeling lost (it’s totally normal 🫂).

**Think of this like your childhood math homework** — where you’d *substitute* values step-by-step.

Let’s zoom in on how we calculate `calculate(2)` during the “Coming up” phase:

1. We know:

   ```c
   calculate(2) → calculate(1) + calculate(0)
   ```

2. `calculate(n)` will **return** `n` when `n <= 1` from the **base case**:

   ```c
    if (n <= 1) {
        return n;
    }
    ```

   So from the **base case** (at the bottom of recursion **when recursion stops and starts returning values**), we already have:

   * `calculate(1)` = **1** as `1 <= 1` is `true`
   * `calculate(0)` = **0** as `0 <= 1` is `true`

3. Now substitute those values:

   ```c
   calculate(2) → 1 + 0 = 1
   ```

   Boom! So `calculate(2)` is **1** ✅

4. Now take that result and plug it into the next level, `calculate(3)` becomes:

   ```c
   calculate(3) → calculate(2) + calculate(1)
                → 1 + 1 = 2
   ```

5. That result feeds into `calculate(4)`:

   ```c
   calculate(4) → calculate(3) + calculate(2)
                → 2 + 1 = 3
   ```

And so on… like a chain reaction! 🔗✨

🧠 **Pro Tip**: If recursion feels confusing, just write it down like a substitution puzzle. Replace one value at a time, just like solving equations back in school. You're doing recursion without realizing it!

---

## 💡 Tip 1: Understand Recursion Like This

Think of recursion as unfolding and refolding:

1. It **starts** from a main call like `calculate(5)`
2. It **splits** into smaller versions of itself
3. The smallest ones hit the **base case** and return fixed values
4. Those values then **combine step-by-step** until the original call is resolved

---

## 💡 Tip 2: printf() Needs Values Right Now

C expects `printf()` to receive actual values or function calls that **return** values:

✅ Valid examples:

```c
printf("%d", n);
printf("%d", calculate(n));
```

❌ Invalid examples:

```c
printf("%d");      // No value provided — undefined behavior
printf(42);        // Missing format specifier
```

✅ Valid examples:

```c
printf("%d", 42);  // Perfect! It expects an integer argument
```

You guessed it! We can use this cool trick using a ternary inside `printf()`:

```c
printf("Hello! %s", (human == "male") ? "Sir" : "Miss");
```
