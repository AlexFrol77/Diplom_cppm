#include"Kentavr.h"

Kentavr::Kentavr() {}
Kentavr::~Kentavr() {}

void Kentavr::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Kentavr::Print_Transport_Name() {
	std::cout << name_;
}
std::string Kentavr::Get_Name() {
	return name_;
}
int Kentavr::Get_ID() {
	return id_;
}
double Kentavr::Get_Result() {
	return result_;
}
void Kentavr::Go_Race(double distTemp) {
	double temp;
	result_ = distTemp / speed_;
	temp = result_ / rest_;
	for (int i = 1; i < temp; i++) {		
		result_ += stop_all_;
	}
}