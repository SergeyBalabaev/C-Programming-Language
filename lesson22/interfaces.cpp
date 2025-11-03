#include <iostream>
#include <string>
#include <vector>

class animal {
protected:
    int age;
    int weight;
    std::string name;

public:
    virtual void voice() = 0;
};

class cat : public animal {
private:
    std::string name;
public:
    cat() {
        name = "Pushok";
        age = 5;
        weight = 10;
    }
    void eat() {
        weight++;
        std::cout << "eating" << std::endl;
    }
    void whoami() {
        std::cout << "Name:" << name << std::endl;
    }
    void voice() {
                // если убрать переопределение - будет ошибка. Если интерфейс содержит слишком много методов, то будет слишком много пустых переопределений
    }
};

int main()
{
    cat b;
    b.whoami();
}
