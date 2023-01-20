#include<iostream>
#include"Transport.h"

Transport::Transport() {};

Transport::~Transport() {};

void Transport::Set_Distance(double distance) {
	this->distance_ = distance;
}
void Transport::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Transport::Print_Transport_Name() {
	std::cout << name_ << " ";
}
double Transport::Get_Distance() {
	return distance_;
}
double Transport::Get_Speed() {
	return speed_;
}
double Transport::Get_Result() {
	return result_;
}
std::string Transport::Get_Name() {
	return name_;
}
int Transport::Get_ID() {
	return id_;
}
void Transport::Go_Race(double distTemp) {
	result_ = distTemp / speed_;
}