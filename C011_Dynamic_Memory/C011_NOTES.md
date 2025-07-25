# ✅ C011: Dynamic Memory, Stack vs Heap, and `void *` in C

---

## 1. 🏗️ What is Dynamic Memory Allocation?

* Allocates **memory at runtime** (while program is running).
* Useful when **memory size is unknown in advance**.
* Comes from the **Heap**, not the Stack.

| Allocation Type | Timing       | Memory Location |
| --------------- | ------------ | --------------- |
| Static          | Compile-time | Stack           |
| Dynamic         | Run-time     | Heap            |

---

## 2. 🗃️ Stack vs Heap Memory

| Feature    | Stack                          | Heap                          |
| ---------- | ------------------------------ | ----------------------------- |
| Managed by | Compiler                       | Programmer (You!)             |
| Lifetime   | Automatic (ends with function) | Manual (you `free` it)        |
| Speed      | Fast                           | Slower                        |
| Size       | Limited                        | Larger                        |
| Use case   | Local variables                | `malloc`, `calloc`, `realloc` |
| Risk       | Stack Overflow                 | Memory Leak                   |

---

## 3. ⚙️ Dynamic Memory Functions

| Function       | Description                            |
| -------------- | -------------------------------------- |
| `malloc(size)` | Allocates memory (garbage inside)      |
| `calloc(n,s)`  | Allocates + zeroes memory              |
| `realloc(p,s)` | Resizes previously allocated memory    |
| `free(ptr)`    | Frees the memory, prevents memory leak |

### 🧪 Quick Example

```c
// malloc example
int *p = (int *)malloc(5 * sizeof(int));

// calloc example
int *q = (int *)calloc(5, sizeof(int));

// realloc example
p = (int *)realloc(p, 10 * sizeof(int));

// free memory
free(p);
free(q);
```

---

## 4. 🌀 `void *` and the Magic of `*`

### 🔹 What is `void *`?

* A **generic pointer** returned by `malloc`, `calloc`, `realloc`.
* Holds the **address of any type**, but **type unknown**.

```c
int *p = (int *)malloc(5 * sizeof(int));  // cast to int*
```

### 🔹 What does `*` mean?

* `*` = pointer to something.
* `int *p` → p holds the **address of an `int`**.

📌 `malloc` gives you an **address** → You need `*` to **store that address** correctly.

---

## 5. ⚖️ Safe and Smart Allocation

### 🔍 Common mistake

```c
int *arr = malloc(n * sizeof(int)); // If you change arr’s type, you might forget this.
```

### ✅ Better way

```c
int *arr = malloc(n * sizeof(*arr)); // Safer!
```

> “Allocate space for `n` items of whatever type `arr` points to.”

🎯 Cleaner and **type-safe** even for `float`, `char`, `struct`, etc.

#### Example

```c
float *scores = malloc(n * sizeof(*scores));
```

---

## 6. 🚪 `exit()` – End the Program

* `exit(0);` → Ends successfully.
* `exit(1);` → Ends with error.
* Wherever called, it **immediately halts** program execution.

---

## 7. 🧼 Don't Forget `free()`

* Always `free()` what you `malloc()` / `calloc()` / `realloc()`.
* Else → memory stays occupied = **Memory Leak**.
* All these functions return `NULL` if allocation fails.

---

## 🔥 TL;DR Summary

| Concept     | Meaning                                            |
| ----------- | -------------------------------------------------- |
| **Stack**   | Fast, automatic, small, temporary 💨               |
| **Heap**    | Manual, big, flexible, slower 🧩                   |
| **void \*** | Generic pointer – "I hold an address!" 🎯          |
| **\***      | Used to declare/store pointers (memory address) 💾 |
| **free()**  | Mandatory after dynamic allocation 💣              |
