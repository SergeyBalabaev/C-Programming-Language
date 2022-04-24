#include <iostream>
#include <map>
#include <string>

void print_map(const std::multimap<std::string, int>& m)
{
      for (auto& n : m) {
          std::cout << n.first << " = " << n.second << ";\n";
    }
}

int main()
{
    std::multimap<std::string, int> m;
    m.insert(std::pair<std::string, int>("Math",5));
    m.insert(std::pair<std::string, int>("Math", 4));
    m.insert(std::pair<std::string, int>("Russian", 5));
    print_map(m);
    m.erase("Math");
    print_map(m);
}
