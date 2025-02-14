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


void deleteTask() {
    int id;
    cout << "Enter task ID to delete: ";
    cin >> id;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == id) {
            tasks.erase(it);
            cout << "Task deleted!\n";
            return;
        }
    }
    cout << "Task not found!\n";

int nextId = 1;
}
void addTask() {
    cin.ignore();
    Task task = { nextId++, "", false };
    cout << "Enter task description: ";
    getline(cin, task.description);
    tasks.push_back(task);
    cout << "Task added!\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\nTask Manager:\n1. Add Task\n2. Exit\nChoose an option: ";
        cin >> choice;
        switch (choice) {
        case 1: addTask(); break;
        case 2: return 0;
        default: cout << "Invalid option!\n";
        }
    }
}

