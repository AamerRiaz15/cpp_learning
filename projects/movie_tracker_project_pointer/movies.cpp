#include <iostream>
#include <string>
#include "movies.h"

Movies::Movies() {
    movies = new std::vector<Movie>();
}

Movies::~Movies() {
    delete movies;
}

Movies::Movies(const Movies &source) {
    movies = new std::vector<Movie>(*source.movies);
}

Movies& Movies::operator=(const Movies &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete movies;
    movies = new std::vector<Movie>(*rhs.movies);

    return *this;
}

Movies::Movies(Movies &&source) noexcept {
    movies = source.movies;
    source.movies = nullptr;
}

Movies& Movies::operator=(Movies &&rhs) noexcept {
    if (this == &rhs) {
        return *this;
    }
    delete movies;
    movies = rhs.movies;
    rhs.movies = nullptr;

    return *this;
}

bool Movies::add_movie(const std::string &name, const std::string &rating, int watched_count) {
    for (const Movie &movie : *movies) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    movies->push_back(Movie{name, rating, watched_count});
    return true;
}

bool Movies::increment_watched(const std::string &name) {
    for (Movie &movie : *movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    for (const Movie &movie : *movies) {
        std::cout << movie.get_name() << " "
        << movie.get_rating() << " "
        << movie.get_watched_count() << "\n";
    }
}

