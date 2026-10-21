#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include <vector>
#include <string>
#include "Task.hpp"

class TaskManager {
private:
    std::vector<Task> tasks;
public:
    void add_task(const std::string &name);
    void remove_task(std::size_t index);
    void mark_completed(std::size_t index);
    void rename_task(std::size_t index, const std::string &name);

    void print_tasks() const;

    int find_task(const std::string &name) const;
};

#endif
