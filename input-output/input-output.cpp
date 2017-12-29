#include <iostream> // library standard input-output
#include <string> // library string

using namespace std; // penggaan std secara global

int main(){ // fungsi utama yg akan dieksekusi oleh compiler
  string nama; // variabel tipe data string
  int tahun, bulan, tanggal; // variabel tipe data integer

  cout << "Silahkan masukkan nama anda: "; // console out, yg akan ditampilkan di console/terminal saat program dijalankan
  getline(cin, nama); // console in dengan menggunakan getline agar white space (spasi) tidak dianggap enter, yg akan diinput melalui console/terminal dengan input dari user
  cout << "Silahkan masukkan tanggal lahir anda (yyyy mm dd): "; // console out, yg akan ditampilkan di console/terminal
  cin >> tahun >> bulan >> tanggal; // console in menggunakan cin, yg akan diinput melalui console/terminal dengan input dari user
  cout << "Nama: " << nama << endl << "Tanggal lahir: " << tahun << "-" << bulan << "-" << tanggal << endl; // console out, yg akan ditampilkan di console/terminal
  return 0;
}
