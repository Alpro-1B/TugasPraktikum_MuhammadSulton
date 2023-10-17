#include <iostream>

using namespace std;
int main() {
    int bebekPakTatang, teman;
    bebekPakTatang = 1000;
    teman = 46;

    //output diketahui
    cout << "Diketahui:" << endl;
    cout << "Bebek Pak Tatang = " << bebekPakTatang << endl;
    cout << "Teman Pak Tatang = " << teman << endl << endl;

    cout << "Jawaban:" << endl;
    cout << "Bebek yang dibagikan kepada setiap teman ialah = " << bebekPakTatang / teman << endl;
    cout << "Sisa bebek yang dibagikan Pak Tatang ialah = " << bebekPakTatang % teman << endl;

    return 0;
}