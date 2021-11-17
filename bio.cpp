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