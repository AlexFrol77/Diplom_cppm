#include"Camel.h"

Camel::Camel() {}

Camel::~Camel() {}

void Camel::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel::Print_Transport_Name() {
	std::cout << name_;
}
std::string Camel::Get_Name() {
	return name_;
}
int Camel::Get_ID() {
	return id_;
}
double Camel::Get_Result() {
	return result_;
}
void Camel::Go_Race(double distTemp) {
	double temp = 0;
	result_ = distTemp / speed_;
	temp = result_ / rest_;
	for (int i = 1; i < temp; i++) {
		if (i == 1) {
			result_ += stop_first_;
		}
		else {
			result_ += stop_all_;
		}
	}
}