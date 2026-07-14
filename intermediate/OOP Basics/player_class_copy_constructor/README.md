# Player Class (C++)

This project demonstrates a basic C++ class split across header and source files.  
It includes constructor overloading, constructor delegation, a copy constructor,  
and a destructor, following clean object‑oriented design principles.

## Features
- Default constructor  
- Single‑argument constructor  
- Two‑argument constructor  
- Three‑argument constructor  
- Constructor delegation  
- Copy constructor  
- Destructor  
- Getter and setter methods  
- Proper separation into `.h` and `.cpp` files

## File Structure
Player.h        // Class declaration  
Player.cpp      // Class definitions  
main.cpp        // Example usage  

## How to Build
Using g++:
g++ main.cpp Player.cpp -o player_app
./player_app

## Example Output
The constructors and destructor print messages so you can observe  
object lifecycle behaviour when running the program.
