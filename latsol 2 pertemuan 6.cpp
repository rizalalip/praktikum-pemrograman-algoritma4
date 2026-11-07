#include <iostream>
using namespace std;

int main() {
    int nilai;
    int kehadiran; // dalam persen, misal 80%

    cout << "Masukkan nilai ujian mahasiswa (0-100): ";
    cin >> nilai;
    cout << "Masukkan persentase kehadiran (0-100): ";
    cin >> kehadiran;

    // IF Pertama (Luar): Memeriksa apakah nilai ujian cukup
    if (nilai >= 70) {
        
        // Nested IF (Dalam): Memeriksa kehadiran jika nilai sudah lulus
        if (kehadiran >= 75) {
            cout << "Selamat! Anda dinyatakan LULUS." << endl;
        } else {
            cout << "Status: TIDAK LULUS (Nilai cukup, tetapi kehadiran kurang dari 75%)." << endl;
        }

    } else {
        cout << "Status: TIDAK LULUS (Nilai ujian di bawah 70)." << endl;
    }

    return 0;
}
