/**********************************
* Автор:    Карнаухов Фёдор       *
* Название: Циклы с ветвлениями   *
* Вариант:  7                     *
***********************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double speed, gasSaturationCoefficient, frudNumber;
  double diameter = 19.1;
  double theAccelerationDueToGravity = 9.81;
  int speedLimit = 50;
  int speedStep = 1;
  double lowFroudeCoeff = 0.05;
  double lowFroudePower = 0.2;
  double highFroudeCoeff = 0.35;
  double highFroudePower = 0.1;
  double froudeThreshold = 1.0;

  for (speed = 1; speed <= speedLimit; speed += speedStep) {

    cout << "speed = ";
    cin >> speed;

    frudNumber = ((speed * speed) * 100) / (theAccelerationDueToGravity * diameter);

    if (frudNumber < froudeThreshold) {
        gasSaturationCoefficient = lowFroudeCoeff * pow((frudNumber), lowFroudePower);
      } else {
        gasSaturationCoefficient = highFroudeCoeff * pow((frudNumber), highFroudePower);
      }

    cout << "frudNum = " << frudNumber << endl
         << "gasSaturationCoefficient = " << gasSaturationCoefficient << endl;
    }

}