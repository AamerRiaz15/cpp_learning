Mystring – Rule of Three Exercise
This exercise builds a simple Mystring class using raw dynamic memory.
The goal is to understand how C++ handles memory when a class owns a char*.

What the exercise covers
Creating an empty string using a no‑args constructor

Building a string from a const char*

Implementing a deep‑copy copy constructor

Releasing memory in the destructor

Using strlen and strcpy to manage C‑style strings

Displaying the string and its length

Why this exercise matters
It teaches the Rule of Three — the idea that if a class manages dynamic memory, it must define:

Constructor

Copy constructor

Destructor

This ensures safe copying and prevents memory leaks or double frees.

Files
Mystring.h — class declaration

Mystring.cpp — implementation

main.cpp — simple test
