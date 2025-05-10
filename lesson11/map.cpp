#include <iostream>
#include <map>
#include <string>

void print_map(const std::map<std::string, int>& m)
{
      for (auto& n : m) {
          std::cout << n.first << " = " << n.second << ";\n";
    }
}

int main()
{
    std::map<std::string, int> m;
    m["Math"] = 5;
    m["Math"] = 4;
    m["Literature"] = 4;
    m["Russian"] = 4;
    print_map(m);

    auto it = m.find("Math");
    std::cout << (*it).first << " " << (*it).second << "\n";;
}
