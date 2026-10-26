/**********************************
* Автор:    Карнаухов Фёдор       *
* Название: Циклы с ветвлениями   *
* Вариант:  7                     *
***********************************/


#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double speed, gasSaturationCoefficient, frudNum;
    const double diameter = 19.1;
    const double theAccelerationDueToGravity = 9.81;

    for (speed = 1; speed <= 50; speed += 1) {

        cout << "speed = ";
        cin >> speed;

        frudNum = ((speed * speed) * 100) / (theAccelerationDueToGravity * diameter);

        if (frudNum < 1) {
            gasSaturationCoefficient = 0.05 * pow((frudNum), 0.2);
        } else {
            gasSaturationCoefficient = 0.35 * pow((frudNum), 0.1);
        }

        cout << "frudNum = " << frudNum << endl;
        cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;
    }
}


















/*
код, написанный до моей эволюции из обезьяны в человека 
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double speed, gasSaturationCoefficient, frudNum;
    const double diameter = 19.1;
    const double theAccelerationDueToGravity = 9.81;

    cout << "speed = ";
    cin >> speed;

    for (speed = 1; speed <= 50; speed += 1) {

        frudNum = ((speed * speed) * 100) / (theAccelerationDueToGravity * diameter);

        if (frudNum < 1) {
            gasSaturationCoefficient = 0.05 * pow((frudNum), 0.2);
        }
        else {
            gasSaturationCoefficient = 0.35 * pow((frudNum), 0.1);
        }

        if (speed == 1) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }

        if (speed == 2) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }

        if (speed == 5) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }
        if (speed == 10) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }
        if (speed == 20) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }
        if (speed == 50) {

            cout << "frudNum = " << frudNum << endl;
            cout << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;

        }


    }
}
*/