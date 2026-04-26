#include <iostream>
#include <string>
int
main()
{
  std::string name;
  std::cout << "Enter name: ";
  // Запрашиваем имя пользователя
  std::cin >> name;
  // Выводим приветствие
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
