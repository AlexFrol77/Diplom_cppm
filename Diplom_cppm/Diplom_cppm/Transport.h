#pragma once
#include<iostream>


class Transport {
public:
	Transport();

	virtual ~Transport();

	void Set_Distance(double distance);
	virtual void Print_Transport_Race();
	virtual void Print_Transport_Name();
	double Get_Distance();
	double Get_Speed();
	virtual double Get_Result();
	virtual int Get_ID();
	virtual std::string Get_Name();
	virtual void Go_Race(double distTemp);
private:
	double distance_,
			speed_ = 1,
			result_ = 0;
	int id_ = 0;
	std::string name_ = " Транспорт";
};
