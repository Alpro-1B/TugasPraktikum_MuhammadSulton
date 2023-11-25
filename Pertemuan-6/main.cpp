#include <iostream>

using namespace std;

int main()
{
    // Mendeklarasikan variabel
    int jumlahArray;

    // Memasukkan input dari user
    cout << "  Selamat datang di program mencari nilai tertinggi" << endl;
    cout << "_______________________________________________________" << endl << endl;

    // Menggunakan looping untuk memasukkan kembali nilai apabila nilai yang dimasukkan kurang dari atau sama dengan nol.
    do
    {
        cout << "Berapa jumlah array yang ingin anda masukkan : ";
        cin >> jumlahArray;
        if (jumlahArray <= 0)
        {
            cout << "Masukkan nilai positif!";
        }

    } while (jumlahArray <= 0);

    // Mendeklarasikan Array
    int nilai[jumlahArray];

    // Memasukkan nilai dari pengguna ke dalam array
    for (int i = 0; i < jumlahArray; ++i)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Mencari nilai tertinggi
    int nilaiTertinggi = nilai[0];

    for (int i = 1; i < jumlahArray; ++i)
    {
        if (nilai[i] > nilaiTertinggi)
        {
            nilaiTertinggi = nilai[i];
        }
    }

    // Menampilkan nilai tertinggi
    cout << "Nilai tertinggi yang dimasukkan adalah: " << nilaiTertinggi << endl;

    // Deklarasi variabel serta mencari tahu apakah input dari user masuk kedalam array atau tidak
    int pencarianNilai;
    bool nilaiDitemukan = false; // Inisialisasi nilaiDitemukan menjadi false

    cout << "Masukkan nilai yang ingin anda cari : ";
    cin >> pencarianNilai;

    // Mencari nilai dalam array dan menampilkan indeksnya
    for (int i = 0; i < jumlahArray; i++)
    {
        if (nilai[i] == pencarianNilai)
        {
            cout << pencarianNilai << " Merupakan nilai yang berada di dalam array pada indeks " << i << endl;
            nilaiDitemukan = true; // Mengubah nilaiDitemukan menjadi true karena nilai ditemukan
            break;                 // Keluar dari loop karena nilai sudah ditemukan
        }
    }

    // Menampilkan pesan jika nilai tidak ditemukan
    if (!nilaiDitemukan)
    {
        cout << "Nilai yang anda masukkan tidak berada di dalam array." << endl;
    }

    return 0;
}
