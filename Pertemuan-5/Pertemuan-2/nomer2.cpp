#include <iostream>

using namespace std;

// Mendeklarasikan fungsi hitungBebekPakTatang
void hitungBebekPakTatang() {
    int bebekPakTatang = 1000;
    int teman = 46;

    // Output diketahui
    cout << "Diketahui:" << endl;
    cout << "Bebek Pak Tatang = " << bebekPakTatang << endl;
    cout << "Teman Pak Tatang = " << teman << endl << endl;

    // Output jawaban
    cout << "Jawaban:" << endl;
    cout << "Bebek yang dibagikan kepada setiap teman adalah = " << bebekPakTatang / teman << endl;
    cout << "Sisa bebek yang dibagikan Pak Tatang adalah = " << bebekPakTatang % teman << endl;
}

int main() {
    // Memanggil fungsi hitungBebekPakTatang
    hitungBebekPakTatang();

    return 0;
}
