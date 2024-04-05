#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void awalan(){
    cout << "============================================================================================================================================" << endl;
    cout << "                                           || =========             =====                =========        ====  ===          ===  ==     =="<< endl;
    cout << "------------ Data Diri Danuz ------------  || ==     ===           =======              ==========       ====   ===          ===  ==     ==" << endl;
    cout << " Name      : Ngurah Danuh Putra            || ==       ===        ==== ====            ====   ====      ====    ===          ===  ==     ==" << endl;
    cout << " Kelas     : X RPL 2                       || ==         ===     ====   ====          ====    ====     ====     ===          ===  =========" << endl;
    cout << " No Absen  : 31                            || ==         ===    ====     ====        ====     ====    ====      ===          ===  =========" << endl;
    cout << " Sekolah   : SMK TI Bali Global Denpasar   || ==        ===    ===============      ====      ====   ====       ===          ===  ==     ==" << endl;
    cout << "------------ Data Diri Danuz ------------  || ==      ===     =================    ====       ====  ====         ====      ====   ==     ==" << endl;
    cout << "                                           || ==========     =====         =====  ====        ==========             =====        ==     ==" << endl;
    cout << "============================================================================================================================================" << endl;
    system("pause");
}

void outputData(string nama,string absen, string kelas, string kelamin, string umur, string hobby, string cita, string alamat, string sekolah, string game,string makanan){
    system("Color 0A");
    cout << "============================================================================" << endl;
    cout << "=                               BIODATA DIRI                               =" << endl;
    cout << "============================================================================" << endl << endl;
    cout << "\tNama                  : " <<nama << endl;
    cout << "\tNo Absen              : " <<absen << endl;
    cout << "\tKelas                 : " <<kelas << endl;
    cout << "\tJenis Kelamin         : " <<kelamin << endl;
    cout << "\tUmur                  : " <<umur << endl;
    cout << "\tHobby                 : " <<hobby << endl;
    cout << "\tCita - Cita           : " <<cita << endl;
    cout << "\tAlamat Tempat Tinggal : " <<alamat << endl;
    cout << "\tSedang Sekolah di     : " <<sekolah << endl;
    cout << "\tGame Favorit          : " <<game << endl;
    cout << "\tMakanan Kesukaan      : " <<makanan << endl;
    cout << "============================================================================" << endl;
    system("pause");
}

int main(){
    string nama, kelas, jenisKelamin, hobby, cita, alamat, sekolah,game,makanan,noAbsen,umur;

    awalan();
    system("cls");

    cout << "Masukan Nama : "; 
    getline(cin, nama);
    cout << "Masukan No Absen kelas : ";
    getline(cin, noAbsen);
    cout << "Masukan Kelas : ";
    getline(cin, kelas);
    cout << "Masukan Umur : ";
    getline(cin, umur);
    cout << "Masukan Jenis Kelamin : ";
    getline(cin, jenisKelamin);
    cout << "Masukan Hobby : ";
    getline(cin, hobby);
    cout << "Cita - Cita : ";
    getline(cin, cita);
    cout << "Masukan Alamat Tempat Tinggal : ";
    getline(cin, alamat);
    cout << "Bersekolah di : ";
    getline(cin, sekolah);
    cout << "Game yang disukai : ";
    getline(cin, game);
    cout << "Makanan Kesukaan : ";
    getline(cin, makanan);
    system("pause");

    system("cls");
  
    outputData(nama,noAbsen,kelas,jenisKelamin,umur,hobby,cita,alamat,sekolah,game,makanan);

    return 0;
}