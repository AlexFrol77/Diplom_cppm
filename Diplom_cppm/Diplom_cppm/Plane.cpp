#include"Plane.h"

Plane::Plane() {}

Plane::~Plane() {}

void Plane::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Plane::Print_Transport_Name() {
	std::cout << name_;
}
std::string Plane::Get_Name() {
	return name_;
}
int Plane::Get_ID() {
	return id_;
}
double Plane::Get_Result() {
	return result_;
}
void Plane::Go_Race(double distTemp) {
	double temp = distTemp;
	if (distTemp < 5000) {
		temp *= 0.97;
	}
	if (distTemp < 10000 && distTemp > 5000) {
		temp *= 0.90;
	}
	if (distTemp >= 10000) {
		temp *= 0.95;
	}
	result_ = temp / speed_;
}