// Program Hitung Luas Segitiga
// Menghitung Luas Segitiga berdasarkan alas, tinggi
#include <iostream>
using namespace std;

int main()
{   //KAMUS
    float a;
    float t;
    float l;

    //ALGORITMA
    cout << "Input alas =" << endl;
    cin >> a;
    cout << "Input tinggi =" << endl;
    cin >> t;
    l = a * t * 0.5;
    cout << "luas = " << l << endl;
    return 0;
}