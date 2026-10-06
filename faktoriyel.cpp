#include <iostream>

using namespace std;




int faktoriyel(int n) {
    int kumbara=1;
    for (int i=1;i<=n;i++) {
        kumbara=kumbara*i;

    }
    return kumbara;
}

int main() {
    int sayi;
    cout<<"faktoriyel almak istediginiz sayiyi giriniz"<<endl;
    cin>>sayi;
    cout<<"faktoriyel sonucu"<<faktoriyel(sayi)<<endl;



return 0;
}
