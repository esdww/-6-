#pragma once
#include<iostream>
#include"electroniks.h"
#include"device.h"
using namespace std;

class Telephone: virtual public Device
{
public:

	Telephone(int batteryLife, string cviaz);
	
	void Show()override;

protected:
	string _cviaz;
};

class Samsung final :public Telephone
{
public:
	
	Samsung(int batteryLife, string cviaz);
	void Show()override;

private:
	string _cviaz;

};

class Nokia final :public Telephone
{
public:
	Nokia(int batteryLife, string cviaz);
	void Show();

private:
	string _cviaz;
};

