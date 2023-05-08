#include "Lab6Example.h"
#include <iostream>
using namespace std;

void MenuExample() {
	std::cout << "     Menu Example   \n";
	std::cout << "    1   Example 1  \n";
	std::cout << "    2   Example 2  \n";
	std::cout << "    3   Example 3  \n";

}
void Example()
{
	bool isSelected = false;
  while (!isSelected) {
    system("cls");
    MenuExample();
    int ch;
    cin >> ch;
    switch (ch) {
    case 1:
      Example1();
      isSelected = true;
      break;
    case 2:
      Example2();
      isSelected = true;
      break;
    case 3:
      Example3();
      isSelected = true;
    default:
      break;
    }
  }
}



