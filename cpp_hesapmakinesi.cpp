#include <iostream>


using namespace std;


int main() {
    int secim;
    int sayi1;
    int sayi2;


    cout<<"HESAP MAKİNESİNE HOSGELDİNİZ \n";
    cout<<"1-TOPLAMA 2-CIKARMA 3-BÖLME 4-ÇARPMA  5-CIKIS";
    cin>>secim;
    if (secim==1) {
        cout<<"işlem yapmak istediğiniz sayilari sirayla giriniz";
        cin>>sayi1>>sayi2;
        cout<<sayi1+sayi2;
    }
    else if (secim==2) {
        cout<<"işlem yapmak istediğiniz sayilari sirayla giriniz";
        cin>>sayi1>>sayi2;
        cout<<sayi1-sayi2;
    }
    else if (secim==3) {
        cout<<"işlem yapmak istediğiniz sayilari sirayla giriniz";
        cin>>sayi1>>sayi2;
        cout<<sayi1/sayi2;
    }
    else if (secim==4) {
        cout<<"işlem yapmak istediğiniz sayilari sirayla giriniz";
        cin>>sayi1>>sayi2;
        cout<<sayi1*sayi2;
    }
    else {
        cout<<"isleminiz bitti";
    }

    return 0;





}
