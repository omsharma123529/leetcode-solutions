# LeetCode Solutions

**Name:** Om Sharma  
**Roll Number / SRN:** R25EJ093  
**Course:** Portfolio Building (B25CS0311 / B25GE0101)  
**Semester:** 3rd Semester, B.Tech CSIT  
**GitHub Repository:** [omsharma123529/leetcode-solutions](https://github.com/omsharma123529/leetcode-solutions)

---

## About

Personal LeetCode practice log — part of B25GE0101 portfolio.

This repository contains my solutions to LeetCode problems practiced as part of Activity 6. The problems cover arrays, strings, basic algorithms, stacks, and linked lists. Each solution is implemented in C, tested locally in VS Code with custom unit test harnesses, and verified on LeetCode's online judge.

---

## Table of Contents

- [Repository Architecture](#repository-architecture)
- [Arrays & Strings](#arrays--strings)
- [Basic Algorithms](#basic-algorithms)
- [Stacks](#stacks)
- [Linked Lists](#linked-lists)
- [Progress Tracker](#progress-tracker)
- [Testing & Verification Methodology](#testing--verification-methodology)

---

## Repository Architecture

```text
leetcode-solutions/
├── README.md                           # Main portfolio index and documentation
├── PROGRESS.md                         # Running chronological progress tracker
├── .gitignore                          # Build artifacts exclusion
├── arrays-strings/                     # Curated array & string problems
│   ├── 01-two-sum.c
│   ├── 01-two-sum.md
│   ├── 01-result.png
│   ├── 02-reverse-a-string.c
│   ├── 02-reverse-a-string.md
│   ├── 02-result.png
│   ├── 03-valid-anagram.c
│   ├── 03-valid-anagram.md
│   ├── 03-result.png
│   ├── 04-best-time-to-buy-and-sell-stock.c
│   ├── 04-best-time-to-buy-and-sell-stock.md
│   ├── 04-result.png
│   ├── 05-longest-common-prefix.c
│   ├── 05-longest-common-prefix.md
│   └── 05-result.png
├── basic-algorithms/                   # Searching, sorting, and partition techniques
│   ├── 06-binary-search.c
│   ├── 06-binary-search.md
│   ├── 06-result.png
│   ├── 07-move-zeroes.c
│   ├── 07-move-zeroes.md
│   └── 07-result.png
├── stacks/                             # LIFO stack based parsing and validation
│   ├── 08-valid-parentheses.c
│   ├── 08-valid-parentheses.md
│   └── 08-result.png
└── linked-lists/                       # Pointer manipulation and traversal
    ├── 09-reverse-linked-list.c
    ├── 09-reverse-linked-list.md
    └── 09-result.png
```

---

## Arrays & Strings

Problems related to arrays and strings focusing on hash lookups, two pointers, frequency counting, and prefix comparisons:

- **[01. Two Sum](arrays-strings/01-two-sum.md)** (`01-two-sum.c`) - Easy
- **[02. Reverse a String](arrays-strings/02-reverse-a-string.md)** (`02-reverse-a-string.c`) - Easy
- **[03. Valid Anagram](arrays-strings/03-valid-anagram.md)** (`03-valid-anagram.c`) - Easy
- **[04. Best Time to Buy and Sell Stock](arrays-strings/04-best-time-to-buy-and-sell-stock.md)** (`04-best-time-to-buy-and-sell-stock.c`) - Easy–Medium
- **[05. Longest Common Prefix](arrays-strings/05-longest-common-prefix.md)** (`05-longest-common-prefix.c`) - Easy–Medium

---

## Basic Algorithms

Problems based on searching, partitioning, and sorting invariants:

- **[06. Binary Search](basic-algorithms/06-binary-search.md)** (`06-binary-search.c`) - Easy–Medium
- **[07. Move Zeroes](basic-algorithms/07-move-zeroes.md)** (`07-move-zeroes.c`) - Easy–Medium

---

## Stacks

Problems involving stack-based linear validation:

- **[08. Valid Parentheses](stacks/08-valid-parentheses.md)** (`08-valid-parentheses.c`) - Easy–Medium

---

## Linked Lists

Linked list problems practiced as part of the activity (including bonus problem):

- **[09. Reverse a Linked List](linked-lists/09-reverse-linked-list.md)** (`09-reverse-linked-list.c`) - Easy–Medium *(Bonus)*

---

## Progress Tracker

My overall practice progress and growth log across the semester is maintained in [PROGRESS.md](PROGRESS.md).

---

## Testing & Verification Methodology

1. **Local Test Harness First:** Before pasting any solution into LeetCode's judge, at least 2 local test cases (one typical, one edge case) are executed in VS Code using MinGW GCC.
2. **Online Judge Submission:** Once verified locally, solutions are submitted on LeetCode.
3. **Artifact Archiving:** Accepted screenshots (`NN-result.png`) and architectural documentation (`NN-problem-name.md`) are archived alongside the source code.
