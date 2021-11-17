#include <iostream>
#include <string>

using namespace std;

int main()
{
    uint64_t nim;
    string nama;
    int nilai1;
    int nilai2;
    int nilai3;
    int ratarata;
    int sum;
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
}