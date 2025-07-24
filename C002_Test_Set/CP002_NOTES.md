# CP002. Data Types Trivia

*A quick guide on how to initialize doubles, use scientific notation, and understand type promotion in C!*

## 1. Initialize Double

You can initialize a `double` variable in several ways:

### ➡️ Direct Initialization

```c
double myDouble = 3.14159;
```

---

### ➡️ Using Type Casting

```c
double myDouble = (double)3.14159;
```

---

### ➡️ Using Scientific Notation (Exponential form)

#### Validity Check: [digits].[digits]e[+/-]digits

```c
double myDouble = 1.23e4;    // Equivalent to 1.23 × 10⁴ = 12300
double anotherDouble = 12e4; // Equivalent to 12 × 10⁴ = 120000
```

- `e` or `E` means "**times 10 raised to**."
- Example: `3e12` means `3 × 10¹²`.

✅ Some valid forms:

```c
double d1 = 5e0;    // 5.0
double d2 = 6.7e-2; // 0.067
double d3 = 2.;     // 2.0
double d4 = .5;     // 0.5
```

❌ Invalid:

```c
double wrong = 4.5e.3;  // ❌ error: decimal after 'e' not allowed
wrong = 23e54E45;       // ❌ error: only one 'e' is allowed
wrong = 5e4e;           // ❌ error: only one 'e' is allowed
wrong = 6e;             // ❌ error: exponent is missing
wrong = .;              // ❌ error: not a number
wrong = .e5;            // ❌ error: not a number
wrong = E;              // ❌ error: will be treated as char
wrong = e;              // ❌ error: will be treated as char
```

---

### ➡️ Using Constants

```c
#include <float.h>
double myDouble = DBL_MAX;   // Maximum value for double
double smallDouble = DBL_MIN; // Smallest positive normalized double
```

---

### ➡️ Initializing with Other Variables

```c
int myInt = 42;
double myDouble = myInt;  // Auto-implicit promotion from int to double
double d2 = myDouble;     // ✅
```

---

### ➡️ Special Floating-Point Values

You can work with *special double values*:

| Value                 | Meaning                                |
|:----------------------|:---------------------------------------|
| `+inf` or `INFINITY`  | Positive infinity (`1.0 / 0.0`)        |
| `-inf`                | Negative infinity (`-1.0 / 0.0`)       |
| `NaN` (Not a Number)  | Indeterminate value (`0.0 / 0.0`)      |

Example:

```c
#include <math.h>

double pos_inf = INFINITY;
double neg_inf = -INFINITY;
double not_a_number = NAN;
```

---

## 2. What is Type Promotion?

**Type promotion** happens when a smaller data type is automatically converted to a larger one during:

- Assignments
- Calculations (expressions)
- Function calls

It **avoids loss of precision** when mixing types.

✅ Example:

```c
int a = 5;
double b = a;  // 'a' promoted to double automatically
```

✅ Another Example:

```c
int a = 5;
float b = 2.5f;
double result = a + b;  // 'a' and 'b' promoted to double
```

---

## 3. ⚡ Quick C Type Promotion Rules

| If you mix...        | Then C promotes... | Example                 |
|:---------------------|:-------------------|:------------------------|
| `char` and `int`     | ➔ `int`           | `'a' + 1` ➔ int        |
| `short` and `int`    | ➔ `int`           | `short + int` ➔ int    |
| `int` and `float`    | ➔ `float`         | `5 + 2.5f` ➔ float     |
| `int` and `double`   | ➔ `double`        | `5 + 2.5` ➔ double     |
| `float` and `double` | ➔ `double`        | `2.5f + 3.14` ➔ double |

✨ **Golden Rule: "Bigger wins!"**

---

## 4. 🎯 Final Shortcuts and Ranges

| Type          | Approximate Range          |
|:--------------|:---------------------------|
| `float`       | ~ ±3.4 × 10³⁸              |
| `double`      | ~ ±1.7 × 10³⁰⁸             |
| `long double` | Even larger (compiler-dependent) |

---

### 🔥 Fun Tip

- `15.e45` ➔ Valid (`15.0 × 10^45`)
- `45e.45` ➔ ❌ Invalid (must be `45e2` or `45e-2`, not decimal after `e`)
