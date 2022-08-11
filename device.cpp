#include "device.h"
#include"electroniks.h"
#include<iostream>
using namespace std;

	Device::Device(int batteryLife) : _batteryLife(batteryLife)
	{

	}
	 void Device:: Show()
	{
		cout << _batteryLife;
	}

