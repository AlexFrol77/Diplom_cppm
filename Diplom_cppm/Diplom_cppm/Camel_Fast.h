#pragma once
#include"Transport.h"


class Camel_Fast : public Transport {
public:
	 Camel_Fast();
	~Camel_Fast() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double dist) override;
private:
	std::string name_ = " Верблюд - скороход";
	double speed_ = 40;
	double result_ = 0;
	double rest_ = 10;
	double stop_first_ = 5;
	double stop_second_ = 6.5;
	double stop_all_ = 8;
	int id_ = 2;
};


