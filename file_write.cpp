#include <iostream>
#include <string>
#include "sirket.h"
#include <fstream>


using namespace std;



int main() {
    fstream file;
    file.open("c:\\test\\proje.txt",ios::out);

    if (!file.is_open()) {
        cout<<"dosya acilamadi";
    }
    else {
        string str="merhaba c++";
        file<<str;
    }
    sirket eleman1;
    sirket eleman2;
    sirket *eleman3;


    eleman1.isim="mehmet";
    eleman1.soyisim="gundogdu";
    eleman2.isim="dogan";
    eleman2.soyisim="gundogduu";
    eleman1.setAdres("haliliye mahallesi");
    eleman1.getAdres();

    eleman1.sonucgoster();
    eleman2.sonucgoster();
    file.close();

    return 0;
}





