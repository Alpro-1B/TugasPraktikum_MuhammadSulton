#include <iostream>

using namespace std;

// Menambahkan fungsi tukarNilai menggunakan parameter
void tukarNilai(int &firstValue, int &secondValue) {
    int thirdValue = firstValue;
    firstValue = secondValue;
    secondValue = thirdValue;
}

int main() {
    int firstValue, secondValue, thirdValue;

    // Memberikan nilai awal untuk thirdValue
    thirdValue = 0;
    firstValue = 10; // ini variabel pertama
    secondValue = 8; // ini variabel kedua

    // Operasi menggunakan variabel tambahan
    thirdValue = firstValue;  // disini third value menjadi 10
    firstValue = secondValue; // disini first value menjadi 8
    secondValue = thirdValue; // disini second value menjadi 10

    // Output jawaban menggunakan variabel tambahan
    cout << "Jawaban menggunakan variabel tambahan:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl << endl;

    // Operasi tanpa menggunakan variabel tambahan
    firstValue = 10;
    secondValue = 8;

    // Menggunakan fungsi tukarNilai untuk menukar nilai
    tukarNilai(firstValue, secondValue);

    cout << "Jawaban tanpa variabel tambahan:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl;

    return 0;
}
