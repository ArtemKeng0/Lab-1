# Lab-1: Multi-Phase Merge Sort Implementation

**Author:** Shalkina Artem, IPS-21

---

## Project Overview

This repository contains a C++ implementation of the **Multi-Phase Merge Sort** algorithm. This algorithm is an iterative, specialized sorting method often used to model external sorting processes for large datasets.

The project demonstrates proficiency in several key software development practices:
- Git and GitHub workflow management
- Branching strategies and disciplined commit history formation
- Development of robust unit tests to ensure algorithm correctness
- Pull Request creation as part of a standard development workflow

---

## Purpose of the Laboratory Work

The goal of this assignment was to gain practical experience in:
- Working effectively with the Git version control system
- Using GitHub for collaborative project documentation and version control
- Implementing and validating code correctness through unit testing
- Forming a complete development workflow using feature branches and Pull Requests

---


## Algorithm: Multi-Phase Merge Sort

Multi-Phase Merge Sort is a variation of external merge sort, implemented here in its iterative (bottom-up) form. It is designed to minimize I/O operations by changing the roles of input and output files across multiple merge passes.

### Implementation Principle

The C++ implementation utilizes the iterative approach:
- It starts by considering all elements as sorted runs of size 1
- It iteratively merges adjacent runs of size S into sorted runs of size 2S
- The process repeats until a single sorted run encompasses the entire array

### Relevance to External Sorting

While implemented using internal memory structures, the multi-phase methodology mirrors the efficiency principle used in external sorting, where uneven distribution (e.g., Fibonacci distribution) is used to optimize disk access.

---

## Demonstrated Git Workflow

The project's development cycle followed a standard feature-branch workflow:

1. **Initial Project Setup** - Repository initialized, README.md, and base main.cpp committed to the main branch.

2. **Feature Branch Creation** - A dedicated branch, `unit-tests`, was created to isolate test development.

3. **Commit History** - Logical and atomic commits were used to document progress


---

## Test Results and Conclusion

### Test Execution Status

The full test suite contained within `unit_tests.cpp` was executed and successfully validated the sorting algorithm's correctness across all defined scenarios.

- **Total Tests Executed:** 22+
- **Fixes Applied:** A non-standard C++ array declaration for the N=0 test case (`int arr[0];`) was replaced with a `nullptr` approach, ensuring robust handling of the empty array case.

### Conclusion

This project successfully demonstrates the implementation of the Multi-Phase Merge Sort algorithm and confirms the student's practical skills in adhering to a disciplined development workflow, including effective use of Git, GitHub, and Unit Testing.
