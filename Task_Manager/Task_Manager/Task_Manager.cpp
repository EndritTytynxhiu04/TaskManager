#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>  
#include <string>     

using namespace std;

struct Task {
    int id;
    string description;
    bool completed;
};

vector<Task> tasks;
int nextId = 1;

void saveTasks() {
    ofstream file("tasks.txt");
    for (const auto& task : tasks) {
        file << task.id << " " << task.completed << " " << task.description << "\n";
    }
}

void loadTasks() {
    ifstream file("tasks.txt");
    Task task;
    while (file >> task.id >> task.completed) {
        file.ignore();
        getline(file, task.description);
        tasks.push_back(task);
        nextId = max(nextId, task.id + 1);
    }
}

void addTask() {
    cin.ignore();
    Task task = { nextId++, "", false };
    cout << "Enter task description: ";
    getline(cin, task.description);
    tasks.push_back(task);
    saveTasks();
    cout << "Task added!\n";
}

void listTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    for (const auto& task : tasks) {
        cout << task.id << ". " << task.description << " [" << (task.completed ? "X" : " ") << "]\n";
    }
}

void deleteTask() {
    int id;
    cout << "Enter task ID to delete: ";
    cin >> id;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == id) {
            tasks.erase(it);
            saveTasks();
            cout << "Task deleted!\n";
            return;
        }
    }
    cout << "Task not found!\n";
}

int main() {
    loadTasks();
    int choice;
    while (true) {
        cout << "\nTask Manager:\n1. Add Task\n2. List Tasks\n3 Delete Task\n4. Exit\nChoose an option: ";
        cin >> choice;
        switch (choice) {
        case 1: addTask(); break;
        case 2: listTasks(); break;
        case 3: deleteTask(); break;
        case 4: return 0;
        default: cout << "Invalid option!\n";
        }
    }
}