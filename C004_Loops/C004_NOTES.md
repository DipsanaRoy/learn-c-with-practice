# 📘 C004. More on Loops & Control Tricks

## 1. ✅ Entry Control Loop vs Exit Control Loop

| Type              | Meaning                                            | Examples       |
| ----------------- | -------------------------------------------------- | -------------- |
| **Entry Control** | Condition is checked **before** the loop runs      | `for`, `while` |
| **Exit Control**  | Loop runs **at least once**, then checks condition | `do-while`     |

💡 *Only `do-while` is an exit control loop in C.*

---

## 2. 🔍 How Condition Checking Works in C

* In `if`, ternary (`? :`), or loop:

  * **0 → false**, any **non-zero → true**

### Example

```c
if (1) printf("This runs!");
if (0) printf("This won't run!");
```

---

## 3. ⚠️ Infinite Loop Trap

Uninitialized loop variables can trap you.

### 🌀 Example

```c
for (int i; i; ) { } // Infinite loop! 'i' contains garbage value
```

---

## 4. 🌟 Why `while(*p)` Works

```c
char *p = "hello";
while (*p) {
    printf("%c", *p);
    p++;
}
```

✔ Stops when `*p` hits `'\0'` (i.e., null char = 0)

---

## 5. 🔁 `for (i = 0; 0; i++)` – Will `i` be 0?

Yes, **initialization always runs**, even if the condition is false.

```c
int i = 5;
for (i = 0; 0; i++) { }
printf("%d", i); // Outputs: 0
```

---

## 6. 🌀 `+++`, `++++`, `---`, `----` → Valid?

### ✅ Valid

* `++`, `--` → standard increment/decrement

### ❌ `+++` or `---`

* Not valid as a single operator
* Interpreted as: `++ +` or `-- -` → Confusing, mostly invalid

### ✅ `++++a`, `----b`

* Parsed as `++(++a)` or `--(--b)` → Valid but messy
* **Avoid using them** for clarity

---

### 🧠 Final Tip

* Use only `++` and `--` clearly
* Avoid chained confusing expressions like `++++++a` even if they technically work

---

## 7. Nested Loops

Nested loops loops means **loops inside loops**. We can also have nested if-else clause, ternary and switch statments.

### 7. ✅ `break` Statement in Nested Loops

* `break` **only exits the loop it is directly inside.**
* It does **not** break out of outer loops.

### ✅ `continue` Statement in Nested Loops

* `continue` also applies **only to the loop it’s directly inside.**
* It **skips the rest of the current iteration** and goes to the next iteration of that **same loop**.

---

### 🔍 Example

```c
for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 3; j++) {
        if (j == 2)
            break; // or continue;
        printf("i=%d, j=%d\n", i, j);
    }
}
```

#### If `break`

Output:

```text
i=1, j=1
i=2, j=1
```

→ Break skips out of **inner loop only** when `j == 2`.

#### If `continue`

Output:

```text
i=1, j=1
i=1, j=3
i=2, j=1
i=2, j=3
```

→ Continue **skips `j == 2`** but continues looping.

---

So,

* 🟥 `break` → exits **just the inner loop**
* 🟡 `continue` → skips just **one inner iteration**
