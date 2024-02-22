#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan informasi jadwal dokter
struct JadwalDokter {
    string namaDokter;
    string tanggal;
    string lokasi;
};

// Fungsi untuk menampilkan jadwal dokter
void tampilkanJadwal(const vector<JadwalDokter>& jadwal) {
    cout << "Jadwal Dokter:\n";
    cout << "----------------------------------------\n";
    cout << "No.  Dokter          Tanggal       Lokasi\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < jadwal.size(); ++i) {
        cout << i + 1 << ".   " << jadwal[i].namaDokter << "     " << jadwal[i].tanggal << "     " << jadwal[i].lokasi << "\n";
    }

    cout << "----------------------------------------\n";
}

int main() {
    // Inisialisasi vektor untuk menyimpan jadwal dokter
    vector<JadwalDokter> jadwal;

    // Langkah 1: Masuk halaman Jadwal
    // Langkah 2: Pasien memilih dokter dan tanggal yang diinginkan.
    JadwalDokter jadwal1 = {"Dokter Zefanya", "2023-12-19", "Rumah Sakit Siloam"};
    JadwalDokter jadwal2 = {"Dokter Sinaga", "2023-12-10", "Rumah Sakit Mayapada"};
    JadwalDokter jadwal3 = {"Dokter Melisa", "2023-12-13", "Rumah Sakit Ukrida"};

    // Menambahkan jadwal ke vektor
    jadwal.push_back(jadwal1);
    jadwal.push_back(jadwal2);
    jadwal.push_back(jadwal3);

    // Langkah 3: Menampilkan Jadwal dokter yang dipilih.
    tampilkanJadwal(jadwal);

    // Langkah 4: Menampilkan Lokasi tersedia
    cout << "Lokasi Tersedia:\n";
    cout << "1. Rumah Sakit Siloam\n";
    cout << "2. Rumah Sakit Mayapada\n";
    cout << "3. Rumah Sakit Ukrida\n";

    return 0;
}

