/* ready
 read sayi 1
 read sayi 2
 sonuc = 0 
 sonuc = sayi1+ sayi2
 write sonuc
 read kişi1 
 write kişi1
*/ 

#include <iostream>


using namespace std; 

int main() {
    
    int sayi1,sayi2, toplam, cikarma,islem; 
    
    cout << "Birinci sayiyi girin: ";
    
    cin>>sayi1;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    cout << "Yapmak İstediğiniz İşlem: ";
    cout<< "toplama için 1, çikartma için 0 yaziniz";
    cin>>islem;
    if (islem==1)
    {
    toplam = sayi1 + sayi2;
    cout << "Toplam: " << toplam << endl;
    }
    else if(islem==0)
    {
    cikarma = sayi1 - sayi2;
    cout << "Cikartma: " << cikarma << endl;
    }
    else
    {
        cout<<"Yapilan Seçim Yanliş Tekrar Deneyiniz"<<endl;
    }
    
    return 0; }