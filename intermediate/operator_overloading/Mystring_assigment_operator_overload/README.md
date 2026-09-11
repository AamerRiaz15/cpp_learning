Mystring Class – Custom C++ String Wrapper
This project implements a simple custom string class called Mystring, designed to help you understand:

dynamic memory allocation

constructors

destructors

deep copying

overloaded assignment operators

pointer behaviour in C++

It behaves similarly to a basic version of std::string, but is intentionally minimal so you can see how everything works under the hood.

Features
✔ Constructor
Allocates enough memory on the heap to store the incoming C‑string and copies it.

✔ Destructor
Releases the allocated memory to prevent leaks.

✔ Copy Assignment Operator
Implements deep copying:

checks for self‑assignment

deletes old memory

allocates new memory

copies the contents from rhs

✔ Debug Messages
Prints messages when the constructor, destructor, and assignment operator are called, so you can see object lifecycle behaviour.
