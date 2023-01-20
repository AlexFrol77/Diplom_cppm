#pragma once
#include"Transport.h"



class Eagle : public Transport {
public:
	Eagle();
	~Eagle() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	double Get_Result() override;
	void Go_Race(double distTemp) override;
private:
	std::string name_ = " Îð¸ë";
	double speed_ = 8;
	double result_ = 0;
	int id_ = 6;
};
