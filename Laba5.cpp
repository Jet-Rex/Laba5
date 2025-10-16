/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double arrayX [10], arrayY [10], arrayZ [10], sumX, sumY, sumZ;;
  
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
  for (int arraySize = 0; arraySize < arraySizeX; ++arraySize) {
    cin >> arrayX[arraySize];
  }
  cout << "Введите элементы массива Y: " <<  endl;
  for (int arraySize = 0; arraySize < arraySizeY; ++arraySize) {
    cin >> arrayY[arraySize];
  }
  cout << "Введите элементы массива Z: " <<  endl;
  for (int arraySize = 0; arraySize < arraySizeZ; ++arraySize) {
    cin >> arrayZ[arraySize];
  }
  for (int arraySize = 0; arraySize < arraySizeX; ++arraySize) {
    sumX += abs(arrayX[arraySize]);
  }
  for (int arraySize = 0; arraySize < arraySizeY; ++arraySize) {
    sumY += abs(arrayY[arraySize]);
  }
  for (int arraySize = 0; arraySize < arraySizeZ; ++arraySize) {
    sumZ += abs(arrayZ[arraySize]);
  }
  
  cout << "Сумма модулей массива X: " << sumX << endl
       << "Сумма модулей массива Y: " << sumY << endl
       << "Сумма модулей массива Z: " << sumZ << endl;
}