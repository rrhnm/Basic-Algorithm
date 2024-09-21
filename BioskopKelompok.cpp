#include<iostream>
using namespace std;

int main() {

	int U, film, jt, th, nk, i, pilihanJam;
	string jamTayang;
	cout << "----------------------------------------" << endl;
	cout << "     SELAMAT DATANG DI BIOSKOP XXII" << endl;
	cout << "----------------------------------------" << endl;

	cout << "KATEGORI FILM\n1. FILM ANAK ANAK (Rp. 40.000/tiket)\n2. FILM REMAJA (Rp. 45.000/tiket)\n3. FILM DEWASA (Rp. 50.000/tiket)" << endl;
	cout << "----------------------------------------" << endl;

	cout << "     PILIHAN KURSI YANG TERSEDIA" << endl;
	cout << "           -----------          " << endl;
	cout << "              layar               " << endl;
	cout << "\n1  2  3  4  5       6  7  8  9  10\n\n11 12 13 14 15      16 17 18 19 20" << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "Jam Tayang\n";
	cout << "1. 08.00 WIB \n2. 10.00 WIB \n3. 12.00 WIB \n4. 14.00 WIB" << endl;
	cout << "Masukkan pilihan jam tayang (1-4):\n";
	cin >> pilihanJam;
	switch (pilihanJam){
	case 1: jamTayang = "08.00 WIB"; break;
	case 2: jamTayang = "10.00 WIB"; break;
	case 3: jamTayang = "12.00 WIB"; break;
	case 4: jamTayang = "14.00 WIB"; break;
	default: "Pilihan jam tayang tidak tersedia."; break;
	}
	cout << "\nMasukkan usia anda = ";
	cin >> U;

	if (U >= 0 && U <= 12) {
		cout << "Kategori film yang bisa dipilih adalah anak anak" << endl;
		cout << "Pilih film\n1. Upin ipin\n2. Bolang\n3. Unyil" << endl;
		cout << endl;
		cout << "Masukkan Pilihan = ";
		cin >> film;

		switch (film) {
		case 1: cout <<"Anda memilih film Upin ipin" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for ( i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;

			break;
		case 2: cout << "Anda memilih film Bolang" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;

			break;
		case 3: cout << "Anda memilih film Unyil" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;

			break;

		default:
			cout << "Pilihan Tidak tersedia !!!";
			break;
		}
	}

	else if (U >= 13 && U <= 16) {
		cout << "Kategori film yang bisa dipilih adalah anak anak dan remaja" << endl;
		cout << "\nPilih film Anak Anak\n1. Upin ipin\n2. Bolang\n3. Unyil" << endl;
		cout << "\nPilih film Remaja\n4. Avatar\n5. One Piece Red\n6. Sayap Sayap Patah" << endl;
		cout << endl;
		cout << "Masukkan Pilihan = ";
		cin >> film;

		switch (film) {
		case 1: cout << "Anda memilih film Upin ipin" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 2: cout << "Anda memilih film Bolang" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 3: cout << "Anda memilih film Unyil" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 4: cout << "Anda memilih film Avatar" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 5: cout << "Anda memilih film One Piece Red" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 6: cout << "Anda memilih film Sayap Sayap Patah" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		default:
			cout << "Pilihan Tidak Tersedia !!!";
		}
	}


	else if (U >= 17 && U <= 100) {
		cout << "Kategori film yang bisa dipilih adalah anak anak, remaja, dan dewasa" << endl;
		cout << "\nPilih film Anak Anak\n1. Upin ipin\n2. Bolang\n3. Unyil" << endl;
		cout << "\nPilih film Remaja\n4. Avatar\n5. One Piece Red\n6. Sayap Sayap Patah" << endl;
		cout << "\nPilih film dewasa\n7. 360 days\n8. fast furious\n9. final destination" << endl;
		cout << endl;
		cout << "Masukkan Pilihan = ";
		cin >> film;

		switch (film) {
		case 1: cout << "Anda memilih film Upin ipin" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 2: cout << "Anda memilih film Bolang" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 3: cout << "Anda memilih film Unyil" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 40000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 4: cout << "Anda memilih film Avatar" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 5: cout << "Anda memilih film One Piece Red" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 6: cout << "Anda memilih film Sayap Sayap Patah" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 45000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 7: cout << "Anda memilih film 360 days" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 50000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 8: cout << "Anda memilih film fast furious" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 50000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		case 9: cout << "Anda memilih film final destination" << endl;
			cout << "Masukkan jumlah tiket = ";
			cin >> jt;
			for (i = 0; i < jt; i++)
			{
				cout << "pilih nomor kursi = ";
				cin >> nk;
			}
			th = jt * 50000;
			cout << "Total bayar = Rp." << th << endl;
			break;

		default:
			cout << "Pilihan Tidak Tersedia !!!";
		}
	}
	else {
		cout << "Masukkan Umur yang benar" << endl;
	}
	cout << "Anda memilih jam tayang pukul: " << jamTayang;


	cout << "\n\n----------------------------------------" << endl;
	cout << "     TERIMA KASIH TELAH MEMILIH KAMI\n            SELAMAT MENONTON" << endl;

	cin.get();
	return 0;
}