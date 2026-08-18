#include <iostream>
#include <string>
#include "movie.h"

void Movie::display() const {
    std::cout << name << " " << rating << " " << watched_count << "\n";
}

void Movie::increment_watched() {
    watched_count++;
}

std::string Movie::get_name() const {
    return name;
}

std::string Movie::get_rating() const {
    return rating;
}

int Movie::get_watched_count() const {
    return watched_count;
}

Movie::Movie(std::string name_val, std::string rating_val, int watched_count_val)
    : name{name_val}, rating{rating_val}, watched_count{watched_count_val} {
}

Movie::Movie(const Movie &source)
    : name{source.name}, rating{source.rating}, watched_count{source.watched_count} {
}

Movie::~Movie() {
}

