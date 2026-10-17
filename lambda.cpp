#include <iostream>
#include <string>
#include "otomobil.cpp"






using namespace std;



void durumgoster(const otomobil &otomobil1){
    cout<<"arabanin modeli:     "<<otomobil1.model<<"arabanin fiyati "<<otomobil1.getFiyat()<<"\n";
    cout<<"arabanin rengi   "<<otomobil1.getRenk();
}

int main() {
otomobil otomobil1(2012,"mercedes");
otomobil1.setFiyat(2000);
    cout<<otomobil1.getFiyat();
    otomobil1.setRenk("mavi");

    durumgoster(otomobil1);
    cout<<[](int a,int b){return a+b ;}(3,2)<<endl;


    auto karisiklambda=[](bool kosul)->double {
        if (kosul) {
            return 42;
        }else {
            return 1.4;
        }
    };
   cout<< karisiklambda(true);
}
