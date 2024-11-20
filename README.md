# ft_printf

**ft_printf** is a custom implementation of the standard `printf` function in C. It is designed to handle various format specifiers such as `%d`, `%s`, `%x`, and others, offering the same functionality as the standard library `printf` but with custom code.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)

## Introduction

The **ft_printf** function is a project aimed at implementing the core functionality of `printf`, one of the most commonly used functions in C. This project is part of the 42 school curriculum and provides an opportunity to deepen your understanding of variadic functions and handling format specifiers.

## Features

- Custom implementation of the `printf` function.
- Handles a variety of format specifiers (`%s`, `%d`, `%x`, etc.).
- Supports precision and width modifiers.
- Handles edge cases like null pointers and negative numbers.
- Optionally, includes the ability to print strings with different formats (e.g., uppercase, padding).

## Installation

To use **ft_printf**, clone the repository and compile the source files:

```bash
git clone https://github.com/abboudje/ft_printf.git
cd ft_printf
make
