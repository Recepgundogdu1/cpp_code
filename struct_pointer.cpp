#include <iostream>
#include <string>


using namespace std;



struct Ogrenci {
    string isim;
    int yas;
    int notu;
};

int main() {

    Ogrenci* ptr=new Ogrenci;
    cout<<"ogrenci notunu  gir";
    cin>>ptr->notu;
    cin.ignore();
    cout<<"ogrenci adini gir";
    getline(cin,ptr->isim);
    cout<<"ogrenci yasini gir";
    cin>>ptr->yas;

    cout<<"ogrenci ismi "<<ptr->isim<<" ogrenci yasi "<<ptr->yas<<endl;
    delete ptr;
    

}
