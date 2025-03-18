#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y){
    return x * y;
}

float
 luasPersegiPanjang(float x){
    return 3.14 * x * x;
}

int main()
{
    int pilihan;
    float panjang,lebar,jejari;
    do{
        cout << "===Menu===" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cin >> pilihan;

        switch(pilihan){
            case 1 :
                cout << "Menghitung Luas Persegi Panjang" << endl;
                cout << "Masukkan panjang : ";
                cin >> panjang;
                cout << "Masukkan lebar : ";
                cin >> lebar;
                cout << "luas pERSEGI pANJANG ="
                << luasPersegiPanjang(panjang,lebar) << endl;
                break;
            