#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include <limits>

struct TodoItem {
  std::string title;
  std::string description;
  bool completed = false;
};

std::vector<TodoItem> todoList;

void displayInterface(){
  std::cout << "tdL" << std::endl;
  std::cout << "1. Create a new task" << std::endl;
  std::cout << "2. Display your tasks" << std::endl;
  std::cout << "3. Delete a task" << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Enter your choice" << std::endl;
}

void createTodoItem(){
  TodoItem task;
  std::cout << "Create a new task" << std::endl;
  std::cout << "Title: " << std::endl;
  std::getline(std::cin, task.title);
  std::cout << "Description: " << std::endl;
  std::getline(std::cin, task.description);
  task.completed = false;
  todoList.push_back(task);
  std::cout << task.title << " has been added to the list.\n";
}

void displayTodoList(){
  std::cout << "Task list:" << std::endl;
  for (int i = 0; i < todoList.size(); i++) {
    std::cout << i + 1 << ". " << todoList[i].title << " - " << todoList[i].description << (todoList[i].completed ? " [Completed]" : " [Not Completed]") << std::endl;
  }
}

void deleteTaskItem() {
  displayTodoList();
  std::cout << "Enter the number of the item to delete: ";
  int index;
  std::cin >> index;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  if (index > 0 && index <= todoList.size()) {
    todoList.erase(todoList.begin() + index - 1);
    std::cout << "Item " << index << " deleted." << std::endl;
  } else {
    std::cout << "Invalid item number." << std::endl;
  }
}

int main() {
  while(true){
    displayInterface();
    int choice;
    std::cin >> choice;

    if (std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input, please enter a number" << std::endl;
      continue;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch(choice){
      case 1:
        createTodoItem();
        break;
      case 2:
        displayTodoList();
        break;
      case 3:
        deleteTaskItem();
        break;
      case 4:
        std::cout << "Exiting tdL." << std::endl;
        return 0;
      default:
        std::cout << "Unknown choice, please enter a correct number.";
    }
  }
}
