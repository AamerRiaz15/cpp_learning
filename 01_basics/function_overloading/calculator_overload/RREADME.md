# Calculator Function Overloading in C++

## Overview

This project demonstrates **function overloading** by using the same function name, `calculate()`, to perform different calculations based on the number and type of arguments passed to it.

The program shows how C++ can determine which function to call at compile time by examining the function's parameter list.

## Concepts Practiced

- Function overloading
- Integers and doubles
- Function parameters
- Return values
- Compile-time polymorphism
- Basic arithmetic operations

## How It Works

The program overloads the `calculate()` function in three different ways:

### Addition

```cpp
int calculate(int a, int b);
```

Adds two integers together.

**Example:**

```cpp
calculate(1, 2);
```

**Output:**

```text
3
```

### Multiplication

```cpp
double calculate(double a, double b);
```

Multiplies two double values.

**Example:**

```cpp
calculate(10.0, 20.0);
```

**Output:**

```text
200
```

### Average

```cpp
int calculate(int a, int b, int c);
```

Calculates the average of three integers.

**Example:**

```cpp
calculate(5, 10, 15);
```

**Output:**

```text
10
```

## Sample Program Output

```text
###### Test for addition ######
3

###### Test for multiplication ######
200

###### Test for average ######
10
```

## What I Learned

- Multiple functions can share the same name when their parameter lists differ.
- C++ chooses the correct overloaded function based on the arguments provided.
- The return type alone cannot be used to overload functions.
- Overloading can make code more readable by using meaningful function names instead of creating many separate functions.

## Author

Aamer Riaz

Created while learning C++ and practicing function overloading.
