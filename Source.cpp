#include<iostream>
#include"electroniks.h"
#include"device.h"
#include"telephone.h"
#include"photoaparat.h"
#include"player.h"
#include"smartPhone.h"
using namespace std;
    int main()
    {
        IElectroniks* grocery[5];

        grocery[0] = new Samsung(48, string("Билайн"));
        grocery[1] = new Nokia(24, string("Билайн"));
        grocery[2] = new Sony(10, 100);
        grocery[3] = new Nicon(12, 90);
        grocery[4] = new SmartPhone(24, string("Билайн"), 64,120);

        bool open = true;
        while (open)
        {
            cout << "Выберите продукт : 1 - телефон Samsung, 2 - телефон Nokia, 3 - плеер Sony, 4 - фотоапарат Nicon , 5 -смартфон, 0 чтобы выйти" << endl;
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:
                grocery[0]->Show();
                break;

            case 2:
                grocery[1]->Show();
                break;

            case 3:
                grocery[2]->Show();
                break;

            case 4:
                grocery[3]->Show();
                break;

            case 5:
                grocery[4]->Show();
                break;

            case 0:
                open = false;
                break;

            default:
                cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
                break;
            }
        }
        delete grocery[0];
        delete grocery[1];
        delete grocery[2];
        delete grocery[3];
        delete grocery[4];

        return 0;
}