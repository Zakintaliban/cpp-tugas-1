#include <iostream>
#include <string>

using namespace std;
  
int main()
{
    string nama;
    int umur;
    string lahir;
    float berat;

    cout << "Masukan nama:";
    getline (cin, nama);

    cout << "\nMasukan umur:";
    cin >> umur;

    cout << "\nMasukan tempat lahir:";
    cin.ignore();
    getline (cin, lahir);

    cout << "\nMasukan berat badan:";
    cin >> berat;

    cout << "\nnama anda: " << nama;
    cout << "\numur anda: " << umur << " Tahun";
    cout << "\nTempat Lahir: " << lahir;
    cout << "\nberat badan: " << berat << " KG";

    return 0;
}

// iostream merupakan singkatan dari Input/Output Stream. biasanya juga disingkat sbg I/O Stream.
// string sebenarnya merupakan penggunaan tipe data char secara berkelompok menjadikan sebuah kata atau kalimat.
// using namespace std bertugas untuk meminimalisir kesalahan akibat tidak dikenalinya fungsi cout dan cin apabila dalam penulisan secara langsung. 
// int main() adalah fungsi utama sebagai starting point untuk program c/c++.
// kita menggunakan string pada variabel nama dikarenakan, kata hanya bisa digunakan pada string.
// kita menggunakan integer pada variabel umur dikarenakan, umur digunakan dengan integer.
// kita menggunakan string pada variabel lahir dikarenakan, kata hanya bisa digunakan pada string.
// kita menggunakan float pada variabel berat dikarenakan, angka pada berat detil sehingga diperlukan angka dengan komaan.
// Fungsi cout adalah fungsi standar pada C++ untuk menampilkan output ke layar.
// Fungsi cin adalah fungsi standar pada C++ untuk melakukan input ke layar.
// solusi untuk menginput lebih dari satu kata (menggunakan spasi), dapat di gunakan perintah getline ().
// fungsi cin.ignore () digunakan untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input.
// \n gunanya untuk membuat line baru.
// return 0 digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0.

// output:
// Masukan nama:B. J. Habibie

// Masukan umur:62

// Masukan tempat lahir:Pare Pare

// Masukan berat badan:59.5

// nama anda: B. J. Habibie

// umur anda: 62 Tahun

// Tempat Lahir: Pare Pare

// berat badan: 59.5 KG