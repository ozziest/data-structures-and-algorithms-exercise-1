/**
* @file BallManager.cpp
* @description BallManager isimli sınıfın implementasyonunu içermektedir.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#include "BallManager.hpp"
#include <windows.h>

BallManager::~BallManager() {
    delete balls;
}

void BallManager::setArraySize(int value) {
    arraySize = value;

    balls = new Ball*[arraySize];
    
    // Dizinin tüm elemanlarına bir top atanır.
    for (int index = 0; index < arraySize; index++) {
        // Burada index'e göre rastgele bir renk kodu atanıyor.
        // Amacımız her topun renginin farklı olması.
        balls[index] = new Ball(index + 1);
    }        
}

void BallManager::reverse() {
    /**
    * Burada dizinin ortasına kadar bir döngü kurulur. Her adımda, 
    * ilk elemanla, ayna şeklinde son eleman yer değiştirilir. 
    * Böylece dizi ters çevrilmiş olur. Bu işlem için `temp` adında
    * ekstra bir pointer'a ihtiyaç duyulmaktadır.
    */    
    for (int index = 0; index < (arraySize / 2); index++) {
        // Yer değiştirilecek dizi elemanın sırası bulunur
        int reverseIndex = arraySize - index - 1;

        // Öndeki elemanın pointer adresi alınır
        Ball* first = balls[index];
        // Sonradaki elemanın pointer adresi alınır
        Ball* reverse = balls[reverseIndex];
        // Öndeki elemanın adresi geçici değere atanır
        Ball* temp = first;

        // Sondaki elemanın adresi, öndeki elemanın adresine aktarılır
        balls[index] = reverse;
        // Sonradaki elemanın yerine, tempte tuttuğumuz öndeki eleman aktarılır
        balls[reverseIndex] = temp;
    }

    cout << "Dizi basariyla ters cevrildi.\n"; 
}

void BallManager::print() {
    cout << "Dizideki Toplar:\n";

    // Dizinin tüm elemanlarına bir top atanır.
    for (int index = 0; index < arraySize; index++) {
        // İlgili elemanın pointer adresi alınır.
        Ball* pointer = balls[index];

        // İlgili topun pointer adresi, renk koduyla birlikte ekrana yazdırılır.
        cout << "[" << index << "]->";

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);            
        SetConsoleTextAttribute(hConsole, pointer->getColorCode());
        
        cout << " "          // Gülen yüz, herhangi bir deaty olmadığı için statik yapıldı.
            << pointer                  // Pointer adresi
            << "\n";             // Renk kodu sonu.
        
        SetConsoleTextAttribute(hConsole, 7);
    }    
}