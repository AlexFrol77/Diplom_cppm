#pragma once
#include"Transport.h"


class Boots : public Transport {
public:
	Boots();
	~Boots() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Ботинки - вездеходы";
	double speed_ = 6;
	double result_ = 0;
	double rest_ = 60;
	double stop_first_ = 10;
	double stop_all_ = 5;
	int id_ = 4;
};