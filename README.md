# Structural Programming Language (SPL) — C Programming

> A curated collection of C programs and projects written while studying **Structural Programming Language (SPL)**.

---

## About This Repository

This repository documents the author's hands-on journey through the fundamentals of
**Structural (Procedural) Programming** using the **C programming language**. Every
program and project here corresponds to a concept explored during the course — from
the very first `printf` to the more advanced topics that follow.

It is intended to serve as:

- A **personal study log** of daily practice and lab work.
- A **reference bank** of well-organized C examples, exercises, and mini-projects for revision.
- A **portfolio piece** reflecting consistent, disciplined learning.

---

## Author

| Field       | Detail                              |
|-------------|-------------------------------------|
| **Author**  | Sania Akter Jenny                   |
| **Course**  | Structural Programming Language (SPL)|
| **Language**| C (C11)                             |
| **Toolchain**| GCC / MinGW, VS Code               |

---

## Why I Am Learning Structural Programming Language

Learning C through the SPL course is a deliberate step toward building a strong
foundation in computer science. The reasons are:

- **Understanding the core** — C exposes how computers actually store and process data,
  with manual control over memory and types.
- **Mastering logic first** — Procedural programming teaches clear, sequential thinking:
  input, processing, decision-making, and output.
- **Portability and speed** — C is one of the most widely used and efficient languages,
  forming the backbone of operating systems, embedded devices, and other languages.
- **Preparing for advanced topics** — Solid grasp of the fundamentals makes later
  subjects such as Data Structures and Algorithms intuitive.
- **Academic requirement** — SPL is the foundational programming course in the
  curriculum, and mastering it is essential for the subjects that follow.

---

## What I Gain From This Repository

- **A complete, organized record** of every program and project I have written and understood.
- **Structured practice** — programs are grouped by topic so weaknesses can be
  identified and revised quickly.
- **Confidence and fluency** in writing, compiling, and debugging C code.
- **A reusable reference** for interviews, exams, and future projects.
- **Discipline and consistency**, reflected through version-controlled commits.

---

## Repository Structure

```
├── Assignment/
│   ├── <topic>/    # One folder per topic (bool, loop, pointer, array, string, ...)
│   ├── project/    # Small projects and larger assignments
│   └── .vscode/    # VS Code build configuration (GCC)
├── .vscode/        # VS Code build configuration (GCC)
└── README.md
```

> This structure is intentionally open-ended. New folders and topics — such as
> **arrays**, **strings**, and full **projects** — are added as the course
> progresses, keeping the repository a living record of learning.

---

## Getting Started

### Prerequisites

- A C compiler, e.g., **GCC (MinGW)** — the repository's VS Code tasks use
  `C:\MinGW\bin\gcc.exe`.
- An editor such as **Visual Studio Code**.

### Compiling and Running

Compile any source file with GCC:

```bash
gcc path/to/program.c -o path/to/program
```

Or run it:

```bash
.\path\to\program.exe
```

The included `.vscode/tasks.json` provides a ready-to-use **build active file**
task in VS Code (`Ctrl+Shift+B`).

---

## Usage

Browse the `Assignment/` directory and open any `.c` file to study its logic, then
compile and run it to observe the output. Each topic folder groups related programs,
so concepts build naturally on one another as the course advances.

---

## Acknowledgments

Gratitude to the instructors and resources that made this learning journey possible.
This repository grows with every lecture, lab, and line of code.