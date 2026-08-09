# UtilityConsole

> A modular command-line utility application written in C, developed to build practical skills in modular programming, software architecture, API design, refactoring, and build automation.

UtilityConsole is a portfolio and learning project documenting the progression from fundamental C programming toward structured, maintainable software practices relevant to embedded software development.

The project is intentionally developed through multiple versions. Each version focuses on improving the engineering quality of the existing codebase rather than simply adding functionality.

---

## Overview

UtilityConsole provides a collection of command-line utilities:

- Calculator
- Geometry Calculator
- Temperature Converter
- Reusable Input Handling
- Centralized Menu Presentation

The primary purpose of the project is not the complexity of these utilities themselves. Instead, the project provides a practical environment for developing engineering skills in:

- Modular C programming
- Interface and implementation separation
- Public and private API design
- Encapsulation
- Enumerations and type aliases
- Separation of UI and application logic
- Incremental refactoring
- Multi-file C compilation and linking
- GNU Make build automation
- Git-based development and version control

---

## Project Objectives

The main objectives of UtilityConsole are to:

- Develop strong foundations in C programming
- Understand modular software architecture
- Practice header/source separation
- Design clear public APIs
- Encapsulate implementation details using `static` functions
- Use `typedef` and `enum` appropriately
- Replace magic values with meaningful identifiers
- Separate user-interface responsibilities from application logic
- Improve an existing codebase through incremental refactoring
- Understand translation units, compilation, and linking
- Automate builds using GNU Make
- Apply coding practices relevant to embedded firmware development
- Maintain a professional, version-controlled project history

---

# Version History

## Version 1.0 — Modular Programming

**Status: Released**

Version 1.0 established the initial modular architecture of UtilityConsole.

### Implemented Modules

- Calculator
- Geometry Calculator
- Temperature Converter
- Input Module

### Concepts Demonstrated

- Modular programming
- Header files
- Source files
- Include guards
- Function decomposition
- Public and private functions
- `static` functions
- Input validation
- Encapsulation
- Translation units
- Basic software architecture
- Git version control

Version 1.0 established the foundation for the subsequent architectural refactoring.

---

## Version 2.0 — Modular Architecture Refactoring

**Status: Released**

Version 2.0 focuses on improving the architecture and maintainability of the V1 codebase without significantly expanding application functionality.

The objective was to transform the initial modular implementation into a cleaner, more structured C application.

### Major Improvements

#### Enumerations

Application-level options were represented using meaningful enumerations:

- `MainMenuOption`
- `Operation`
- `Shape`
- `GeometryOption`
- `TemperatureConversion`

For example:

```c
typedef enum
{
    OP_ADD = 1,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_MODULUS,
    OP_EXIT
} Operation;
```

Using named enumerators improves readability and removes unexplained numeric menu values.

---

#### Shared Type Definitions

Common application types are centralized in:

```text
include/types.h
```

This provides a consistent interface between modules and avoids duplicate type definitions.

---

#### UI Separation

Menu presentation was separated from application modules.

Menu display functions are implemented in:

```text
src/menu.c
```

and exposed through:

```text
include/menu.h
```

This separates presentation responsibilities from application-specific calculations and processing.

---

#### API Encapsulation

The project distinguishes between public interfaces and private implementation details.

Functions required by other modules are exposed through header files, while implementation-specific helpers remain private using:

```c
static
```

For example:

```c
static void performOperation(Operation op);
```

The calculator operation dispatcher remains private because other modules do not require direct access to its implementation.

This reduces unnecessary coupling between modules.

---

#### Application Dispatch Refactoring

Redundant dispatch logic in the Calculator module was removed.

The resulting flow is conceptually:

```text
User Input
    ↓
Operation enum
    ↓
Exit check
    ↓
performOperation()
    ↓
Operation dispatch
    ↓
Calculation
```

This keeps operation-selection responsibility inside the Calculator module and avoids unnecessary repeated decision logic.

---

#### Input API

The Input module provides reusable interfaces for different application modules:

```c
void readChoice(int *option);
void readFloat(const char *text, float *value);
void readInt(const char *text, int *value);
```

The Input module remains independent of Calculator, Geometry, and Temperature-specific enumerations.

