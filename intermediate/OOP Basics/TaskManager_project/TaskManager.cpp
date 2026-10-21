#include <iostream>
#include <string>
#include <vector>
#include "TaskManager.hpp"

void TaskManager::add_task(const std::string &name) {
    tasks.push_back(Task{name});
    std::cout << name << " added to vector.\n";
}

void TaskManager::remove_task(std::size_t index) {
    if (index >= tasks.size()) {
        std::cout << "Invalid task index.\n";
        return;
    }

    tasks.erase(tasks.begin() + index);
    std::cout << "Task removed at index " << index << "\n";
}

void TaskManager::mark_completed(std::size_t index) {
    if (index >= tasks.size()) {
        std::cout << "Invalid task index.\n";
        return;
    }

    tasks.at(index).mark_completed();
}

void TaskManager::rename_task(std::size_t index, const std::string &name) {
    if (index >= tasks.size()) {
        std::cout << "Invalid index.\n";
        return;
    }

    tasks.at(index).rename(name);
}

void TaskManager::print_tasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks available to print.\n";
        return;
    }

    for (size_t i=0; i < tasks.size(); i++) {
        std::cout << i << ": " << tasks.at(i) << "\n";
    }
}

int TaskManager::find_task(const std::string &name) const {
    for (size_t i=0; i < tasks.size(); i++) {
        if (tasks[i].get_name() == name) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
