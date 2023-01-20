#pragma once
#include"Transport.h"


class Plane : public Transport {
public:
	Plane();
	~Plane() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Ковёр - самолёт";
	double speed_ = 10;
	double result_ = 0;
	int id_ = 5;
};
