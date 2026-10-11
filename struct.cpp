#include <iostream>
#include <string>
using namespace std;




struct sirket {

    int maas;
    int yas;
    string isim;

};

int main() {

    sirket sirket1;

    sirket1.isim="mehmet";
    sirket1.maas=1000;
    sirket1.yas=19;

    sirket sirket2={2000,10,"dogan"};
    cout<<sirket2.maas<<" "<<sirket2.isim<<endl;

    cout<<sirket1.isim<<" "<<sirket1.maas<<" "<<sirket1.yas<<endl;


    sirket  sirketler[3];


    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". calisanin ismi: ";
        getline(cin, sirketler[i].isim); // Direkt satırı alır

        cout << i + 1 << ". calisanin maasi: ";
        cin >> sirketler[i].maas;

        cout << i + 1 << ". calisanin yasi: ";
        cin >> sirketler[i].yas;

        // Sayı okumadan sonra tamponda kalan Enter'ı temizle
        // Böylece sonraki turdaki getline boş geçmez
        cin.ignore();
    }


    for (int i=0;i<3;i++) {
        cout<<sirketler[i].isim<<" "<<sirketler[i].yas<<" "<<sirketler[i].maas<<endl;
    }



}
