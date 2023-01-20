#pragma once
#include"Transport.h"



class Kentavr : public Transport {
public:
	Kentavr();
	~Kentavr() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Кентавр";
	double speed_ = 15;
	double result_ = 0;
	double rest_ = 8;
	double stop_all_ = 2;
	int id_ = 3;
};
