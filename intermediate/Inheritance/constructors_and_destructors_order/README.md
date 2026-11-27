# Constructor and Destructor Order in Inheritance (C++)

## Overview

This project demonstrates how constructors and destructors are called when inheritance is used in C++.

The example uses a `Base` class and a `Derived` class to show the order in which objects are created and destroyed.

## Concepts Practiced

- Classes and objects
- Inheritance
- Constructors
- Destructors
- Object lifetime
- Constructor and destructor order

## Class Structure

```cpp
class Base
{
    // Constructor
    // Destructor
};

class Derived : public Base
{
    // Constructor
    // Destructor
};
```

The `Derived` class inherits from the `Base` class.

## Key Concept

When a `Derived` object is created:

1. The `Base` constructor executes first.
2. The `Derived` constructor executes second.

When a `Derived` object is destroyed:

1. The `Derived` destructor executes first.
2. The `Base` destructor executes last.

This ensures that the base portion of an object is fully constructed before the derived portion uses it, and cleaned up after the derived portion is finished.

## Example Output

```text
Base constructor called.
Derived constructor called.
Derived destructor called.
Base destructor called.
```

## What I Learned

- Constructors execute from the base class to the derived class.
- Destructors execute in the reverse order.
- A derived class automatically calls the base class constructor before its own constructor runs.
- Understanding object creation and destruction is important before learning more advanced inheritance and polymorphism concepts.

## Author

Aamer Riaz

Created while learning C++ inheritance, constructors, and destructors.
