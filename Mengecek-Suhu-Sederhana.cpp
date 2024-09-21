//Program Mengecek Suhu Air
#include <iostream>
using namespace std;

int main(){
     //KAMUS
     int T;

     //ALGORITMA
     cout << "Masukkan nilai suhu = " << endl;
     cin >> T;
     if (T <= 0) {
          cout << "Beku" << endl;
     } else if (100 > T > 0) {
          cout << "Cair" << endl;
     } else {
          cout << "Uap" << endl; 
     }
     return 0;
}