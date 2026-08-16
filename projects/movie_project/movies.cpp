#include <iostream>
#include <string>
#include "movies.h"

bool Movies::add_movie(const std::string &name, const std::string &rating, int watched_count) {
    for (const Movie &movie : movies) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    movies.push_back(Movie{name, rating, watched_count});
    return true;
}

bool Movies::increment_watched(const std::string &name) {
    for (Movie &movie : movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    for (const Movie &movie : movies) {
        std::cout << movie.get_name() << " "
        << movie.get_rating() << " "
        << movie.get_watched_count() << "\n";
    }
}

Movies::Movies() {
}
