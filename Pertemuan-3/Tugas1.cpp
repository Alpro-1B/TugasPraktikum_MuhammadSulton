#include <iostream>

using namespace std;
int main()
{
    // Mendeklarasikan variabel
    string namaDepan, namaBelakang, kelas; // Menggunakan string karena yang kita input adalah sebuah kalimat
    long long NPM;                         // Menggunakan tipe data long sebanyak 2 kali karena jumlah NPM cukup besar
    int score;                             // Nilai dari yang diberikan di soal

    // Memasukkan input dan output
    cout << "Silahkan isi data diri anda terlebih dahulu!" << endl
         << endl;
    cout << "Nama : ";
    cin >> namaDepan >> namaBelakang;   //Input nama lengkap
    cout << "NPM : ";   
    cin >> NPM; //NPM harus full angka, jika tidak maka akan error
    cout << "Kelas : ";
    cin >> kelas;   //Input kelas
    cout << "Nilai : ";
    cin >> score;   //Input nilai

    // Menggunakan if-else untuk suatu untuk mengevaluasi nilai skor yang telah ditentukan
    if (score >= 90 && score <= 100) // Jika score bernilai 0-100, maka nilai A.
    {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    }
    else if (score >= 80 && score < 90) // Jika score bernilai 80-89, maka nilai B.
    {
        cout << "Anda mendapatkan nilai B." << endl;
    }
    else if (score >= 70 && score < 80) // Jika score bernilai 70-79, maka nilai C.
    {
        cout << "Anda mendapatkan nilai C." << endl;
    }
    else if (score >= 60 && score < 70) // Jika score bernilai 60-69, maka nilai D.
    {
        cout << "Anda mendapatkan nilai D." << endl;
    }
    else if (score >= 0 && score < 60) // Jika score bernilai 0-60, maka nilai E.
    {
        cout << "Anda mendapatkan nilai E." << endl;
    }
    else
    {
        // Jika score yang dimasukkan diluar rentang 0-100
        cout << "Mohon maaf, nilai yang anda masukkan tidak valid. Nilai harus berada dalam rentang 0-100" << endl;
    }

    return 0;   //Menandakan bahwa program telah berakhir.
}