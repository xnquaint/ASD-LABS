#include <iostream>
#include <iomanip>
using namespace std;

void outArray(char array[]);
void firstArray(char array1[]);
void secondArray(char array2[]);
void thirdArray(char array1[], char array2[], char array3[]);
char maxOfArray(char array3[]);
char minOfArray(char array3[]);
int  numberOfSymbols(char max, char min, char array3[]);

int main() {
 int  number;
 char max;
 char min;
 char array1[10]; // ініціалізація масивів
 char array2[10];
 char array3[10];

 firstArray(array1); // обчислення 1-го масиву
 secondArray(array2); // обчислення 2-го масиву
 thirdArray(array1,array2,array3); // обчислення 3-го масиву
 max = maxOfArray(array3); // обчислення максимального значення 3-го масиву
 min = minOfArray(array3); // обчислення мінімального значення 3-го масиву
 number = numberOfSymbols(max, min, array3); // обчислення к-сті елементів між мінімумом і максимумом

 cout << "First array: "; outArray(array1);
 cout << "Second array:"; outArray(array2);
 cout << "Third array: "; outArray(array3);
 cout <<  "Max of Array: " << max << endl;
 cout << "Min of Array: " << min << endl;
 cout << "----------------------------------------------" << endl;
 cout << "The number of symbols between min and max: " << number << endl;
 cout << "----------------------------------------------" << endl;
 return 0;
}
void outArray(char array[]){
    for (int i=0; i < 10; i++){
        cout << setw(3) << array[i];
    }
    cout << endl;
}
void firstArray(char array1[]) {
    for(int i = 0; i < 10; i++) {
        array1[i] = 73 - i;
    }
}
void secondArray(char array2[]) {
    for (int i = 0; i < 10; i++) {
        array2[i] = 64 + 2 * i;
    }
}
void thirdArray(char array1[], char array2[], char array3[]){
    for (int i = 0; i < 10; i++) {
      array3[i] = 0;
    }
    for(int i = 0; i < 10; i++){
        for( int j = 0; j < 10; j++){
            if(array1[i] == array2[j]){
                array3[i] = array2[j];
            }
        }
    }
}
char maxOfArray(char array3[]){
    char maximum = 0;
    for(int i = 0; i < 10; i++){
        if(maximum < array3[i]){
            maximum = array3[i];
        }
    }
    return maximum;
}
char minOfArray(char array3[]){
    char minimum = 127;
    for(int i = 0; i < 10; i++){
        if(minimum > array3[i] && array3[i] != 0){
            minimum = array3[i];
        }
    }
    return minimum;
}
int numberOfSymbols(char max, char min, char array3[]){
    int quantity = 0;
    for (int i = 0; i < 10; i++){
        if((array3[i] != max) && (array3[i] != min) && (array3[i] != 0)){
            quantity += 1;
        }
    }
    return quantity;
}
