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

void markTask() {
    int id;
    cout << "Enter task ID to mark complete: ";
    cin >> id;
    for (auto& task : tasks) {
        if (task.id == id) {
            task.completed = true;
            cout << "Task marked as completed!\n";
            return;
        }
    }
    cout << "Task not found!\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\nTask Manager:\n1. Mark Task as Completed\n2. Exit\nChoose an option: ";
        cin >> choice;
        switch (choice) {
        case 1: markTask(); break;
        case 2: return 0;
        default: cout << "Invalid option!\n";
        }
    }
}
