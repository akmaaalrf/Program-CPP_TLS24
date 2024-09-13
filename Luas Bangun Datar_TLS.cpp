#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void lingkaran(){
    int r;
    float sum;
    cout << "===Luas Lingkaran===" << endl;
    cout << "Masukan nilai jari jari :";
    cin >> r;
    sum = pow(r,2)*M_PI;
    cout << "Luas lingkaran adalah : " << sum << endl << endl;
}

void persegipanjang(){
    int p,l;
    float sum;
    cout << "===Luas Persegi Panjang===" << endl;
    cout << "Masukan nilai panjang :";
    cin >> p;
    cout << "Masukan nilai lebar :";
    cin >> l;
    sum = p*l;
    cout << "Luas persegi Panjang adalah : " << sum << endl << endl;
}

void segitiga(){
    int a,t;
    float sum;
    cout << "===Luas Segitiga===" << endl;
    cout << "Masukan nilai alas :";
    cin >> a;
    cout << "Masukan nilai tinngi :";
    cin >> t;
    sum = a*t/2;
    cout << "Luas segitiga adalah : " << sum << endl << endl;
}

void Menu(){
    int angka;
    cout << "===Program Menghitung Bangun Datar===" << endl << endl;
    cout << "(1) segitiga\n";
    cout << "(2) Persegi Panjang\n";
    cout << "(3) Lingkaran\n" << endl;
    cout << "Pilih program : ";
    cin >> angka;
    cout << endl;

    switch (angka){
    case 1:
        segitiga();
        break;
    case 2:
        persegipanjang();
        break;
    case 3:
        lingkaran();
        break;
    default:
        cout << "Maaf ga ada" << endl << endl;
        break;
    }
}

int main(){
    char ulang;
    string nama;
    cout << "siapa namamu : ";
    getline (cin, nama);
    do{
        Menu();
        cout << "Apakah ingin di ulang (Y/N):";
        cin >> ulang;
    } while (ulang =='y' || ulang =='Y');
    cout << "Dadah " << nama << endl;
}

