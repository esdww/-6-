#include "player.h"
#include"device.h"
#include<iostream>
using namespace std;

Player::Player(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
void Player::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "���������� ������" << _countTracs;
}


Sony::Sony(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
void Sony::Show()
{
	cout << "����� ������ ������������=" << _batteryLife << "���������� ������" << _countTracs;
}