#include <iostream>

using namespace std;

// Deklarasi fungsi cetakInformasi
void datadiriMahasiswa(string nama, long long npm, string kelas, string citaCita, string motivasi) {
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Nama : " << nama << endl << endl;
    cout << "NPM : " << npm << endl << endl;
    cout << "Kelas : " << kelas << endl << endl;
    cout << "Cita-cita : " << citaCita << endl << endl;
    cout << "Motivasi masuk program studi : " << motivasi << endl << endl;
    cout << "-------------------------------------------------------------------";
}

int main() {
    // Memanggil fungsi cetakInformasi dengan memberikan nilai parameter
    datadiriMahasiswa("Muhammad Sulton", 2310631170104, "B - Informatika", "Programmer", "Karena tertarik dengan dunia IT");

    return 0;
}
