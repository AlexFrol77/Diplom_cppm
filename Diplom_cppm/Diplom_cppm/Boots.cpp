#include"Boots.h"


Boots::Boots() {}
Boots::~Boots() {}

void Boots::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Boots::Print_Transport_Name() {
	std::cout << name_;
}
std::string Boots::Get_Name() {
	return name_;
}
int Boots::Get_ID() {
	return id_;
}
double Boots::Get_Result() {
	return result_;
}
void Boots::Go_Race(double distTemp) {
	double temp;
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