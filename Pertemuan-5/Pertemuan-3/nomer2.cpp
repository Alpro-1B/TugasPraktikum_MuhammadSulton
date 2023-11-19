#include <iostream>

using namespace std;

// Mendeklarasikan fungsi angkaTerbesar dengan tiga parameter
void angkaTerbesar(float number1, float number2, float number3) {
    cout << "Hasil dari input di atas: " << endl;

    // Pencarian angka terbesar menggunakan if-else
    if (number1 > number2 && number1 > number3) {
        cout << "Angka terbesar: " << number1 << endl;
        if (number2 > number3) {
            cout << "Angka terbesar kedua: " << number2 << endl;
            cout << "Angka terbesar ketiga: " << number3 << endl;
        } else {
            cout << "Angka terbesar kedua: " << number3 << endl;
            cout << "Angka terbesar ketiga: " << number2 << endl;
        }
    } else if (number2 > number1 && number2 > number3) {
        cout << "Angka terbesar: " << number2 << endl;
        if (number1 > number3) {
            cout << "Angka terbesar kedua: " << number1 << endl;
            cout << "Angka terbesar ketiga: " << number3 << endl;
        } else {
            cout << "Angka terbesar kedua: " << number3 << endl;
            cout << "Angka terbesar ketiga: " << number1 << endl;
        }
    } else if (number3 > number1 && number3 > number2) {
        cout << "Angka terbesar: " << number3 << endl;
        if (number1 > number2) {
            cout << "Angka terbesar kedua: " << number1 << endl;
            cout << "Angka terbesar ketiga: " << number2 << endl;
        } else {
            cout << "Angka terbesar kedua: " << number2 << endl;
            cout << "Angka terbesar ketiga: " << number1 << endl;
        }
    } else {
        cout << "Angka yang anda masukkan tidak valid" << endl;
    }
}

int main() {
    // Mendeklarasikan variabel dengan tipe data float karena angka yang diinput tidak selalu bulat
    float number1, number2, number3;

    // Memasukkan input
    cout << "Hai, selamat datang di program saya. Sekarang kita akan mencari angka terbesar" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> number1;
    cout << "Masukkan angka kedua: ";
    cin >> number2;
    cout << "Masukkan angka ketiga: ";
    cin >> number3;
    cout << endl << endl;

    // Memanggil fungsi angkaTerbesar
    angkaTerbesar(number1, number2, number3);

    return 0; // Menandakan bahwa program telah berakhir
}
