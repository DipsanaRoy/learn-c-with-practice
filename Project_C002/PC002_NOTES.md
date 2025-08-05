# PC002. Tips

---

## 💡 Tip 1

```c
char moves[] = {'r', 'p', 's'};
char comp = moves[rand() % 3];
```

You can **skip the array** and do:

```c
char comp = "rps"[rand() % 3];
```

➔ `"rps"` is a **string literal** (`const char[]`), so indexing it works the same.
➔ Think of it as a **temporary string** which is dissolved instantly.
➔ Saves a line and makes it look **even cleaner**!

---

## 💡 Tip 2

**Avoid recursion** for *continue-or-stop* programs — **use loops instead**!

Why?

| 🚫 Recursion                     | ✅ Loops                          |
| -------------------------------- | ---------------------------------- |
| Eats stack memory 💾             | Constant memory usage 🔁          |
| Risk of crash with long use 💥   | Safe for millions of runs 🛡️      |
| Harder to trace/debug 🧩         | Clear, linear flow 📜             |

➔ Recursion is **overkill** for simple input-based logic.  
➔ Use it only for **tiny programs**, **demos**, or **code golf** fun!

---

### 🧠 First, a quick recap of **how recursion uses memory**

When you call a function recursively:

* Each call is stored in a new **stack frame** (a block of memory) on the **call stack**.
* That stack holds the function's **local variables, return address**, etc.
* The stack keeps **growing** with each call until:

  * The **base case** is reached,
  * And then the function calls begin to **unwind** (i.e., return one by one, in reverse).

---

### 🔍 Now our exact function

```c
return (opt == 'y') ? continueOrStop() :
       (opt == 'n') ? puts("Exiting.") :
                      continueOrStop();
```

Notice something interesting?

Only **one** recursive call ever happens at a time. Why?

---

### ✅ Why this is "safe" recursion (low stack usage)

You're calling:

* `continueOrStop()` **as the last action** in the function — that’s called **tail recursion**.

> **Tail recursion** is when a function returns the result of its *own call* without doing **anything else** afterward.

And in **some compilers**, tail recursion can be **optimized** — it *reuses* the current stack frame instead of pushing a new one. (In C, it's **not guaranteed**, but writing tail-recursive code is still good style when you can.)

So, our function is written in a way that **minimizes resource use**, even if the compiler doesn’t optimize it. That’s smart.

---

### 🧠 Memory hook

> "If the recursive call is *the last thing I do*,
> I don’t leave behind **me** — I pass the job through."

✅ **“If I use recursion at the very end of my function…”**
→ Yes, that’s **tail recursion**. It looks like:

```c
return myFunction(...); // Nothing happens after this call
```

---

✅ **“...and the function does not depend on any parent recursions like Fibonacci or factorial…”**
→ Correct again. Functions like Fibonacci:

```c
return fib(n - 1) + fib(n - 2);
```

These **need results** from *multiple recursive calls* to compute the final value. That means the **parent must wait**, so stack frames pile up.

But our function:

```c
return continueOrStop(); // One call, no parent waiting
```

This doesn’t need to **wait** for anything — it just *passes along control*.

---

✅ **“It’ll keep re-using the same stack frame but only done by smart compilers…”**
→ Yes, **some compilers** do *tail call optimization (TCO)* — meaning they replace the current call frame instead of pushing a new one.

> ⚠️ C compilers like GCC **may** optimize it with flags (e.g., `-O2`), but it’s not required by the C standard.

---

✅ **“Better to be on the safe side.”**
→ Yep! Writing tail-recursive code keeps your program **efficient and clean**, whether or not the compiler optimizes it.
