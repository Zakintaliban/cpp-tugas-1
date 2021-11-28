#include <iostream>
#include <string>

using namespace std;

int main()
{
    uint64_t nim;
    string nama;
    float nilai1;
    float nilai2;
    float nilai3;
    float ratarata;
    float sum;
    char grade;

    cout << "Masukan NIM:";
    cin >> nim;

    cout << "\nMasukan nama:";
    cin.ignore();
    getline (cin, nama);

    cout << "\nMasukan nilai 1:";
    cin >> nilai1;

    cout << "\nMasukan nilai 2:";
    cin >> nilai2;

    cout << "\nMasukan nilai 3:";
    cin >> nilai3;

    sum = nilai1 + nilai2 + nilai3;
    ratarata = sum / 3;

    if ((ratarata >= 80)&& (ratarata <= 100))
    {
        grade='A';
    }
    else if ((ratarata >= 70)&& (ratarata < 80))
    {
        grade='B';
    }
    else if ((ratarata >= 60)&& (ratarata < 70))
    {
        grade='C';
    }
    else if ((ratarata >= 50)&& (ratarata < 60))
    {
        grade='D';
    }
    else {
        grade='E';
    }

    cout << "\nNilai Mahasiswa atas nama " << nama;
    cout << " dengan NIM " << nim;
    cout << "\nRata-rata adalah : " << ratarata;
    cout << "\nGrade: " << grade;

    return 0;
}

// iostream merupakan singkatan dari Input/Output Stream. biasanya juga disingkat sbg I/O Stream.
// string sebenarnya merupakan penggunaan tipe data char secara berkelompok menjadikan sebuah kata atau kalimat.
// using namespace std bertugas untuk meminimalisir kesalahan akbiat tidak dikenalinya fungsi cout dan cin apabila dalam penulisan secara langsung. 
// int main() adalah fungsi utama sebagai starting point untuk program c/c++.
// kita menggunakan string pada variabel nama dikarenakan, kata hanya bisa digunakan pada string.
// kita menggunakan float pada variabel nilai1,2,3 dan ratarata dikarenakan, angka pada nilai dan rata-rata detil sehingga diperlukan angka dengan komaan.
// kita menggunakan uint64_t pada variabel NIM dikarenakan, angka pada nim contoh: 210401010006 menggunakan banyak bit (64 bits), sehingga kita panggil uint64_t.
// kita menggunakan char pada variabel grade dikarenakan, grade hanya memerlukan satu huruf, sehingga cukup char saja dipanggil, tanpa string.
// Fungsi cout adalah fungsi standar pada C++ untuk menampilkan output ke layar.
// Fungsi cin adalah fungsi standar pada C++ untuk melakukan input ke layar.
// solusi untuk menginput lebih dari satu kata (menggunakan spasi), dapat di gunakan perintah getline ().
// fungsi cin.ignore () digunakan untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input.
// \n gunanya untuk membuat line baru.
// + digunakan untuk melakukan operasi tambah.
// / digunakan untuk melakukan operasi bagi.
// Jika kondisi (if) yang diperiksa bernilai benar atau terpenuhi maka pernyataan pertama yang dilaksanakan
// dan jika kondisi yang diperiksa bernilai salah maka pernyataan yang kedua else if() akan dilaksanakan, dan begitu seterusnya, hingga kondisi terakhir, yaitu else().
// >= untuk melakukan kondisi lebih dari sama dengan.
// <= untuk melakukan kondisi kurang dari sama dengan.
// < untuk melakukan kondisi kurang dari.
// return 0 digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0.

// output:
// Nilai Mahasiswa atas nama Khasbullah Nukman Zakin dengan NIM 210401010006
// Rata-rata adalah : 77.9667
// Grade: B