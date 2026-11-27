# Calculator Function Overloading (C++)

## Overview

This project demonstrates **function overloading** in C++ by creating a simple calculator.

Function overloading allows multiple functions to have the **same name** but different parameter lists. The compiler determines which version of the function to call based on the arguments provided.

## Concepts Practiced

- Function overloading
- Parameters and arguments
- Return values
- Compiler function resolution
- Basic arithmetic operations

## Example

Instead of creating separate function names:

```cpp
addInt(2, 3);
addDouble(2.5, 3.5);
```

We can overload the same function name:

```cpp
add(2, 3);
add(2.5, 3.5);
```

The compiler automatically chooses the correct version of the function.

## Sample Implementation

```cpp
int add(int a, int b);
double add(double a, double b);
```

## What I Learned

- Functions can share the same name if their parameter lists are different.
- The return type alone cannot be used to overload functions.
- Overloading makes code easier to read and maintain.
- The compiler selects the correct function based on the number and type of arguments.

## Expected Output

```text
Addition (int): 8
Addition (double): 8.7
```

## Future Improvements

- Add subtraction, multiplication, and division overloads.
- Support more data types.
- Create a menu-driven calculator.
- Convert the project into a Calculator class using object-oriented programming.

## Author

Aamer Riaz

Part of my C++ learning journey using the "Beginning C++ Programming - From Beginner to Beyond" course.
