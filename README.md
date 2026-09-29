# Calculator_Project

## Phase 1: Console Calculator

A simple console-based calculator developed using C++ and CMake.

## Phase 0: Setup

The project setup includes:

- C++ compiler (MinGW)
- CMake
- VS Code
- C++17 standard
- Git and GitHub

A basic Hello World program was created and successfully built using CMake.

## Features

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- User input handling
- Division-by-zero handling
- Invalid operator handling
- Simple console interface

## Concepts Used

- C++ Programming
- Variables and Data Types
- Input and Output
- Conditional Statements
- Arithmetic Operators
- C++17
- CMake

## Technologies Used

- C++
- CMake
- MinGW
- VS Code
- Git & GitHub

## Project Structure

```text
Calculator_Project/
│
├── CMakeLists.txt
├── main.cpp
├── README.md
└── .gitignore
```

## Build and Run

Configure the project:

```bash
cmake -S . -B build
```

Build the project:

```bash
cmake --build build
```

Run the calculator:

```bash
.\build\Calculator_Project.exe
```

## Phase Overview

| Phase | Description | Status |
|------|-------------|--------|
| 0 | C++ and CMake setup | ✅ Completed |
| 1 | Console Calculator | ✅ Completed |
| 2 | First Qt GUI Window | ⏳ Upcoming |
| 3 | Math Brain using Classes | ⏳ Upcoming |
| 4 | Connect Brain to GUI | ⏳ Upcoming |
| 5 | History List | ⏳ Upcoming |
| 6 | UI Polish | ⏳ Upcoming |
| 7 | Advanced Features | ⏳ Upcoming |
| 8 | Menu & Extras | ⏳ Upcoming |
| 9 | Packaging | ⏳ Upcoming |

## Git Workflow

The project uses a protected `main` branch.

Development is done on the `dev` branch:

```text
dev
 ↓
Make changes
 ↓
Commit
 ↓
Push to dev
 ↓
Pull Request
 ↓
Review
 ↓
Merge into main
```