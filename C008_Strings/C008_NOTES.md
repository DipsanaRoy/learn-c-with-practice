# C008. String Notes in C

---

## 1. 📚 Quick Definitions

- **Buffer**: A chunk of **temporary memory** to store input (like `char name[20]`) generally from terminal.
- **Bounds**: The **limit** of how much the buffer can hold (e.g., 20 characters).
- **Signed**: Variables storing **both** negative and positive values (e.g., `-10` to `+10`).
- **Unsigned**: Variables storing **only positive values** (e.g., `0` to `255`), useful for safe character handling.

---

## 2. 🧵 String Input in C – The Safe Way

### 🚫 Avoid This: `gets(name);`

```c
gets(name);
```

- **Problem**: It **doesn’t check** buffer size.
- **Risk**: **Buffer Overflow** → leads to **memory corruption**.

### ✅ Use This Instead: `fgets(name, sizeof(name), stdin);`

```c
fgets(name, sizeof(name), stdin);
```

| Part             | Meaning                             |
|------------------|-------------------------------------|
| name             | Where input is stored               |
| sizeof(name)     | Max characters to accept            |
| stdin            | Keyboard input (standard input)     |

✅ **Safe** for handling string inputs without crash.

---

## 3. 🔎 About isspace((unsigned char)ch)

```c
while (isspace((unsigned char)ch))
```

- Checks if a character is **space**, **tab**, or **newline**.
- ✅ Cast to `unsigned char` to prevent problems on systems where `char` is signed.

---

## 4. 🔡 `tolower()` and `toupper()` in C

### ✨ Usage

- `tolower(c)` → Converts uppercase to lowercase.
- `toupper(c)` → Converts lowercase to uppercase.
- If already the correct case → **no change**.

```c
char ch = 'A';
ch = tolower(ch); // Now ch is 'a'
```

✅ Always **assign back** if you want to **keep the change**.

---

## 5. 🎯 getchar() and putchar() — Basic I/O

---

### 📥 getchar()

- Reads **one character** at a time from keyboard.
- Stores it as **int** to handle `EOF`.
- **If user just presses Enter** → reads a newline (`'\n'`) — no error!
- **EOF happens only if**:
  - User presses `Ctrl+D` (Linux/macOS) or `Ctrl+Z` (Windows).
  - Input error occurs (rare).

#### Example

```c
int ch = getchar();
if (ch == '\n')
    printf("You pressed Enter!\n");
else if (ch == EOF)
    printf("EOF detected!\n");
else
    printf("You entered: %c\n", ch);
```

---

### 📤 putchar()

- Prints **one character** to screen.

```c
putchar('A'); // Prints A
```

- Simple and fast way to print small outputs.

---

## 6. 🚨 EOF Handling Tip

If you really want to **check for bad input**:

- Always store `getchar()` result into an `int`.
- Check if it's `EOF` before processing.
- Clear buffer properly if needed (we'll discuss more in `CP008_NOTES.md`).

---

## 7. 🛡️ `ctype.h` Functions Work on `int` Too

- Functions like `tolower()`, `toupper()`, `isspace()`, `isalpha()`, etc., **expect an `int`**, **not** `char`.
- ✅ **Recommended** to pass an `int` because:
  - `getchar()` returns `int` (to handle `EOF` properly).
  - Safer with user inputs and prevents unexpected behavior.
- They internally check if the value is a valid character or `EOF`.
- **Example** with `tolower()`:

```c
int ch = tolower(getchar()); // int and lowercase
if (ch == 'y') 
    printf("You said yes!\n");
else if (ch == 'n')
    printf("You said no!\n");
```
