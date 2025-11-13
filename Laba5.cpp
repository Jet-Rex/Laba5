/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/


#include <iostream>
#include <cmath>

using namespace std;

double absoluteSum(double array[], int size) {
  double sum = 0;
  for (int elementIndex = 0; elementIndex < size; ++elementIndex) {
    sum += abs(array[elementIndex]);
  }
  return sum; 
}

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
  
  sumX = absoluteSum(arrayX, arraySizeX);
  sumY = absoluteSum(arrayY, arraySizeY);
  sumZ = absoluteSum(arrayZ, arraySizeZ);
  
  cout << "Сумма модулей массива X: " << sumX << endl
       << "Сумма модулей массива Y: " << sumY << endl
       << "Сумма модулей массива Z: " << sumZ << endl;
}