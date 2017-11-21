/**
* @file Screen.cpp
* @description Ball isimli sınıfın implementasyonunu içermektedir.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#include "Screen.hpp"

int Screen::showMenu() {
    /**
    * Burada fonksiyon aracılığı ile ekrana menü yazdırılmaktadır.
    * Main fonksiyonu üzerinden sürekli olarak burası, eğer menünün 
    * ekrana yazılmasına ihtiyaç varsa çağrılmaktadır.
    */
    cout << "\n1- Diziyi Ters Cevir \n"; 
    cout << "2- Diziyi Yazdir \n"; 
    cout << "3- Cikis \n"; 
    cout << ">> ";

    int userSelection;
    cin >> userSelection;

    return userSelection;
}

int Screen::getArraySize() {
    int arraySize;
    cout << "Dizi Boyutu: ";
    cin >> arraySize;    
    return arraySize;
}