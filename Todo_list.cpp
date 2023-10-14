#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Task 
{
    string description;
    bool completed;
};
void addTask(vector<Task>& tasks, const string& description)
{
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}
void viewTasks(const vector<Task>& tasks)
{
    cout << "Todo List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        }
        cout << tasks[i].description << endl;
    }
}
void markTaskAsCompleted(vector<Task>& tasks, int taskNumber)
{
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid! Task notmarked" << endl;
    }
}
void removeTask(vector<Task>& tasks, int taskNumber)
{
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}
int main() {
    vector<Task> tasks;

    while (true) {
        cout << "Todo List Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: 
            {
                cout << "Enter task description: ";
                cin.ignore(); 
                string description;
                getline(cin, description);
                addTask(tasks, description);
                break;
            }
            case 2: 
            {
                viewTasks(tasks);
                break;
            }
            case 3: 
            {
                cout << "Enter task number to mark as completed: ";
                int taskNumber;
                cin >> taskNumber;
                markTaskAsCompleted(tasks, taskNumber);
                break;
            }
            case 4: 
            {
                cout << "Enter task number to remove: ";
                int taskNumber;
                cin >> taskNumber;
                removeTask(tasks, taskNumber);
                break;
            }
            case 5: 
            {
                cout << "Goodbye!" << endl;
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
