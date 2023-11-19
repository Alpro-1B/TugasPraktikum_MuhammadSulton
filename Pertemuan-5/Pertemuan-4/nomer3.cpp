#include <iostream>

using namespace std;

// Mendeklarasikan fungsi dengan parameter
void deretBilanganFibonacci(int n);

int main() {
    // Membuat program deret bilangan Fibonacci
    cout << " Selamat datang di program menghitung deret bilangan Fibonacci" << endl;
    cout << "===============================================================" << endl << endl;

    // Deklarasikan variabel untuk input jumlah bilangan deret Fibonacci
    int n;

    // Menginput jumlah bilangan dalam deret Fibonacci oleh user
    cout << "Masukkan jumlah bilangan yang anda mau dalam deret Fibonacci : ";
    cin >> n;

    // Memanggil fungsi deretBilanganFibonacci dengan parameter n
    deretBilanganFibonacci(n);

    cout << endl << "Program berakhir" << endl;

    return 0; // Menunjukkan bahwa program telah berakhir
}

// Menerapkan function deretBilanganFibonacci dengan parameter
void deretBilanganFibonacci(int n) {
    // Deklarasi variabel untuk dimasukkan kedalam looping
    int nilai1 = 0;
    int nilai2 = 1;

    // Membuat program deret Fibonacci dengan for loop dan if else
    cout << "Deret Fibonacci dari angka yang anda masukkan adalah = ";
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            cout << i << " ";
        } else {
            int next = nilai1 + nilai2; // Disini nilai dari variabel next menjadi 1
            nilai1 = nilai2;            // Disini nilai 1 menjadi bernilai 1
            nilai2 = next;              // Disini nilai 2 menjadi 1
            cout << next << " ";
        }
    }
}
