#include "photoaparat.h"
#include"device.h"
#include<iostream>
using namespace std;

Photoaparat::Photoaparat(int batteryLife, int MP) : Device(batteryLife), _MP(MP)
{

}
void Photoaparat::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "���������� ������������" << _MP;
}

Nicon::Nicon(int batteryLife, int MP) : Device(batteryLife), _MP(MP)
{

}
void Nicon::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "���������� ������������" << _MP;
}