This keeps input handling generic and allows individual modules to interpret their own domain-specific choices.

---

#### Build Automation

Version 2 introduced a Makefile to automate compilation and linking.

Supported commands include:

```bash
make
```

and:

```bash
make clean
```

The build system provides:

- Individual object-file compilation
- Incremental compilation
- Automatic header dependency generation
- Automated linking
- Strict compiler diagnostics

The project is built with:

```text
-Wall
-Wextra
-Wpedantic
-Werror
```

Warnings are therefore treated as build errors.

---

# Architecture

UtilityConsole follows a modular architecture in which each module has a defined responsibility.

```text
                    UtilityConsole
                         │
             ┌───────────┴───────────┐
             │                       │
          UI Layer              Application
             │                       │
          menu.c          ┌──────────┼──────────┐
                          │          │          │
                     calculator  geometry  temperature
                          │          │          │
                          └──────────┼──────────┘
                                     │
                                  input.c
```

## Module Responsibilities

| Module | Responsibility |
|---|---|
| `main.c` | Application entry point and top-level application flow |
| `menu.c` | Menu presentation |
| `input.c` | User input and input validation |
| `calculator.c` | Calculator operations and calculator flow |
| `geometry.c` | Geometry calculations |
| `temperature.c` | Temperature conversions |
| `types.h` | Shared enumerated types |

---

# Project Structure

```text
UtilityConsole/
│
├── include/
│   ├── calculator.h
│   ├── geometry.h
│   ├── input.h
│   ├── menu.h
│   ├── temperature.h
│   └── types.h
│
├── src/
│   ├── calculator.c
│   ├── geometry.c
│   ├── input.c
│   ├── main.c
│   ├── menu.c
│   └── temperature.c
│
├── Makefile
├── .gitignore
├── README.md
└── LICENSE
```

Generated build artifacts such as object files, dependency files, and the executable are excluded from version control.

---

# Features

## Calculator

Supports:

- Addition
- Subtraction
- Multiplication
- Division
- Modulus

Operations are represented using the `Operation` enumeration.

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

Geometry selections are represented using enumerated types.

---

## Temperature Converter

Supports conversions between:

- Celsius and Fahrenheit
- Celsius and Kelvin
- Fahrenheit and Kelvin

All six conversion directions are supported.

---

# Build Requirements

The project requires:

- GCC
- GNU Make
- Linux/Unix-style command-line environment

The project is developed and tested using a GCC-based toolchain.

---

# Building

The recommended build method is:

```bash
make
```

The Makefile:

1. Compiles individual `.c` files into `.o` object files.
2. Generates dependency files for included headers.
3. Links the object files into the final executable.

The resulting executable is:

```text
utility_console
```

---

# Running

After building:

```bash
./utility_console
```

---

# Cleaning

To remove generated object files, dependency files, and the executable:

```bash
make clean
```

---

# Compiler Diagnostics

The project is intentionally built with strict compiler diagnostics:

```text
-Wall
-Wextra
-Wpedantic
-Werror
```

This establishes a strict baseline in which compiler warnings are treated as errors.

A version is considered build-ready only after the project compiles without warnings.

---

# Testing

Before a version release, the application is tested across its major functional paths.

### Main Menu

- Calculator
- Temperature Converter
- Geometry Calculator
- Exit
- Invalid options

### Calculator

- Addition
- Subtraction
- Multiplication
- Division
- Modulus
- Division/modulus by zero handling
- Exit

### Temperature

- Celsius → Fahrenheit
- Celsius → Kelvin
- Fahrenheit → Celsius
- Fahrenheit → Kelvin
- Kelvin → Celsius
- Kelvin → Fahrenheit
- Exit

### Geometry

- Square
- Rectangle
- Triangle
- Circle
- Area
- Perimeter
- Exit

Version 2 was successfully rebuilt from a clean state using the strict compiler configuration and functionally tested after refactoring.

---

# Engineering Practices

The project currently demonstrates:

- Modular C programming
- Header/source separation
- Include guards
- Encapsulation
- `static` internal functions
- Public API design
- Enumerations
- `typedef`
- Separation of UI and application responsibilities
- Reusable input handling
- Meaningful naming
- Removal of magic values
- Incremental refactoring
- Strict compiler diagnostics
- Make-based builds
- Incremental compilation
- Automatic header dependency tracking
- Git version control
- Versioned releases

