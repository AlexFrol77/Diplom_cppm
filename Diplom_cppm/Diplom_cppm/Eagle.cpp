#include"Eagle.h"

Eagle::Eagle() {}

Eagle::~Eagle() {}

void Eagle::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Eagle::Print_Transport_Name() {
	std::cout << name_;
}
std::string Eagle::Get_Name() {
	return name_;
}
int Eagle::Get_ID() {
	return id_;
}
double Eagle::Get_Result() {
	return result_;
}
void Eagle::Go_Race(double distTemp) {
	double temp = distTemp * 0.94;
	result_ = temp / speed_;
}