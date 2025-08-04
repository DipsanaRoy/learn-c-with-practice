# C007. 📘 Array Notes

---

## 1. 📌 Array to Pointer Decay

In C, when you declare an array like `int marks[5];`, the array name `marks` represents the **address of the first element** — i.e., `&marks[0]`.

So, these two are functionally **equivalent**:

```c
int *ptr = marks;
int *ptr = &marks[0];
```

This automatic conversion is called **array-to-pointer decay** — it happens when an array is used in expressions or passed to functions.

---

## 2. 📥 Passing Arrays to Functions

When you pass an array to a function like this:

```c
void printArray(int ptr[], int n);
```

It’s **equivalent** to:

```c
void printArray(int *ptr, int n);
```

Why? Because arrays **decay into pointers** when passed to functions. So both forms mean the function receives a pointer to the first element of the array.

You can then use `ptr[i]` or pointer arithmetic like `*(ptr + i)` to access each element.

### ✅ Example

```c
printf("Element %d | value: %d\n", i + 1, ptr[i]);
```

---

## 3. 📍 How Array Element Address is Calculated

The address of the `n`th element in an array is calculated like this:

```text
address = base_address + (n * size_of_each_element)
```

### Example

If an array starts at address `62302` and each `int` is `4` bytes:

```text
2nd element address = 62302 + 2 * 4 = 62310
```

### Code Form

```c
int *ptr = arr + n; // Not multiplied by sizeof, as pointer math handles it
```

> ❗ Don't do `arr + n * sizeof(arr[0])` — **pointer arithmetic already uses the element size internally**.

🧠 **Note**: `arr` already points to `&arr[0]`.  
So `arr + 1` points to the next element automatically — **no need to manually multiply by size!**

---

## 4. 🤔 `i + 1` vs `i++` in `printf`

Let’s look at this line:

```c
printf("Student %d | marks in subject %d is: %d\n", i + 1, j + 1, marks[i][j]);
```

- `i + 1` and `j + 1` are **just expressions**. They compute values based on the current `i` and `j` but do **not** change their original values.
- If you want to actually change `i` or `j`, use `i++` or `j++` (post-increment) or `++i` (pre-increment).

📝 **Tip:** Use `i + 1` for **display purposes** (like showing Student 1 instead of Student 0), and `i++` if you actually want to update `i`.

---

## 5. 🌟 `%nd` Formatting Trick in `printf`

- `n` → means **minimum width**, the number will be **right-aligned**.
- `d` → means it's an integer.

### Example: `%2d`

`2` → is **minimum width**, the number will be **right-aligned**.

```c
printf("Student %2d | Marks: %d", s, m);
```

```text
Student  1 | Marks: 78
Student 10 | Marks: 90
```

### Example: `%-2d`

- `2` → is **minimum width**.
- `-` → means **left-align** the number within that width.

```c
printf("Student %-2d | Marks: %d", s, m);
```

```text
Student 1  | Marks: 78
Student 10 | Marks: 90
```

🧹 Helps keep things aligned neatly when numbers grow.

Try:

- Left-align: `%-3d`
- Right-align: `%2d`
and see the difference in layout!
