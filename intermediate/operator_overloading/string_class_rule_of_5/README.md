📘 Mystring — A Custom C++ String Class (Rule of Five)
This project implements a fully manual, raw‑pointer–based string class in C++, designed to teach and demonstrate:

Deep copying

Move semantics

Dynamic memory management

Operator overloading

The Rule of Five

The class behaves similarly to std::string but is intentionally implemented from scratch to reinforce core C++ fundamentals.

✨ Features
🔹 Constructors
Default constructor — creates an empty string

Single‑argument constructor — constructs from a C‑string

Copy constructor — deep copies another Mystring

Move constructor — transfers ownership of internal buffer

🔹 Assignment Operators
Copy assignment — deep copy with proper cleanup

Move assignment — steals buffer and nulls source

🔹 Operator Overloads
operator-() — returns a lowercase version of the string

operator+() — concatenates two Mystring objects

operator==() — compares two strings for equality

🔹 Utility Methods
display() — prints the string and its length

get_length() — returns the string length

get_data() — returns the underlying C‑string

🧠 What This Project Demonstrates
This class is a hands‑on exercise in:

Correctly managing heap‑allocated memory

Avoiding memory leaks and double deletes

Implementing move semantics safely

Understanding how operator overloading works

Building confidence with raw pointers

It’s a perfect stepping stone before moving on to RAII wrappers and smart pointers.
