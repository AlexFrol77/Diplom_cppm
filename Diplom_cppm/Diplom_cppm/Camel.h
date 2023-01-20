#pragma once
#include"Transport.h"


class Camel : public Transport {
public:
	Camel();
	~Camel();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Верблюд";
	double speed_ = 10;
	double rest_ = 30;
	double stop_first_ = 5;
	double stop_all_ = 8;
	double result_ = 0;
	int id_ = 1;
};

