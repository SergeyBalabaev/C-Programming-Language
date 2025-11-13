#include <iostream>
#include <vector>

// Кто получает уведомления
class Observer {
public:
    virtual ~Observer() = default;           // Важно: виртуальный деструктор!
    virtual void update(int temp) = 0;
};

// Объект, за которым наблюдают
class Weather {
private:
    std::vector<Observer*> observers;
    int temperature;

public:
    void setTemp(int t) {
        temperature = t;
        for (auto* o : observers) {
            o->update(temperature);  // Оповещаем всех
        }
    }

    void addObserver(Observer* o) {
        observers.push_back(o);
    }
};

// Один из наблюдателей
class Phone : public Observer {
public:
    void update(int temp) override {
        std::cout << "Телефон: " << temp << "°C\n";
    }
};

class Watch : public Observer {
public:
    void update(int temp) override {
        std::cout << "Часы: " << temp << "°C\n";
    }
};

// 🚀 Главное — добавь main(), иначе компилятор не знает, с чего начать!
int main() {
    setlocale(LC_ALL, "rus");
    Weather weather;
    Phone phone;
    Watch watch;

    weather.addObserver(&phone);
    weather.addObserver(&watch);

    weather.setTemp(28);  // Должно вывести два сообщения

    return 0;
}
