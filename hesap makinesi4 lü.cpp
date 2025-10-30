#include <iostream>
using namespace std;
int main() {
    int sayi1;
    int sayi2;
    cout<<"Birinci Sayiyi Giriniz"<<endl;
    cin>>sayi1;
    cout<<"Ikinci Sayiyi Giriniz"<<endl;
    cin>>sayi2;
    int toplam = sayi1 + sayi2;
    int fark = sayi1 - sayi2;
    int carpim = sayi1 * sayi2;
    double bolum = static_cast<double>(sayi1) / sayi2;
    cout<<"Toplam: "<<toplam<<endl;
    cout<<"Fark: "<<fark<<endl;
    cout<<"Carpim: "<<carpim<<endl;
    if (sayi2 != 0)
    cout << "Sonuc: " << sayi1 / sayi2 << endl;
    else
    cout << "Hata: 0'a bolme yapilamaz!" << endl;
    return 0;
}
