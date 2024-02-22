#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    double tugas;
    int uts;
    int uas;
    char nilaiHuruf;
    double ipk;
};

char konversiNilaiKeHuruf(double nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

double hitungIPK(double tugas, int uts, int uas) {
    double nilai_rata_rata = (tugas + uts + uas) / 3.0;
    return nilai_rata_rata / 25.0;
}

void clearInputBuffer() {
    cin.ignore(32767, '\n');
}

int main() {
    const int ROWS = 6;
    const int COLUMNS = 5;
    Mahasiswa mhs[ROWS][COLUMNS] = {
        {{"20235520001", "Ezra Cristiano", 80, 70, 65}, {}},
        {{"20235520002", "Jeriko Ichtus Seo", 75, 90, 70}, {}},
        {{"20235520003", "Michael Jufferson", 69, 90, 80}, {}},
        {{"20235520004", "Fridolf Torotodo Zega", 70, 75, 70}, {}},
        {{"20235520005", "Asiholan P Pasaribu", 70, 60, 95}, {}},
        {{"20235520006", "Bryan L Simarmata", 80, 93, 70}, {}}
    };

    for(int i = 0; i < ROWS; i++) {
        mhs[i][0].nilaiHuruf = konversiNilaiKeHuruf((mhs[i][0].tugas + mhs[i][0].uts + mhs[i][0].uas) / 3.0);
        mhs[i][0].ipk = hitungIPK(mhs[i][0].tugas, mhs[i][0].uts, mhs[i][0].uas);
    }

    bool tampilkan_lagi;
    do {
        cout << "No\tNIM\t\tNama\t\t\tTugas\tNilai UTS\tNilai UAS\tNilai Huruf\tIPK" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;

        for(int i = 0; i < ROWS; i++) {
            cout << i + 1 << "\t" << mhs[i][0].NIM << "\t" << mhs[i][0].nama << "\t\t" 
                << mhs[i][0].tugas << "\t\t" << mhs[i][0].uts << "\t\t" << mhs[i][0].uas 
                << "\t\t" << mhs[i][0].nilaiHuruf << "\t\t" << fixed << mhs[i][0].ipk << endl;
        }

        int nomor_mahasiswa;
        bool valid;
        do {
            cout << "Pilih nomor mahasiswa: ";
            cin >> nomor_mahasiswa;
            valid = nomor_mahasiswa >= 1 && nomor_mahasiswa <= ROWS;
            if (!valid) {
                cout << "Nomor mahasiswa tidak valid. Silakan masukkan nomor mahasiswa yang benar." << endl;
                clearInputBuffer(); 
            }
        } while (!valid);

        Mahasiswa m = mhs[nomor_mahasiswa - 1][0];
        cout << "Nilai rata-rata untuk " << m.nama << ": " << (m.tugas + m.uts + m.uas) / 3.0 << endl;
        cout << "Nilai huruf untuk " << m.nama << ": " << m.nilaiHuruf << endl;
        cout << "IPK untuk " << m.nama << ": " << m.ipk << endl;

        char lanjut;
        cout << "Apakah Anda ingin melihat informasi mahasiswa lain? (y/n): ";
        cin >> lanjut;
        tampilkan_lagi = (lanjut == 'y' || lanjut == 'Y');
        clearInputBuffer(); 
    } while (tampilkan_lagi);

    return 0;
}

