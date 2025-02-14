#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>  // Add this header for std::max
#include <string>     // Ensure that <string> is included

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

int main(){

}
