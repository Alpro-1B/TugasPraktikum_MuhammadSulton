#include <iostream>

using namespace std;
int main() { 
    int firstValue, secondValue, thirdValue;
    firstValue = 10;    // ini variabel pertama
    secondValue = 8;    // ini variabel kedua
    thirdValue;     // ini variabel tambahan

    //Operasi menggunakan variabel tambahan
    thirdValue = firstValue;    //disini third value menjadi 10
    firstValue = secondValue;   //disini first value menjadi 8
    secondValue = thirdValue;   //disini second value menjadi 10

    //Output jawaban menggunakan variabel tambahan
    cout << "Jawaban menggunakan variabel tambahan:" << endl;
    cout << "First Value = "<< firstValue << endl; 
    cout << "Second Value = " << secondValue << endl << endl;

    

    //operasi tanpa menggunakan variabel tambahan
    firstValue = 10;
    secondValue = 8;

    firstValue = firstValue + secondValue;  //disini first value menjadi 18
    secondValue = firstValue - secondValue; //disini second value menjadi 10
    firstValue = firstValue - secondValue;  //disini first value menjadi 8

    cout << "Jawaban tanpa variabel tambahan:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl;

    return 0;
}


