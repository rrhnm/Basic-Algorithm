#include <iostream> //Berfungsi untuk mengkuciyose library iostream yang merupakan singkatan dari input output stream seperti cin, cout, endl
#include <fstream> //Berfungsi untuk mengkuciyose library fstream yaitu file eksternal masukan/keluaran
using namespace std; //Berfungsi untuk membuat cin, cout tanpa std:: di depannya sehingga penulisan kode akan lebih efisien.

int main(){ //Bagian proses utama dalam program.

	ifstream infile; //Berfungsi untuk membaca file eksternal.
	ofstream outfile; //Berfungsi untuk menulis file eksternal.
	float ipk; //Berfungsi untuk menyatakan tipe data float (desimal) untuk variabel ipk

	infile.open("IPK.txt"); //Berfungsi untuk membuka file yang akan dibaca dengan nama file IPK.txt.
	outfile.open("IPK+3.txt"); //Berfungsi untuk membuka file yang akan ditulis dengan nama file IPK+3.txt.
	if (infile.is_open()) { //Percabangan if dijalankan ketika file dibuka
		if (!infile.eof()) { //Percabangan if dijalankan ketika belum berada di akhir file.
			do {
				infile >> ipk;
				cout << ipk << endl;
				if (ipk >= 3.00) {
					outfile << ipk << endl;
				}
			} while (!infile.eof());
		}//Perulangan do-while akan terus dijalankan setiap belum mencapai akhir file.
	}
	else {
		cout << "file kosong." << endl; //Percabangan else dijalankan ketika kondisi if baris 13 bernilai salah.
	}

	outfile.close(); //Menutup file eksternal yang ditulis.
	infile.close(); //Menutup file eksternal yang dibaca.

	cin.get(); 
	return 0; //Menyatakan hasil keluaran dari fungsi main() adalah 0. Pada C++, return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
}