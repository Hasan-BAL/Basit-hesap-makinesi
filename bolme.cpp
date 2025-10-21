#include <iostream>

int main() {
    int sayi1; // Bölünen
    int sayi2; // Bölen
    int sonuc; 

    // Birinci sayıyı iste
    std::cout << "Lutfen bolmek istediginiz birinci sayiyi girin: ";
    std::cin >> sayi1;

    // İkinci sayıyı iste 
    std::cout << "Lutfen bolen ikinci sayiyi girin: ";
    std::cin >> sayi2;


    sonuc = sayi1 / sayi2;

    // Sonucu ekrana yazdır
    
    std::cout << sayi1 << " / " << sayi2 << " = " << sonuc << std::endl;

    return 0; 
}