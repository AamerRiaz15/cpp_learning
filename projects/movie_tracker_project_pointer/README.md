# Movie Collection Manager (Pointer Version)

This project is a C++ movie collection manager built as a challenge to practice dynamic memory management and the Rule of 5.  
Instead of storing a `std::vector<Movie>` directly, this version stores a **pointer to a vector**, requiring manual handling of copying, moving, and destruction.

## Features
- Add movies (name, rating, watched count)
- Prevent duplicate entries
- Increment watched count
- Display all movies in the collection
