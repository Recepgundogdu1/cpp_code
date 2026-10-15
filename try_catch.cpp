#include <iostream>
using namespace std;

int main() {
    try {
        int not1;
        cout << "lutfen notunuzu giriniz: ";
        cin >> not1;

        if (not1 >= 50) {
            cout << "dersi gectiniz, tebrikler\n";
        } else {
            throw not1;           // hata firlat
        }
    }
    catch (int hataNo) {          // try bittikten HEMEN sonra
        cout << "dersi gecemediniz, en az 50 almalisiniz\n";
        cout << "notunuz: " << hataNo << "\n";
    }
    return 0;
}
