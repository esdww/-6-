#pragma once
#include<iostream>
#include"device.h"
using namespace std;


class Photoaparat:virtual public Device
{

public:

	Photoaparat(int batteryLife, int MP);

	void Show()override;

protected:
	int _MP;

};

class Nicon final :public  Photoaparat
{

public:
	Nicon(int batteryLife, int MP);

	void Show()override;

private:
	int _MP;
};

