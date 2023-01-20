#pragma once
#include"Transport.h"
#include<cmath>


class Broomstick : public Transport {
public:
	Broomstick();
	~Broomstick() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Метла";
	double speed_ = 20;
	double result_ = 0;
	int id_ = 7;
};

