#include "telephone.h"
#include<iostream>
#include"device.h"
using namespace std;

Telephone::Telephone(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Telephone::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "��������� �����" << _cviaz ;
}


Samsung::Samsung(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Samsung::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "��������� �����" << _cviaz;
}


Nokia::Nokia(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Nokia::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "��������� �����" << _cviaz;
}