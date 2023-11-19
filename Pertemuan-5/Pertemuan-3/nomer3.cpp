#include <iostream>

using namespace std;

// Mendeklarasikan fungsi luasBangunDatar dengan parameter
float luasBangunDatar(int jenis, float panjang, float lebar, float alas, float tinggi, float sisi) {
    switch (jenis) {
    case 1:
        return sisi * sisi; // Luas persegi
    case 2:
        return panjang * lebar; // Luas persegi panjang
    case 3:
        return 0.5 * alas * tinggi; // Luas segitiga
    default:
        return -1; // Jenis tidak valid
    }
}

int main() {
    int userOption; // Deklarasi variabel untuk input yang dilakukan oleh user
    float panjang, lebar, tinggi, alas, sisi, luas; //Mendeklarasikan variabel dengan tipe data float karena nilai yang di input oleh user mungkin saja bilangan desimal

    // Output yang akan ditampilkan di terminal dan input yang akan dilakukan oleh user
    cout << "Program ini dibuat untuk mencari luas persegi, persegi panjang, dan segitiga" << endl << endl;
    cout << "Tentukan bangun datar yang akan anda hitung : " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Bangun datar yang akan anda hitung : ";
    cin >> userOption; // Memasukkan input dari bangun datar yang akan kita hitung (1, 2, 3)

    // Input nilai-nilai yang dibutuhkan dari user
    switch (userOption) {
        case 1:
            cout << "Masukkan nilai sisi: ";
            cin >> sisi;
            break;
        case 2:
            cout << "Masukkan nilai panjang: ";
            cin >> panjang;
            cout << "Masukkan nilai lebar: ";
            cin >> lebar;
            break;
        case 3:
            cout << "Masukkan nilai alas: ";
            cin >> alas;
            cout << "Masukkan nilai tinggi: ";
            cin >> tinggi;
            break;
        default:
            // Jika angka yang diinput tidak valid
            cout << "Maaf, jenis bangun datar tidak valid. Silahkan coba lagi!" << endl;
            return 1; // Menandakan bahwa program keluar dengan kesalahan
    }

    // Proses mencari luas bangun datar menggunakan fungsi luasBangunDatar
    luas = luasBangunDatar(userOption, panjang, lebar, alas, tinggi, sisi);

    // Menampilkan hasil luas bangun datar
    if (luas >= 0) {
        cout << "Luas dari bangun datar tersebut yaitu : " << luas << " cm" << endl;
    } else {
        cout << "Maaf, jenis bangun datar tidak valid. Silahkan coba lagi!" << endl;
    }

    return 0; // Menandakan bahwa program telah berakhir
}
