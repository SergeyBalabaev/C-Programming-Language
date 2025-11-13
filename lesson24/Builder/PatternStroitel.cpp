#include <iostream>


//старший класс "Средство передвижения"

class Vehicle {
public:
	void setName(const std::string& name) {
		this->name = name;
	}
	void setBody(const std::string& body) {
		this->body = body;
	}
	void setNumWheels(const int& numwheels) {
		this->numwheels = numwheels;
	}
	void setNumDoors(const int& numdoors) {
		this->numdoors = numdoors;
	}
	void setCaterpillars(const bool& caterpillars) {
		this->caterpillars = caterpillars;
	}
	void showVehicle() const {
		std::cout << "Vehicle: " << name << std::endl << std::endl;
		std::cout << "body: " << body << "," << "numwheels: " << numwheels << ","
			<< "numdoors: " << numdoors << "," << "caterpillars: " << (caterpillars ? "yes" : "no") << "." << std::endl;
	}
private:
	std::string name;
	std::string body;
	int numwheels;
	int numdoors;
	bool caterpillars;
};


//Абстрактный класс-строитель("Контракт")

class VehicleBuilder {
public:
	//обязательные для реализации методы 
	virtual void createName() = 0;
	virtual void buildBody() = 0;
	virtual void buildWheels() = 0;
	virtual void buildDoors() = 0;
	virtual void buildCatterpillars() = 0;

	//общий для всех строителей метод
	Vehicle buildResult() {
		return vehicle;
	}
protected:
	Vehicle vehicle;
};

//Конкретный класс строитель("Эксковатор")

class ExcavatorBuilder : public VehicleBuilder {
public:
	void createName() override {
		vehicle.setName("Catpill 12309");
	}
	void buildBody() override {
		vehicle.setBody("Excavator body");
	}
	void buildWheels() override {
		vehicle.setNumWheels(20);
	}
	void buildDoors() override {
		vehicle.setNumDoors(2);
	}
	void buildCatterpillars() override {
		vehicle.setCaterpillars(true);
	}
};

//Конкретный класс строитель("Мотоцикл")

class MotoBuilder : public VehicleBuilder {
public:
	void createName() override {
		vehicle.setName("Honda CBR1000");
	}
	void buildBody() override {
		vehicle.setBody("Moto body");
	}
	void buildWheels() override {
		vehicle.setNumWheels(2);
	}
	void buildDoors() override {
		vehicle.setNumDoors(0);
	}
	void buildCatterpillars() override {
		vehicle.setCaterpillars(false);
	}
};



//Директорский класс управляет постройкой

class VehicleEngineerOrDirector {
public:
	void setBuilder(VehicleBuilder* builder) {
		this->builder = builder;
	}

	//Знает правильную последовательность сборки

	Vehicle buildVehicle() {
		builder->createName(); //Сначала имя
		builder->buildBody();  //потом корпус и т.д.
		builder->buildWheels();
		builder->buildDoors();
		builder->buildCatterpillars();
		return builder->buildResult();
	}
private:
	VehicleBuilder* builder;
};

int main() {

	VehicleEngineerOrDirector boss;

	ExcavatorBuilder exc;
	MotoBuilder mot;

	boss.setBuilder(&exc);

	std::cout << "Building Excavator!" << std::endl;
	Vehicle excavator = boss.buildVehicle();
	excavator.showVehicle();

	std::cout << std::endl;

	boss.setBuilder(&mot);

	std::cout << "Building Moto!" << std::endl;
	Vehicle moto = boss.buildVehicle();
	moto.showVehicle();

}