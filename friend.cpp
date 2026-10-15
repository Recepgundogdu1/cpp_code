#include <iostream>
#include <string>
using namespace std;

class otomobil {
private:
    string marka;
    int yil;

public:
    otomobil(string _marka, int _yil) : marka(_marka), yil(_yil) {}
    friend void bilgilerigoster(const otomobil& oto);
    otomobil() {
        marka="marka girilmedi";
        yil=0000;
    }
};

void bilgilerigoster(const otomobil& oto) {
    cout << oto.marka << " " << oto.yil << endl;
}

int main() {
    otomobil otomobil1("mercedes", 2012);
    bilgilerigoster(otomobil1);

    otomobil otomobil3;
    bilgilerigoster(otomobil3);
    
}
