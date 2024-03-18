#include <ios>
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

    switch(choice){
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        std::cout << "Exiting tdL." << std::endl;
        return 0;
      default:
        std::cout << "Unknown choice, please enter a correct number.";
    }
  }
}