---

# V2 Learning Outcomes

Version 2 was primarily an exercise in improving an existing C program through structured refactoring.

## `typedef`

`typedef` creates an alias for an existing C type. It does not create a fundamentally new C type.

It can improve readability and simplify declarations.

---

## `enum`

Enumerations provide meaningful names for related integer constants.

For example:

```c
typedef enum
{
    OP_ADD = 1,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_MODULUS,
    OP_EXIT
} Operation;
```

This makes application logic easier to understand than using unexplained numeric values.

---

## Public and Private APIs

A module should expose only the functionality required by other modules.

Public functions are declared in header files:

```c
void runCalculator(void);
```

Implementation-specific helpers can remain private:

```c
static void performOperation(Operation op);
```

This reduces coupling and protects implementation details.

---

## Separation of Responsibilities

Each module should have a clearly defined responsibility:

```text
menu.c
    ↓
Presentation

input.c
    ↓
Input handling

calculator.c
    ↓
Calculator logic

geometry.c
    ↓
Geometry logic

temperature.c
    ↓
Temperature logic
```

This makes individual modules easier to understand, test, and modify.

---

## Refactoring Without Over-Engineering

V2 reinforced an important design principle:

> Refactoring should improve architecture and maintainability, not simply reduce the number of lines or `switch` statements.

The project therefore favors clear module responsibilities and appropriate abstractions over unnecessary complexity.

---

## Build System

The Makefile demonstrates the basic C build pipeline:

```text
.c source files
      ↓
.o object files
      ↓
    linker
      ↓
utility_console
```

Automatic dependency generation allows header changes to trigger recompilation of affected source files.

---

# Development Workflow

UtilityConsole follows an incremental implementation and refactoring workflow:

```text
Implement
    ↓
Compile
    ↓
Test
    ↓
Review
    ↓
Refactor
    ↓
Test again
    ↓
Commit
    ↓
Push
```

Git commits are used to document meaningful changes to the codebase.

Major project milestones are represented using version tags such as:

```text
v1.0
v2.0
```

The `main` branch represents the current stable project state.

---

# Version 3 Roadmap

Version 3 will focus on more advanced C and embedded-oriented design patterns.

Potential areas include:

- Function pointer dispatch
- Dispatch tables
- Status and error handling APIs
- Configuration management
- Advanced API design
- Embedded-style module interfaces
- Additional testing infrastructure

These concepts are intentionally deferred until the modular architecture established in V1 and V2 is well understood.

---

# Future Development

The long-term development direction is:

```text
V1.0
│
├── Modular C foundation
│
▼
V2.0
│
├── Refactoring
├── Enums
├── typedef
├── API encapsulation
├── UI separation
├── Menu module
├── Makefile
├── Incremental compilation
└── Dependency tracking
│
▼
V3.0
│
├── Function pointers
├── Dispatch tables
├── Error/status handling
├── Configuration
└── Embedded-oriented architecture
│
▼
Future
│
├── Testing infrastructure
├── Logging
├── File handling
└── Additional embedded software patterns
```

The roadmap is intentionally flexible. Future features will be introduced when they provide meaningful engineering value rather than simply increasing project complexity.

---

# Project Philosophy

UtilityConsole is intentionally developed as a progressive engineering project.

The objective is to demonstrate the complete development cycle:

```text
Understand
    ↓
Implement
    ↓
Compile
    ↓
Test
    ↓
Review
    ↓
Identify weaknesses
    ↓
Refactor
    ↓
Document
    ↓
Release
```

Each version represents an improvement in engineering maturity rather than simply an increase in functionality.

---

# Learning Journey

UtilityConsole is part of my broader journey toward becoming an Embedded Firmware Engineer.

The project provides a practical environment for applying C programming concepts and gradually introducing software engineering practices used in larger systems.

The long-term objective is to progress from writing functional C programs toward designing reliable, maintainable, modular software suitable for embedded systems.

---

# Author

**Siva Dinesh Kammara**

M.Sc. Electromobility  
FAU Erlangen–Nürnberg

Aspiring Embedded Firmware Engineer

---

# License

This project is released under the MIT License.
