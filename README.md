# Lab-1
Lab 1 software development tools  Shalkina Artem IPS-21  

---

## Project Overview

This repository contains a C++ implementation of **Multi-Phase Merge Sort**, a specialized merge-sort-based algorithm for external sorting.

The project demonstrates:
- Git and GitHub workflow
- Branching strategies
- Writing unit tests
- Commit history formation
- Pull Request creation
- Proper project structure and documentation

---

## Purpose of the Laboratory Work

The goal of this assignment is to gain practical experience in:
- Working with the Git version control system
- Using GitHub as a collaboration platform
- Creating and managing branches
- Writing unit tests to validate program correctness
- Debugging and improving code based on test results
- Forming a complete development workflow using GitHub Pull Requests

---

## Repository Structure
```
.
├── main.cpp                    # Implementation of Multi-Phase Merge Sort
├── README.md                   # Documentation (this file)                      
├── test_sort.cpp               # Basic sorting tests
└── test_edge_cases.cpp         # Edge-case unit tests
```

---

## Algorithm Description: Multi-Phase Merge Sort

Multi-Phase Merge Sort is a variation of external merge sort that uses uneven distribution of initial runs across auxiliary files.

The process consists of several phases:

1. **Distribution Phase** - Input data is split into sorted runs of different lengths (often Fibonacci-based distribution).

2. **Merge Phases** - Two or more files are merged repeatedly into a target file. After each merge, roles of files change (input ↔ output).

3. **Final Output** - After several phases, one file contains the fully sorted dataset.

This method reduces unnecessary read/write operations and is effective when working with large datasets stored outside of RAM.

---

## Compiling and Running the Program

### Requirements
- C++ compiler (g++, clang++, MSVC, MinGW, etc.)
- Any operating system (Windows, Linux, macOS)

### Compile
```bash
g++ main.cpp -o lab1
```

### Run
```bash
./lab1
```

### Input Format
The program prompts the user to enter:
- Number of elements
- The elements themselves

Example:
```
5
7 2 9 1 3
```

---

## Unit Tests

**test_sort.cpp** - Tests basic functionality of the sorting algorithm:
- Simple random arrays
- Correctness of sorted output
- Comparison with expected results

**test_edge_cases.cpp** - Tests edge-case scenarios:
- Empty input
- Single element array
- Already-sorted data
- Reverse-sorted data

### Running Tests

Each test file is a standalone program and can be compiled individually:
```bash
g++ test_sort.cpp -o test_sort
./test_sort

g++ test_edge_cases.cpp -o test_edge_cases
./test_edge_cases
```

---

## Git Workflow Demonstrated in This Project

### 1. Initial Project Setup
- Repository created on GitHub
- Added README.md
- Added initial main.cpp
- First commit: Initial project version

### 2. Feature Branch Creation
Created a dedicated branch for test development:
```bash
unit-tests
```

### 3. Commit History
Logical commit messages were used:
- Add basic unit test structure
- Add edge case tests
- Refactor: code cleanup

### 4. Pull Request Workflow
A Pull Request was created from `unit-tests → main` with a descriptive summary:
- What was added
- What tests were implemented
- What issues were found or fixed

---

## Debugging and Fixing Errors

No error was detected

---

## Results of the Laboratory Work

The following items confirm successful completion of the assignment:
- GitHub repository created and initialized
- Initial code uploaded
- Feature branch created (unit-tests)
- Unit tests added
- Meaningful commit history created
- Pull Request opened
- Project documented with full README.md
- Test results analyzed
- Detected bugs were fixed (if any)

---

## Conclusion

This project demonstrates a full development cycle using Git and GitHub:
- Source code preparation
- Branching and version control
- Writing and executing unit tests
- Documenting project structure
- Performing code review through Pull Requests

The student gained practical skills in modern software development workflow, including collaboration, testing, and repository management.
