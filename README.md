#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    int id;
    string description;
    bool completed;
};

vector<Task> tasks;

void listTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    for (const auto& task : tasks) {
        cout << task.id << ". " << task.description << " [" << (task.completed ? "X" : " ") << "]\n";
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nTask Manager:\n1. List Tasks\n2. Exit\nChoose an option: ";
        cin >> choice;
        switch (choice) {
        case 1: listTasks(); break;
        case 2: return 0;
        default: cout << "Invalid option!\n";
        }
    }
}
