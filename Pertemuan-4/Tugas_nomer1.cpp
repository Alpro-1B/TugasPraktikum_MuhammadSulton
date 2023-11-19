#include <iostream>

using namespace std;
int main() {
    //Variabel untuk input yang dilakukan oleh user
    int pilihanUser;

    //Input yang dilakukan oelh user
    cout << "  Selamat datang di program mencari bilangan ganjil, genap, prima, serta faktornya" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Silahkan pilih bilangan yang ingin anda cari : " << endl;
    cout << "1. Bilangan ganjil" << endl;
    cout << "2. Bilangan genap" << endl;
    cout << "3. Bilangan prima" << endl;
    cout << "Pilihlah bilangan di atas yang ingin anda cari : ";
    cin >> pilihanUser;

    //Disini saya ingin menggunakan switch case agar output yang keluar menjadi lebih rapih
    switch (pilihanUser) {
        //Operasi penyelesaian untuk bilangan ganjil
        case 1: {
            int batas;
            cout << "Anda memilih bilangan ganjil" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan ganjil : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "batas harus lebih dari 0" << endl;
            } else {
                cout << "bilangan ganjil dari 1 hingga " << batas << " adalah : ";
                int jumlahGanjil = 0;
                for (int i = 1; i <= batas; i += 2) {
                    cout << i << " ";
                    jumlahGanjil += i;
                }
                cout << endl;
                cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;

                cout << "Faktor-faktor bilangan ganjil dari 1 hingga " << batas << " adalah: ";
                for (int i = 1; i <= batas; i++) {
                    if (batas % i == 0) {
                        cout << i << " ";
                    }
                }
                cout << endl;
            }
            break;
        }

        //Operasi penyelesaian untuk bilangan genap
        case 2: {
            int batas;
            cout << "Anda memilih bilangan genap" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan genap : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "batas harus lebih dari 0" << endl;
            } else {
                cout << "bilangan genap dari angka 2 hingga " << batas << " adalah : ";
                int jumlahGenap = 0;
                for (int j = 2; j <= batas; j += 2) {
                    cout << j << " ";
                    jumlahGenap += j;
                }
                cout << endl;
                cout << "Jumlah bilangan genap: " << jumlahGenap << endl;

                cout << "Faktor-faktor bilangan genap dari 2 hingga " << batas << " adalah: ";
                for (int j = 2; j <= batas; j += 2) {
                    if (batas % j == 0) {
                        cout << j << " ";
                    }
                }
                cout << endl;
            }
            break;
        }

        //Operasi penyelesaian untuk bilangan prima
        case 3: {
            int batas;

            do {
                cout << "Masukkan batas bilangan positif untuk mencari bilangan prima : ";
                cin >> batas;
            } while (batas <= 0);

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

            cout << "Faktor-faktor bilangan prima dari 1 hingga " << batas << " adalah: ";
            for (int k = 2; k <= batas; ++k) {
                if (batas % k == 0) {
                    cout << k << " ";
                }
            }
            cout << endl;
            break;
        }
        //Jika angka yang dimasukkan tidak sesuai maka output yang muncul adalah kalimat dibawah ini
        default:
            cout << "Angka yang anda masukkan tidak valid, yang benar dong input angkanya masbro.";
            break;
    }

    return 0;   //Menandakan bahwa program telah berakhir
}
