#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched_count;
public:
    void display() const;
    void increment_watched();

    std::string get_name() const;
    std::string get_rating() const;
    int get_watched_count() const;

    Movie(std::string name_val, std::string rating__val, int watched_count_val);
    Movie(const Movie &source);
    ~Movie();
};

#endif
