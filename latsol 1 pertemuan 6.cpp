#include <iostream>
using namespace std;

int main() {
    int pilihanHari;

    // Meminta input dari pengguna
    cout << "Masukkan nomor hari (1-7): ";
    cin >> pilihanHari;

    // Struktur switch-case untuk menentukan hari
    switch (pilihanHari) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TUESDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THURSDAY" << endl;
            break;
        case 5:
            cout << "FRIDAY" << endl;
            break;
        case 6:
            cout << "SATURDAY" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Masukkan angka antara 1 hingga 7." << endl;
            break;
    }

    return 0;
}
