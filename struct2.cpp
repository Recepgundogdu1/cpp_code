#include <iostream>
#include <cstring> // strcpy için

using namespace std;

// 1. Önce yapıyı (Struct) tanımlıyoruz
struct Ogrenci {
    char isim[20];
    int yas;
    int notu;
};

// 2. Struct yukarıda tanımlandığı için fonksiyon onu tanıyor
// const Ogrenci& ogr : Sadece bellek adresini alıp okur, kopyalama yapmaz (RAM tasarrufu)
void durumogrenme(const Ogrenci& ogr) {
    // Yazdırmak için strcpy kullanılmaz, doğrudan değişkenin kendisi yazılır
    cout << "Ogrenci Ismi: " << ogr.isim << endl;
}

int main() {
    Ogrenci ogrenci1;

    // char dizisine değer atamak için strcpy KULLANILIR
    strcpy(ogrenci1.isim, "mehmet");
    ogrenci1.yas = 10;
    ogrenci1.notu = 60;

    // 3. Fonksiyonu çağırıp ogrenci1'i yolluyoruz
    durumogrenme(ogrenci1);

    return 0;
}
