#include <iostream>

using namespace std;

// Mendeklarasikan function
void bilanganGanjil(int batas);
void bilanganGenap(int batas);
void bilanganPrima(int batas);
void faktor(int batas);

int main() {
    // Variabel untuk input yang dilakukan oleh user
    int pilihanUser;

    // Input yang dilakukan oleh user
    cout << "  Selamat datang di program mencari bilangan ganjil, genap, prima, serta faktornya" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Silahkan pilih bilangan yang ingin anda cari : " << endl;
    cout << "1. Bilangan ganjil" << endl;
    cout << "2. Bilangan genap" << endl;
    cout << "3. Bilangan prima" << endl;
    cout << "Pilihlah bilangan di atas yang ingin anda cari : ";
    cin >> pilihanUser;

    int batas;

    switch (pilihanUser) {
        // Operasi penyelesaian untuk bilangan ganjil
        case 1: {
            cout << "Anda memilih bilangan ganjil" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan ganjil : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "Batas harus lebih dari 0" << endl;
            } else {
                bilanganGanjil(batas);
                faktor(batas);
            }
            break;
        }

        // Operasi penyelesaian untuk bilangan genap
        case 2: {
            cout << "Anda memilih bilangan genap" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan genap : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "Batas harus lebih dari 0" << endl;
            } else {
                bilanganGenap(batas);
                faktor(batas);
            }
            break;
        }

        // Operasi penyelesaian untuk bilangan prima
        case 3: {
            cout << "Anda memilih bilangan prima" << endl;
            do {
                cout << "Masukkan batas bilangan positif untuk mencari bilangan prima : ";
                cin >> batas;
            } while (batas <= 0);

            bilanganPrima(batas);
            faktor(batas);
            break;
        }

        // Jika angka yang dimasukkan tidak sesuai maka output yang muncul adalah kalimat dibawah ini
        default:
            cout << "Angka yang anda masukkan tidak valid, silakan pilih 1, 2, atau 3." << endl;
            break;
    }

    return 0;   // Menandakan bahwa program telah berakhir
}

//  Menerapkan atau meng-implementasikan function
void bilanganGanjil(int batas) {
    cout << "Bilangan ganjil dari 1 hingga " << batas << " adalah : ";
    int jumlahGanjil = 0;
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGanjil += i;
    }
    cout << endl;
    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;
}

void bilanganGenap(int batas) {
    cout << "Bilangan genap dari 2 hingga " << batas << " adalah : ";
    int jumlahGenap = 0;
    for (int j = 2; j <= batas; j += 2) {
        cout << j << " ";
        jumlahGenap += j;
    }
    cout << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
}

void bilanganPrima(int batas) {
    cout << "Bilangan prima antara 1 dan " << batas << " adalah: ";
    int jumlahPrima = 0;

    for (int k = 2; k <= batas; ++k) {
        int bilanganPrima = 1;
        for (int l = 2; l * l <= k; ++l) {
            if (k % l == 0) {
                bilanganPrima = 0;
                break;
            }
        }
        if (bilanganPrima == 1) {
            cout << k << " ";
            jumlahPrima += k;
        }
    }
    cout << endl;
    cout << "Jumlah bilangan prima: " << jumlahPrima << endl;
}

void faktor(int batas) {
    cout << "Faktor-faktor bilangan dari 1 hingga " << batas << " adalah: ";
    for (int i = 1; i <= batas; i++) {
        if (batas % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
