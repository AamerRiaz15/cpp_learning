#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task {
private:
    std::string name;
    bool completed;
public:
    Task(const std::string &name);

    void mark_completed();
    void rename(const std::string &new_name);

    std::string get_name() const;
    bool is_completed() const;
};

std::ostream &operator<<(std::ostream &os, const Task &task);

#endif
