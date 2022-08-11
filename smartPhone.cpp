#include "smartPhone.h"
#include<iostream>
#include"telephone.h"
#include"photoaparat.h"
#include"player.h"
using namespace std;

SmartPhone::SmartPhone(int batteryLife, string cviaz, int MP, int countTracs): Device(batteryLife), Telephone(cviaz), Photoaparat(MP), Player(countTracs)
{
}

void SmartPhone::Show()
{
    cout << "����� ������ ������������ " << _batteryLife << endl;
    cout << "�������� ��������� �����" << _cviaz << endl;
    cout << "���������� ������������" << _MP << endl;
    cout << "���������� ������" << _countTracs << endl;
}
