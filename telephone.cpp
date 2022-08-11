#include "telephone.h"
#include<iostream>
#include"device.h"
using namespace std;

Telephone::Telephone(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Telephone::Show()
{
	cout << "Время работы аккумулятора=" << _batteryLife << "Мобильная связь" << _cviaz ;
}


Samsung::Samsung(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Samsung::Show()
{
	cout << "Время работы аккумулятора=" << _batteryLife << "Мобильная связь" << _cviaz;
}


Nokia::Nokia(int batteryLife, string cviaz) : Device(batteryLife), _cviaz(cviaz)
{

}
void Nokia::Show()
{
	cout << "Время работы аккумулятора=" << _batteryLife << "Мобильная связь" << _cviaz;
}