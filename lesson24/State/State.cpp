#include <iostream>
#include <string>

using namespace std;

class TrafficLight;

class State {
	protected:
	TrafficLight* trafficLight;
	public:
	virtual ~State () {}
	void setTrafficLight(TrafficLight* tr) {
		trafficLight = tr;
	}
	virtual void nextState() = 0;
	virtual void previousState() = 0;
	
};

class TrafficLight {
	private:
	State* state;
	public:
	TrafficLight(State* st) : state(nullptr){
setState(st);
	}
	void setState(State* st) {
		if (state != nullptr) delete state;
		state = st;
		state->setTrafficLight(this);
	}
	void nextState(){
		state->nextState();
	}
	void previousState() {
		state->previousState();
	}
};

class GreenState : public State {
	public:
	void nextState() override;
	void previousState() override{
		cout << "Green light" << endl;
	}
};

class YellowState : public State {
	public:
	void nextState() override;
	void previousState() override{
		cout << "From Yellow to Green light" << endl;
		trafficLight->setState(new GreenState());
	}
};

void GreenState::nextState() {
	cout << "From Green to Yellow light" << endl;
	trafficLight->setState(new YellowState());
}

class RedState : public State {
	public:
	void nextState() override {
		cout << "Red light" << endl;
	}
	void previousState() override{
		cout << "From Red to Yellow light" << endl;
		trafficLight->setState(new YellowState());
	}
};

void YellowState::nextState() {
	cout << "Form Yellow to Red" << endl;
	trafficLight->setState(new RedState());
}

int main() {
	TrafficLight* trafficLight = new TrafficLight(new YellowState());
	
	trafficLight->nextState();
	trafficLight->nextState();
	trafficLight->previousState();
	trafficLight->previousState();
	trafficLight->previousState();
	
	delete trafficLight;
}
