#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void fillMatrix(double matr[7][5] ,int,int);
void showMatrix(double matr[7][5],int,int);
void fillArray(double matr[7][5], double arr[],int,int);
void showArray(double arr[],int);
void bubbleSort(double arr[],int);
int main() {
    srand(time(NULL));
    const int ROWS = 7;
    const int COLS = 5;
    double matrix[ROWS][COLS];
    double array[ROWS]{};
    fillMatrix(matrix, ROWS, COLS);
    cout << "The matrix is: " << endl;
    showMatrix(matrix, ROWS, COLS);
    fillArray(matrix, array, ROWS, COLS);
    cout << "The array is: ";
    showArray(array,ROWS);
    bubbleSort(array,ROWS);
    cout << "Sorted array: ";
    showArray(array,ROWS);
    return 0;
}
void fillMatrix(double matr[7][5],int rs, int cl){
    double random;
    for (int i = 0; i < rs; ++i) {
        for (int j = 0; j < cl; ++j) {
             random = rand()%201-100;
             matr[i][j] = random / 10;
        }
    }
}
void showMatrix(double matr[7][5], int rs, int cl){
    for (int i = 0; i < rs; ++i) {
        for (int j = 0; j < cl; ++j) {
         cout << setw(5) << matr[i][j];
        }
        cout << endl;
    }
}
void fillArray(double matr[7][5], double arr[], int rs, int cl){
    double max;
    for (int i = 0; i < rs; ++i) {
        max = matr[i][0];
        for (int j = 0; j < cl; ++j) {
             if(matr[i][j] >= max){
                 max = matr[i][j];
                 arr[i] = max;
             }
        }
    }
}
void showArray(double arr[], int rs){
    for (int i = 0; i < rs; ++i) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}
void bubbleSort(double arr[], int rs) {
      double temp;
      for (int i = 0; i < rs; ++i) {
          for (int j = 0; j < rs - 1; ++j) {
              if(arr[j] < arr [j+1]) {
                  temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
              }
         }
      }
  }
