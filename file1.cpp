#include <iostream>
using namespace std;

int main() {
    //pencacah naik
    int i;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai i = "<< i <<"lari keliling lapangan"<< endl;
    }
    cout << "Nilai i terakhir : " << i << endl;

    //Pencacah turun
    for (i = 5; i > 0; i--) {
        cout << "Nilai i = "<< i <<"lari keliling lapangan"<< endl;
    }
    cout << "Nilai i terakhir : "<< i << endl;
}