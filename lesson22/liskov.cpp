#include <iostream>
#include <string>
#include <vector>

class animal {
protected:
    int age;
    int weight;
    std::string name;

public:
    animal();
    ~animal();
    virtual void voice();
    virtual void setage(int);
    static int number;
    void printnum();
};

animal::animal() {
    std::cout << "animal born!" << std::endl;
    this->age = 0;
    this->weight = 0;
    this->name = "";
    animal::number++;
}
animal::~animal() {

}
void animal::printnum() {
    std::cout << animal::number << std::endl;
}
void animal::voice() {
    std::cout << "Making some sound..." << std::endl;
}
void animal::setage(int age) {
    if (age < 100)
        this->age = age;
    else
        std::cout << "animal age error" << std::endl;
}

int animal::number = 0;

class cat : public animal
{
public:
    cat();
    cat(int age, int weight, std::string name);
    void voice() override;
    void setage(int) override;
};
void cat::voice() {
    std::cout << "Mew..." << std::endl;
}
cat::cat() {
    std::cout << "kitten born!" << std::endl;
};
cat::cat(int age, int weight, std::string name) {
    std::cout << "kitten born!" << std::endl;
    this->age = age;
    this->name = name;
    this->weight = weight;
};
void cat::setage(int age) {
    if (age < 40)
        this->age = age;
    else
        std::cout << "cat age error" << std::endl;
}

class dog : public animal
{
public:
    dog();
    dog(int age, int weight, std::string name);
    void voice() override;
    void setage(int) override;
};

void dog::voice() {
    std::cout << "Gaf..." << std::endl;
}
dog::dog() {
    std::cout << "puppy born!" << std::endl;
};
dog::dog(int age, int weight, std::string name) {
    std::cout << "puppy born!" << std::endl;
    this->age = age;
    this->name = name;
    this->weight = weight;
};
void dog::setage(int age) {
    if (age < 30)
        this->age = age;
    else
        std::cout << "dog age error" << std::endl;
}


class parrot : public animal
{
public:
    parrot();
    parrot(int age, int weight, std::string name);
    void voice() override;
    void setage(int) override;
};

void parrot::voice() {
    std::cout << "Chirik..." << std::endl;
}
parrot::parrot() {
    std::cout << "parrot born!" << std::endl;
};
parrot::parrot(int age, int weight, std::string name) {
    std::cout << "parrot born!" << std::endl;
    this->age = age;
    this->name = name;
    this->weight = weight;
};
void parrot::setage(int age) {
    if (age < 150)
        this->age = age;
    else
        std::cout << "parrot age error" << std::endl;
}



int main()
{
    std::vector <animal*> base_vec;
    cat A;
    dog B;
    animal C;
    parrot D;
    base_vec.push_back(&A);
    base_vec.push_back(&B);
    base_vec.push_back(&C);
    for (auto var : base_vec)
    {
        var->voice();
        var->setage(50);    //В данном случае мы думаем, что работаем с объектом типа animal. И пытаемся зная его правила установить возраст = 50 лет. Но у нас не animal, а cat
    }
}

