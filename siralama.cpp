#include <iostream>

using namespace std;





int main() {


    int dizi[4]={1,2,3,4};

    int as=dizi[0];
    for (int i=0;i<4;i++) {
        if (as<dizi[i]) {
            as=dizi[i];
        }
    }
    cout<<"en buyuk sayi"<<as<<endl;

return 0;
}
