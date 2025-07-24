# C004. More on Loops

## 1. Entry Control Loop vs Exit Control Loop

✅ **Entry Control Loop** → **Condition is checked first, then the loop runs.**  
✅ **Exit Control Loop** → **Loop runs at least once, then checks the condition.**

---

### Examples

- **Entry Control Loops** (Condition checked **before** execution)  
  - `for`  
  - `while`  

- **Exit Control Loop** (Condition checked **after** execution)  
  - `do-while`  

💡 *`do-while`* is the only exit control loop in C. Everything else is entry control!

---

## 2. How Condition Checking Works in C

- In any `if`, ternary (`? :`), or loop statement,  
  - **Any non-zero value** is treated as **`true`**.
  - **0** is treated as **`false`**.

### Example

```c
if (1) // true
    printf("This will run!");

if (0) // false
    printf("This won't run!");
```

---

## 3. ⚠️ Be Careful: Infinite Loop Trap

Sometimes beginners accidentally cause infinite loops by missing proper initialization or condition checks.

### Tricky Example

```c
for (int i; i; )
{
    // Infinite loop! because 'i' is uninitialized (random garbage value)
}
```

- Here, `i` contains an unknown value, which might be nonzero, causing the loop to never end!

---

## 4. ✨ Why `while(*p)` works?

This is a classic C idiom used when working with strings.

### 🎯 Example

```c
char *p = "hello";
while (*p)
{
    printf("%c\n", *p);
    p++;
}
```

✅ **Why it stops:**  

- Strings end with a **null character (`'\0'`)**, which is value **0**.
- `*p` reads the current character.
- So `while (*p)` means: “Run until the current character is not `'\0'`.”

⛔ When `*p` becomes `'\0'`, the loop stops automatically.

---

## 5. ✨ `for (i = 0; 0; i++)` — Will `i` still become 0?

Yes! As the **initialization part of a `for` loop always executes** before the condition is checked.

### Think of it as: `for` (`Init;` → `Condition;` → `Update`) → `{`...`}`

### ⚔️ Example

```c
int i = 5;
for (i = 0; 0; i++)
{
    // This will never run!
}
printf("%d", i); // Output: 0
```

✅ Even though the loop doesn’t run, `i = 0` **still happens**.  
💡 The **condition (0)** is false, so the loop body and `i++` are skipped, but the **init runs anyway**.
