//PROGRAM Proses Real
#include <iostream>
using namespace std;

int main(){
//KAMUS
     float rata;
     int N, count, sum;
//ALGORITMA
     sum = 0; count = 0;
     cin >> N;
     while (N != -999){
          count++; //Alternatif: count = count + 1;
          sum+=N; //Alternatif: sum = sum + N;
          cin >> N;
     }
     if (count > 0){
          cout << "Banyak bilangan = " << count << endl;
          cout << "Jumlah Total = " << sum << endl;
          rata = (float)sum/(float)count;
          cout << "Rata-rata = " << rata << endl;
     }
     else{ //count == 0
          cout << "Tidak ada data yang diolah" << endl;
     }
return 0;
}