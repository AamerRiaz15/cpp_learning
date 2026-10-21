#include <iostream>
#include <string>
#include "Task.hpp"
#include <ostream>

Task::Task(const std::string &name) 
    : name{name}, completed{false} {
}

void Task::mark_completed() {
    completed = true;
}

void Task::rename(const std::string &new_name) {
    name = new_name;
}

std::string Task::get_name() const {
    return name;
}

bool Task::is_completed() const {
    return completed;
}

std::ostream &operator<<(std::ostream &os, const Task &task) {
    os << task.get_name();
    
    if (task.is_completed()) {
        os << " [DONE]";
    }
    return os;
}
