#include "player.h"
#include"device.h"
#include<iostream>
using namespace std;

Player::Player(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
void Player::Show()
{
	cout << "Время работы аккумулятора=" << _batteryLife << "Количество треков" << _countTracs;
}


Sony::Sony(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
void Sony::Show()
{
	cout << "Время работы аккумулятора=" << _batteryLife << "Количество треков" << _countTracs;
}