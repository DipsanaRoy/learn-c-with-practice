# C007. C Size Notes

---

## 1. `%d` vs `%u` Specifier

| Format Specifier | Works With     | Accepts Negative? | Extra Step Needed?   |
|------------------|----------------|-------------------|----------------------|
| `%d`             | `int`          | ✅ Yes            | ❌ No               |
| `%u`             | `unsigned int` | ❌ No             | ✅ Yes (conversion) |

### When to Use

- Use `%d` if output is always non-negative → **faster and simpler**.
- Use `%u` only when you're specifically dealing with `unsigned int`.

### Example

```c
int result = 100;
printf("%d\n", result); // Simpler and faster
```

---

## 2. What is `sizeof`?

- It **returns the size** of any object **in bytes**.
- **Retrieves the size** of different data types and variables **based on your architecture**.

### Use Case?

- Perform **size-related operations** like *storing length of an array.*

```c
size_t length = sizeof(arr) / sizeof(arr[0]); // arr length = total arr size / each element size
```

#### Example: `sizeof(int), sizeof(float)`, etc

---

## 3. What is `size_t`?

- `size_t` is a **special unsigned number** used in C to **count things** – like *how many toys in a box* 📦 or *letters in a word* 🔤
- You can't have -5 toys, right? That's why **it can’t be negative**.
- The computer uses it to **know how big something is**, or **how many times** to do something safely (especially in loops, arrays, and memory management).

### 👩‍💻 Behind the Scenes

- `size_t` is an **unsigned data type** that stores **size values in bytes**.
- It is the **return type of `sizeof`** and used in functions like `malloc()`, `strlen()`, etc.
- It is **defined in**:
  - `stddef.h`
  - `stdio.h`
  - `stdlib.h`
  - and some other standard headers!

> 🖥️ On a 32-bit system → usually `unsigned int`  
> 💻 On a 64-bit system → usually `unsigned long`

---

### 🔹 Why use `size_t`?

- **Architecture-compatible** (safe for both 32-bit and 64-bit systems).
- **No negatives** (perfect for sizes, memory allocation, and indexing).
- **Safer and portable** coding standard.

---

### 🔹 Basic Use

```c
#include <stdio.h>

int main() {
    size_t count;
    printf("Enter a number: ");
    scanf("%zu", &count);  // %zu = correct format specifier for size_t
    printf("You entered: %zu\n", count);
}
```

---

### 🔹 Smart Input Handling

```c
#include <stdio.h>

int main() {
    long input;
    scanf("%ld", &input);

    if (input < 0) input = -input; // Auto-correct negative inputs
    size_t count = (size_t)input;  // Safe conversion

    printf("Final count: %zu\n", count);
}
```

---

## 4. ✨ Bonus Tip: About `NULL`

- `NULL` is a special constant that represents a **zero memory address** (nothing/empty pointer).
- **It is also defined** in:
  - `stddef.h`
  - `stdio.h`
  - `stdlib.h`
  - `string.h`
- So just like `size_t`, **you often get `NULL` automatically** with standard headers.

---

## 📝 Final Summary

| Feature             | Detail                                             |
|:--------------------|:---------------------------------------------------|
| Data Type           | `size_t`                                           |
| Format Specifier    | `%zu`                                              |
| Safer Input Idea    | Read as `long`, correct if needed, cast to `size_t`|
| `NULL` Available In | `stddef.h`, `stdio.h`, `stdlib.h`, `string.h`      |
