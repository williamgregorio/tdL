#include <iostream>
#include <ostream>
#include <vector>

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
int main() {
  while(true){
    displayInterface();
  }
  return 0;
}
