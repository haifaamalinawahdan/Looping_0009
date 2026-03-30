#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" <<endl;
    cout << "2. Teknil Elektro" <<endl;
    cout << "3. Sistem Informasi" <<endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
             namaJurusan = "Teknologi Informasi";
             statusKuota = "Tersedia (15 kursi)";
             break;
        case 2:
             namaJurusan = "Teknik Eleketro";
             statusKuota = "Kuota Penuh!";
             break;
        case 3:
             namaJurusan = "Sistem Informasi";
             statusKuota = "Tersedia (5 kursi)";
             break;
        default:
             namaJurusan = "Tidak Diketahui";
             statusKuota = "Error: Kode Tidak Valid";
    }
}

void output(){
    cout << "\n=== HASIL SELEKSI ===" <<endl;
    cout << "Jurusan Pilihan : " << namaJurusan <<endl;
    cout << "Status Kuota    : " << statusKuota <<endl;
    cout << "----------------------------------" <<endl;
}

int main (){
    input();
    pilihanJurusan();
    output();

    return 0;
}
