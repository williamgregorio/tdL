#include <iostream>

struct TodoItem {
  std::string title;
  std::string description;
  bool completed = false;
};

void interface(){
  int choice;
  std::cout << "Please pick a number:\n(1).Test\n" << std::endl;
  std::cin >> choice;
  switch(choice) {
    case 1:
      std::cout << "test true";
      break;
    default:
      std::cout << "Default touched";
  }
}
int main() {
  interface();
  return 0;
}
