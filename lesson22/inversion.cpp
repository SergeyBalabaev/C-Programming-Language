#include <iostream>
#include <string>
#include <vector>

/*
class LightBulb {
public:
    void TurnOn() {
        std::cout << "Light bulb on..." << std::endl;
    }
    void TurnOff() {
        std::cout << "Light bulb off..." << std::endl;
    }
};

class ElectricPowerSwitch {
public:
    ElectricPowerSwitch(LightBulb light_bulb) : light_bulb_{ light_bulb }, on_{ false } {}
    void press() {
        if (on_) {
            light_bulb_.TurnOff();
            on_ = false;
        }
        else {
            light_bulb_.TurnOn();
            on_ = true;
        }
    }
private:
    LightBulb light_bulb_;
    bool on_;
};
*/

class Switchable {
public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual ~Switchable() = default;
};

class ElectricPowerSwitch {
 public:
  ElectricPowerSwitch(Switchable &switchable) : switchable_{switchable}, on_{false} {}
  void press() {
    if (on_) {
      switchable_.TurnOff();
      on_ = false;
    } else {
      switchable_.TurnOn();
      on_ = true;
    }
  }
 private:
  bool on_;
  Switchable &switchable_;
};

class LightBulb final : public Switchable {
  void TurnOn() override {
    std::cout << "Turn on light bulb" << std::endl;
  }
  void TurnOff() override {
    std::cout << "Turn off light bulb" << std::endl;
  }
};

class Fan final : public Switchable {
    void TurnOn() override {
        std::cout << "Turn on fun" << std::endl;
    }
    void TurnOff() override {
        std::cout << "Turn off fun" << std::endl;
    }
};

int main() {
    LightBulb light_bulb{};
    Fan fan{};
    ElectricPowerSwitch power_switch{ light_bulb };
    ElectricPowerSwitch power_switch{ fan };
    power_switch.press();
    power_switch.press();
    return 0;
}

