#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Perulangan while
    int x;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x =rand() % 10;
    cout  << "Perulangan while" << endl;
    cout << "Nilai x awal = " << x << endl;

    while (x < 7){
        cout << "Nilai x = " << x << "Lari keliling " << endl;
        x = rand() % 10;
        perulanganwhile++;
    }

    cout << "Nilai X teerakhir = " << x << endl;
    cout << "Jumlah perulangan =" << perulanganwhile << endl;

    //Perulangan do while
    cout << endl;
    cout << "Perulangan do while" << endl;
    do{
        cout << "Nilai X terakhir : " << x << "Lari keliling " << endl;
        x = rand() % 10;
        perulanganDo++;
    }while(x < 7);
    cout << "Nilai X terakhir = " << x << endl;
    cout << "jumlah perulanganDo while : " << perulanganDo << endl;
}