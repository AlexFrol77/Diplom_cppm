#include"Camel_Fast.h"

Camel_Fast::Camel_Fast() {}

Camel_Fast::~Camel_Fast() {}

void Camel_Fast::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel_Fast::Print_Transport_Name() {
	std::cout << name_;
}
std::string Camel_Fast::Get_Name() {
	return name_;
}
int Camel_Fast::Get_ID() {
	return id_;
}
double Camel_Fast::Get_Result() {
	return result_;
}
void Camel_Fast::Go_Race(double distTemp) {
	double temp;
	result_ = distTemp / speed_;
	temp = result_ / rest_;
	for (int i = 1; i < temp; i++) {
		if (i == 1) {
			result_ += stop_first_;
		}
		if (i == 2) {
			result_ += stop_second_;
		}
		else {
			result_ += stop_all_;
		}
	}
}