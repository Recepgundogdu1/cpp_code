#include <iostream>

using namespace std;


int main() {
    int taban;
    int yukseklik;


    cout<<"lutfen adinizi yaziniz"; //user friendly
    string isim;
    cin >>isim;
    cout<<"isminiz  "+isim<<" c++ kursuna hosgeldin \n "<<endl;
    cout<<"lutfen ucgenin  tabanini giriniz"<<endl;
    cin>>taban;
    cout<<"lutfen ucgenin yuksekligini  giriniz"<<endl;
    cin>>yukseklik;
    cout<<(taban*yukseklik)/2  <<"  ucgenin alanidir"<<endl;
    return 0;


}
