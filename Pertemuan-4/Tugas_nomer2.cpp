#include <iostream>

using namespace std;

int main()
{
    // Membuat segitiga sama kaki dengan kumpulan bintang
    int tinggi;

    // Menginput tinggi segitiga oleh user
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
    {
        // Membuat spasi sebelum bintang untuk membuat bentuk piramida
        for (int j = 1; j <= tinggi - i; j++)
        {
            cout << " ";
        }

        // Menampilkan bintang
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        cout << endl; // Pindah ke baris berikutnya setelah setiap baris bintang selesai
    }

    return 0; // Menandakan bahwa program telah berakhir
}
