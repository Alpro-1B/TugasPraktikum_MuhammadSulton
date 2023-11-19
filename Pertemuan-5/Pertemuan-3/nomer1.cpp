#include <iostream>
using namespace std;

// Mendeklarasikan fungsi
void nilaiSkor();

int main() {
    // Memanggil fungsi nilaiSkor
    nilaiSkor();

    return 0;   // Menandakan bahwa program telah berakhir
}

    // Menerapkan fungsi nilaiSkor
    void nilaiSkor() {

    // Mendeklarasikan variabel
    string namaDepan, namaBelakang, kelas;
    long long NPM;
    int score;

    // Memasukkan input dan output
    cout << "Silahkan isi data diri anda terlebih dahulu!" << endl << endl;
    cout << "Nama : ";
    cin >> namaDepan >> namaBelakang;
    cout << "NPM : ";
    cin >> NPM;
    cout << "Kelas : ";
    cin >> kelas;
    cout << "Nilai : ";
    cin >> score;

    // Menggunakan if-else untuk mengevaluasi nilai skor yang telah ditentukan
    if (score >= 90 && score <= 100) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else if (score >= 0 && score < 60) {
        cout << "Anda mendapatkan nilai E." << endl;
    } else {
        // Jika score yang dimasukkan diluar rentang 0-100
        cout << "Mohon maaf, nilai yang anda masukkan tidak valid. Nilai harus berada dalam rentang 0-100" << endl;
    }
}
