#include <iostream>

using namespace std;

int main() {
    // Menginput bilangan mana yang ingin dicari oleh user, apakah ganjil, genap, atau prima.
    int pilihanUser;

    cout << "  Selamat datang di program mencari bilangan ganjil, genap, prima, serta faktornya" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Silahkan pilih bilangan yang ingin anda cari : " << endl;
    cout << "1. Bilangan ganjil" << endl;
    cout << "2. Bilangan genap" << endl;
    cout << "3. Bilangan prima" << endl;
    cout << "Pilihlah bilangan di atas yang ingin anda cari : ";
    cin >> pilihanUser;

    // Operasi penyelesaian mencari bilangan ganjil, genap, dan prima
    switch (pilihanUser) {
        case 1: {
            int batas;
            cout << "Anda memilih bilangan ganjil" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan ganjil : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "batas harus lebih dari 0" << endl;
            } else {
                cout << "bilangan ganjil dari 1 hingga " << batas << " adalah : ";
                for (int i = 1; i <= batas; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
            }
            break;
        }

        case 2: {
            int batas;
            cout << "Anda memilih bilangan genap" << endl;
            cout << "Masukkan batas tertinggi untuk bilangan genap : ";
            cin >> batas;
            if (batas <= 0) {
                cout << "batas harus lebih dari 0" << endl;
            } else {
                cout << "bilangan genap dari angka 2 hingga " << batas << " adalah : ";
                for (int j = 2; j <= batas; j += 2) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {
            int batas;

            do {
                cout << "Masukkan batas bilangan positif untuk mencari bilangan prima : ";
                cin >> batas;
            } while (batas <= 0);

            cout << "Bilangan prima antara 1 dan " << batas << " adalah: ";

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
                }
            }

            break;
        }

        default:
            cout << "Maaf, angka yang anda input tidak valid. Silahkan coba lagi.";
            break;
    }

    return 0;   //Menandakan bahwa program telah berakhir.
}
