# Utility Console

A modular command-line application written in ANSI C that demonstrates structured software design, reusable modules, and intermediate C programming concepts.

---

## Overview

Utility Console combines several utilities into one application while emphasizing clean architecture, modular programming, and reusable code.

Current modules include:

- Calculator
- Geometry Calculator
- Temperature Converter
- Input Validation Library

The project is being continuously refactored to demonstrate professional software engineering practices rather than simply adding features.

---

## Objectives

- Practice modular C programming
- Learn proper header/source separation
- Build reusable APIs
- Improve input validation
- Demonstrate intermediate C concepts
- Follow professional Git workflow

---

## Features

### Calculator

- Addition
- Subtraction
- Multiplication
- Division
- Modulus

### Geometry

- Square
- Rectangle
- Triangle
- Circle

### Temperature

- Celsius ↔ Fahrenheit
- (More conversions planned)

---

## Concepts Demonstrated

- Modular programming
- Header files
- Source files
- Static functions
- Function decomposition
- Input validation
- Enums
- Structures
- Typedef
- Const correctness
- Error handling
- File organization
- Function pointers (planned)
- Dynamic memory (planned)

---

## Folder Structure

```text
include/
src/
docs/
tests/
```

---

## Build

```bash
gcc -Wall -Wextra -Wpedantic \
-Iinclude \
src/*.c \
-o utility_console
```

---

## Run

```bash
./utility_console
```

---

## Future Improvements

- Better input parser
- Statistics module
- Unit converter
- File logging
- Makefile
- CMake support
- Automated tests

---

## Learning Goals

This repository documents my progression from beginner to intermediate C programming and serves as a practical portfolio project while preparing for embedded firmware development.

Each refactoring step is intentionally committed to preserve the project's evolution and demonstrate continuous improvement.

---

## Author

**Siva Dinesh Kammara**

M.Sc. Electromobility (FAU Erlangen–Nürnberg)

Aspiring Embedded Firmware Engineer