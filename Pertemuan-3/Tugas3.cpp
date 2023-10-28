#include <iostream>

using namespace std;
int main() {
    int userOption; //Deklarasi variabel untuk input yang dilakukan oleh user dan nilai yang dimasukkan akan memanggil nilai di switch case
    float panjang, lebar, tinggi, alas, sisi, luas;   //Menggunakan tipe data float karena bisa jadi saat mencari luas angka yang dimasukkan oleh user yaitu bilangan desimal

    //Output yang akan ditampilkan di terminal dan input yang akan dilakukan oleh user
    cout << "Program ini dibuat untuk mencari luas persegi, persegi panjang, dan segitiga" << endl << endl;
    cout << "Tentukan bangun datar yang akan anda hitung : " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Bangun datar yang akan anda hitung : ";
    cin >> userOption; //Memasukkan input dari bangun datar yang akan kita hitung (a, b, c)

    //Proses mencari luas bangun datar tersebut menggunakan switch case
    switch (userOption)
    {
    case 1:
        cout << "Bangun datar yang ingin anda cari adalah persegi" << endl;
        cout << "Masukkan nilai sisi : ";
        cin >> sisi; //Menginput nilai sisi yang dimasukkan oleh user
        luas = sisi * sisi; //Mencari nilai dari luas persegi
        cout << "Luas dari persegi yaitu : " << luas << " cm" << endl << endl;  //Hasil yang didapat
        cout << "Program mencari luas persegi selesai";
        break;
    case 2:
        cout << "Bangun datar yang ingin anda cari ialah persegi panjang" << endl;
        cout << "Masukkan nilai panjang : ";
        cin >> panjang; //User memasukkan nilai input
        cout << "Masukkan nilai lebar : ";
        cin >> lebar;   //User memasukkan nilai lebar
        luas = panjang * lebar; //Mencari luas persegi panjang
        cout << "Luas dari persegi panjang yaitu : " << luas << " cm" << endl << endl;  //Hasil yang didapat
        cout << "Program mencari luas pesegi panjang selesai";
        break;
    case 3:
        cout << "Bangun datar yang ingin anda cari ialah segitiga" << endl;
        cout << "Masukkan nilai alas : ";
        cin >> alas; //User memasukkan nilai alas
        cout << "Masukkan nilai tinggi : ";
        cin >> tinggi;  //User memasukkan nilai tinggi
        luas = (alas * tinggi) * 0.5;   //Mencari luas segitiga
        cout << "Luas dari segitiga yaitu : " << luas << " cm" << endl << endl;
        cout << "Program mencari luas segitiga selesai";
        break;
    default:
        cout << "Maaf, angka yang anda input tidak valid. Silahkan coba lagi!";
        break;
    }

    return 0;   //Menandakan bahwa program telah berakhir
}