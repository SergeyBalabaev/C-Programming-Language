#include <iostream>

// Устройства, которые показывают температуру
class Phone {
public:
    void show(int temp) {
        std::cout << "Телефон: Температура " << temp << " °C\n";
    }
};

class Watch {
public:
    void show(int temp) {
        std::cout << "Часы: Сейчас " << temp << " °C\n";
    }
};

// Погодная станция — ЗНАЕТ о каждом устройстве напрямую
class WeatherStation {
private:
    int temperature;
    Phone phone;   // ← Жёстко встроены!
    Watch watch;   // ← Нельзя убрать

public:
    void setTemperature(int t) {
        temperature = t;
        // Каждое устройство вызывается ВРУЧНУЮ
        phone.show(temperature);
        watch.show(temperature);
        // 🔥 Если добавить новое устройство — придётся ЛЕЗТЬ СЮДА!
    }
};

int main() {
    setlocale(LC_ALL, "rus"); // Единственная строка для русского — без изменений

    WeatherStation weather;
    weather.setTemperature(25);

    return 0;
}
