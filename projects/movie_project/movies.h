#ifndef MOVIES_H
#define MOVIES_H

#include <string>
#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    bool add_movie(const std::string &name,
                   const std::string &rating,
                   int watched_count);
    bool increment_watched(const std::string &name);
    void display() const;
    
    Movies();
};

#endif
