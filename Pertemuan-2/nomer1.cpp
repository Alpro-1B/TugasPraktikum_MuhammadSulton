#include <iostream>

using namespace std;
int main() {
    int firstValue, secondValue, thirdValue;
    firstValue = 10;    // ini variabel pertama
    secondValue = 8;    // ini variabel kedua
    thirdValue = 2;     // ini variabel tambahan

    //Output diketahui
    cout << "Diketahui:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl;
    cout << "Third Value = " << thirdValue << endl << endl; 

    //Output jawaban menggunakan variabel tambahan
    cout << "Jawaban menggunakan variabel tambahan:" << endl;
    cout << "First Value = " << (firstValue - thirdValue) << endl;
    cout << "Second Value = " << (secondValue + thirdValue) << endl << endl;

    //output tanpa menggunakan variabel tambahan
    cout << "Jawaban tanpa variabel tambahan:" << endl;
    cout << "First Value= " << (10 - 2) << endl;
    cout << "Second Value= " << (8 + 2) << endl;

    return 0;
}
