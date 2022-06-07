#include "iostream"

void Log(const char *);

int main() {
  std::cout << "param" << std::endl;
  Log("Param");
  std::cin.get();
}
