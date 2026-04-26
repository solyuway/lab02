#include <iostream>
#include <string>
int main() {
std::string name;
std::cout << "Введите имя: ";
//Запрашиваем user name.
std::cin >> name;
//Выводим приветствие
std::cout << "Hello world from " << name << std::endl;
return 0;
}
