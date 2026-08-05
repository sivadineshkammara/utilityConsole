# UtilityConsole

> A modular command-line application written in ANSI C to demonstrate clean software architecture, reusable modules, and professional C programming practices.

---

## Overview

UtilityConsole is a portfolio project developed to document my progression from learning the C programming language to building maintainable, modular software suitable for embedded systems development.

Rather than focusing solely on implementing features, this project emphasizes software engineering principles such as modular design, reusable APIs, encapsulation, and clean project organization.

Version 1.0 establishes the architectural foundation upon which future versions will be refactored and expanded.

---

# Project Goals

The primary objectives of this project are:

- Learn modular programming in C
- Design reusable software components
- Practice professional header/source separation
- Improve software architecture through iterative refactoring
- Build an embedded-oriented coding style
- Develop a portfolio demonstrating continuous engineering growth

---

# Version History

## ✅ Version 1.0 — Modular Programming (Current Release)

### Implemented Modules

- Calculator
- Geometry Calculator
- Temperature Converter
- Input Validation Library

### Concepts Demonstrated

- Modular Programming
- Header Files (.h)
- Source Files (.c)
- Include Guards
- Public vs Private APIs
- Static Functions
- Function Decomposition
- Input Validation
- Encapsulation
- Translation Units
- Basic Software Architecture
- Git Version Control

---

## 🚧 Version 2.0 (Planned)

Version 2 focuses on **refactoring** rather than adding features.

Planned improvements:

- Enumerations (enum)
- Structures (struct)
- typedef
- Separation of UI and Business Logic
- Improved API Design
- Constants Module
- Makefile
- Cleaner Input Module
- Code Reusability Improvements

---

## 🚧 Version 3.0 (Planned)

Version 3 will evolve the project toward an embedded firmware architecture.

Planned improvements:

- Function Pointer Dispatch Tables
- Status/Error Handling APIs
- Configuration Module
- Logging Module
- Generic Menu Engine
- Embedded-style Project Structure

---

# Project Structure

```
UtilityConsole/
│
├── include/
│   ├── calculator.h
│   ├── geometry.h
│   ├── input.h
│   └── temperature.h
│
├── src/
│   ├── calculator.c
│   ├── geometry.c
│   ├── input.c
│   ├── main.c
│   └── temperature.c
│
├── docs/
│
├── README.md
│
└── LICENSE
```

---

# Build

Compile using GCC:

```bash
gcc -Wall -Wextra -Wpedantic \
-Iinclude \
src/*.c \
-o utility_console
```

---

# Run

```bash
./utility_console
```

---

# Current Features

## Calculator

- Addition
- Subtraction
- Multiplication
- Division
- Modulus

---

## Geometry Calculator

### Area

- Square
- Rectangle
- Triangle
- Circle

### Perimeter

- Square
- Rectangle
- Triangle
- Circle

---

## Temperature Converter

- Celsius ↔ Fahrenheit
- Celsius ↔ Kelvin
- Fahrenheit ↔ Kelvin

---

## Software Engineering Practices Used

- Modular Programming
- Separation of Responsibilities
- Encapsulation using `static`
- Reusable Input Module
- Public and Private APIs
- Clean Project Organization
- Meaningful Function Naming
- Incremental Refactoring
- Git Version Control

---

# Future Roadmap

This repository intentionally evolves through multiple versions.

Each version focuses on improving the engineering quality of the codebase rather than simply increasing functionality.

```
v1.0
│
├── Modular Programming
│
v2.0
│
├── Refactoring
├── Enums
├── Structures
├── Makefile
│
v3.0
│
├── Embedded Design
├── Function Pointers
├── Generic Menu System
├── Configuration Module
│
v4.0
│
├── Dynamic Memory
├── File Handling
├── Logging
└── Testing
```

---

# Learning Objectives

This repository is part of my journey toward becoming an Embedded Firmware Engineer.

The project is intentionally versioned to demonstrate not only programming knowledge but also my ability to improve software architecture through iterative refactoring and engineering best practices.

---

# Author

**Siva Dinesh Kammara**

M.Sc. Electromobility  
FAU Erlangen–Nürnberg

Aspiring Embedded Firmware Engineer

---

## License

This project is released under the MIT License.