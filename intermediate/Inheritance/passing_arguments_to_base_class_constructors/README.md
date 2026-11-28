# Passing Arguments to Base Class Constructors

## Purpose

This example demonstrates:

- How a derived class calls a specific base class constructor.
- How constructor initializer lists work.
- Using constructor parameters to initialize both base and derived class members.
- The order of constructor and destructor calls in an inheritance hierarchy.

---

## Class Structure

### Base Class

The `Base` class contains:

- An integer member named `value`
- A default constructor
- An overloaded constructor that accepts an integer
- A destructor

```cpp
class Base {
private:
    int value;
};
```

### Derived Class

The `Derived` class publicly inherits from `Base` and contains:

- An integer member named `doubled_value`
- A default constructor
- An overloaded constructor
- A destructor

```cpp
class Derived : public Base {
private:
    int doubled_value;
};
```

---

## Calling a Base Constructor

The overloaded `Derived` constructor accepts an integer parameter:

```cpp
Derived(int x)
    : Base{x}, doubled_value{x * 2}
{
    std::cout << "Derived overloaded constructor called.\n";
}
```

Here:

```cpp
Base{x}
```

calls the overloaded constructor of `Base`.

```cpp
doubled_value{x * 2}
```

initializes the derived class member using the same parameter.

For:

```cpp
Derived c{100};
```

the values become:

```text
value = 100
doubled_value = 200
```

The constructor parameter `x` can be used throughout the initializer list.

---

## Object Construction

In `main()`:

```cpp
int main() {
    Derived c{100};
    return 0;
}
```

Creating `c` causes the following sequence:

### Step 1

The base class constructor executes first:

```cpp
Base{x}
```

Output:

```text
Base overloaded constructor called.
```

### Step 2

The derived member is initialized:

```cpp
doubled_value{x * 2}
```

which becomes:

```cpp
doubled_value{200}
```

### Step 3

The body of the derived constructor executes:

```text
Derived overloaded constructor called.
```

### Construction Order

```text
Base
  ↓
Derived
```

A base class is always constructed before the derived class.

---

## Object Destruction

When `main()` ends, object `c` goes out of scope.

The destruction order is the reverse of construction:

### Step 1

The derived destructor runs:

```text
Derived destructor called.
```

### Step 2

The base destructor runs:

```text
Base destructor called.
```

### Destruction Order

```text
Derived
  ↓
Base
```

The derived class is destroyed before its base class.

This ensures the base portion of the object remains valid while the derived class is being cleaned up.

---

## Program Output

```text
Base overloaded constructor called.
Derived overloaded constructor called.
Derived destructor called.
Base destructor called.
```

---

## Key Takeaways

✅ A derived constructor can choose which base constructor to call.

✅ Constructor arguments can be used to initialize both base and derived members.

✅ The parameter `x` is available throughout the initializer list.

✅ Construction order is always:

```text
Base → Derived
```

✅ Destruction order is always:

```text
Derived → Base
```

### Memory Aid

> Construct from the top down:
>
> Base → Derived
>
> Destroy from the bottom up:
>
> Derived → Base
