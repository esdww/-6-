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
    cout << "Время работы аккумулятора " << _batteryLife << endl;
    cout << "Оператор мобильной связи" << _cviaz << endl;
    cout << "Количество мегапикселей" << _MP << endl;
    cout << "Количество треков" << _countTracs << endl;
}
