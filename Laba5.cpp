/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double arrayX [10], arrayY [10], arrayZ [10], sumX, sumY, sumZ;
  
  int arraySizeX;
  cout << "Введите размер массива X: ";
  cin >> arraySizeX;
  int arraySizeY;
  cout << "Введите размер массива Y: ";
  cin >> arraySizeY;
  int arraySizeZ;
  cout << "Введите размер массива Z: ";
  cin >> arraySizeZ;
  
  cout << "Введите элементы массива X: " <<  endl;
  for (int elementIndex = 0; elementIndex < arraySizeX; ++elementIndex) {
    cin >> arrayX[elementIndex];
  }
  cout << "Введите элементы массива Y: " <<  endl;
  for (int elementIndex = 0; elementIndex < arraySizeY; ++elementIndex) {
    cin >> arrayY[elementIndex];
  }
  cout << "Введите элементы массива Z: " <<  endl;
  for (int elementIndex = 0; elementIndex < arraySizeZ; ++elementIndex) {
    cin >> arrayZ[elementIndex];
  }
  for (int elementIndex = 0; elementIndex < arraySizeX; ++elementIndex) {
    sumX += abs(arrayX[elementIndex]);
  }
  for (int elementIndex = 0; elementIndex < arraySizeY; ++elementIndex) {
    sumY += abs(arrayY[elementIndex]);
  }
  for (int elementIndex = 0; elementIndex < arraySizeZ; ++elementIndex) {
    sumZ += abs(arrayZ[elementIndex]);
  }
  
  cout << "Сумма модулей массива X: " << sumX << endl
       << "Сумма модулей массива Y: " << sumY << endl
       << "Сумма модулей массива Z: " << sumZ << endl;
}