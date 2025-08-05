# 📜 CHANGELOG

All notable changes to this project will be documented in this file.

This project adheres to [Semantic Versioning](https://semver.org/).

---

## \[v1.1.1] – 🩹 Patch: Comment, Output & Notes Refinement (2025-08-05)

📌 **Patch version bump** focused on enhancing clarity, fixing bugs, and refining learning experience.

---

### ✨ Changed

* 📝 Updated code comments for **clearer explanations**
* 📤 Enhanced output formatting in several programs (e.g., grouped print statements, added line breaks)
* 🧠 Refined wording and sequence in select notes for better readability
* ✅ Improved ternary usage for clarity and logic flow

---

### 🧹 Improved

* 🚿 Cleaned up unused headers and redundant lines
* 🧽 Formatted `printf()` statements for better alignment and presentation
* 🧼 Used `%zu` instead of `%d` for `size_t` to match correct data type

---

### 🐞 Fixed

* 🐛 Resolved potential infinite loop in input scenario
* 🐞 Fixed incorrect format specifiers and buffer edge cases
* 🔒 Enhanced safety for `fgets()` with proper newline handling and `strcspn()`

---

### 📚 Notes Tweaked

* ✍️ Added **`double` initialization with `scanf()`** under **C002. Data Type** section
* 🌱 Marked relation of `double` with `long`/`long double` family for conceptual clarity

---

🔖 Tagged and sealed with care by **Dipsana**

---

## \[v1.1.0] – Naming & Notes Revamp (2025-07-25)

📌 **Minor version bump** with enhanced structure, readability, and learning support.

---

### ✨ Changed

* 🔄 Renamed all `.c` and `.md` files to follow `cXXX_YY_topic.c` and `CXXX_YY_topic.md` formats
* ✅ Updated program **comment headings** and note **titles** to reflect filenames
* ✨ Improved notes with clearer wording and added concepts
* ✨ Simplified projects code and logic for clarity

📁 **File Format Key**:

* `XXX` → Chapter/topic number
* `YY` → Index within topic
* `topic` → Brief content description

---

### 🧹 Improved

* Unified code style (spacing, header includes)
* Consistent comment pattern: `// C1.1. Description`
* Markdown cleaned up (spacing, heading consistency)

---

### 🧠 Added

* New notes and code on `sizeof(*arr)`, `safe realloc`, etc.
* More outputs, hints, and `puts()` usage for clarity

---

### 🐞 Fixed

* Return bug in `cp008_q04.c`
* Memory bugs in realloc examples using safer `sizeof(*arr)`

---

## \[v1.0.0] – 📅 Initial Release

🎉 First public release of the repository!

---

### ✨ Highlights

* Complete course coverage from **Chapter 1 to 11**  
* Added **notes, test sets**, and **practice programs** per chapter
* Included **mini projects** for hands-on coding
* 📘 Uploaded **full PDF notes and handbook**
* ✍️ Designed structure for **smooth beginner journey**
* Added **beyond-syllabus extensions**: input safety, EOF handling, cleaner code
* Created beginner-friendly folder naming (C001, C002...)

---

### 📚 Learning Focus

* Strong foundation for C learners
* Enhances [CodeWithHarry’s C course](https://youtu.be/ZSPZob_1TOk)
* Encourages clean, safe, modern C programming practices

---

📌 Future Updates
> CP005_NOTES.md - Enhance and simplify factorial explanation and added a cp005_q07.c and cp005_q08.c explanations.
> Quizzes with interview tricky questions
> Will update my other learning repositories extending this topic
> Keeps learning sharp, code clean, and notes evolving ✨

---

❤️ Maintained with love by **Dipsana**
