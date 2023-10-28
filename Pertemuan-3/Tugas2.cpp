#include <iostream>

using namespace std;
int main()
{
    // Mendeklarasikan variabel dengan tipe data float karena angka yang diinput tidak selalu bulat
    float number1, number2, number3;

    // Memasukkan input dan output
    cout << "Hai, selamat datang di program saya. Sekarang kita akan mencari angka terbesar" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> number1;
    cout << "Masukkan angka kedua : ";
    cin >> number2;
    cout << "Masukkan angka ketiga : ";
    cin >> number3;
    cout << endl
         << endl;
    cout << "Hasil dari input diatas : " << endl;

    // Pencarian angka terbesar menggunakan if-else, harus menggunakan operator && untuk menandakan bahwa kedanya harus benar
    if (number1 > number2 && number1 > number3) // Pengkondisian jika nomer 1 lebih besar daripada nomer 2 dan 3, maka angka terbesar ialah nomer 1.
    {
        cout << "Angka terbesar ialah : " << number1 << endl;
        if (number2 > number3) // Pengkondisian jika nomer 2 lebih besar dari nomer 3, maka angka terbesar kedua ialah nomer 2.
        {
            cout << "Angka terbesar kedua ialah : " << number2 << endl;
            cout << "Angka terbesar ketiga ialah : " << number3 << endl;
        }
        if (number3 > number2) // Pengkondisian jika nomer 3 lebih besar dari nomer 2, maka angka terbesar kedua ialah nomer 3.
        {
            cout << "Angka terbesar kedua ialah : " << number3 << endl;
            cout << "Angka terbesar ketiga ialah : " << number2 << endl;
        }
    }
    else if (number2 > number1 && number2 > number3) // Pengkondisian jika nomer 2 lebih besar dari nomer 1 dan nomer 3, maka angka terbesar ialah nomer 2.
    {
        cout << "Angka terbesar ialah : " << number2 << endl;
        if (number1 > number3) // Pengkondisian jika nomer 1 lebih besar dari nomer 3, maka angka terbesar kedua ialah nomer 1.
        {
            cout << "Angka terbesar kedua ialah : " << number1 << endl;
            cout << "Angka terbesar ketiga ialah : " << number3 << endl;
        }
        if (number3 > number1) // Pengkondisian jika nomer 3 lebih besar dari nomer 1, maka angka terbesar kedua ialah nomer 3.
        {
            cout << "Angka terbesar kedua ialah : " << number3 << endl;
            cout << "Angka terbesar ketiga ialah : " << number1 << endl;
        }
    }
    else if (number3 > number1 && number3 > number2) // Pengkondisian jika nomer 3 lebih besar dari nomer nomer 1 dan nomer dua, maka angka terbesar ialah nomer 3
    {
        cout << "Angka terbesar ialah : " << number3 << endl;
        if (number1 > number2)
        { // Pengkondisian jika nomer 1 lebih besar dari nomer 2, maka angka terbesar kedua ialah nomer 1.
            cout << "Angka terbesar kedua ialah : " << number1 << endl;
            cout << "Angka terbesar ketiga ialah : " << number2 << endl;
        }
        if (number2 > number1) // Pengkondisian jika nomer 2 lebih besar dari nomer 1, maka angka terbesar kedua ialah nomer 2.
        {
            cout << "Angka terbesar kedua ialah : " << number2 << endl;
            cout << "Angka terbesar ketiga ialah : " << number1 << endl;
        }
    }
    else
    {
        cout << "Angka yang anda masukkan tidak valid" << endl; // Jika angka yang dimasukkan bukan lebih dari maupun kurang dari, tetapi lebih dari sama dengan dan kurang dari sama dengan
    }

    return 0; // Menandakan bahwa program telah berakhir
}