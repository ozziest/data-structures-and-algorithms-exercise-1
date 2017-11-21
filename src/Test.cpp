/**
* @file Test.cpp
* @description Ana işlemleri gerçekleştiren bölümler burada bulunmaktadır.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#include <iostream>
#include "BallManager.hpp"
#include "Screen.hpp"

using namespace std;

int main() {
    // Kullanıcıyla olan etkileşimler için screen sınıfı tanımlanır.
    Screen screen;
    // Top dizisiyle olan işlemler için BallManager sınıfıtanımlanır
    BallManager ballManager;

    // Kullanıcıdan dizi boyutu alınarak BallManager sınıfına gönderili
    ballManager.setArraySize(screen.getArraySize());

    // Kullanıcıdan "3<Çıkış>" numaralı seçim gelene kadar menü 
    // ekranda gösterilir.
    int userSelection;    
    do {
        // Menü gösterilir ve kullanıcı seçimi beklenir.
        userSelection = screen.showMenu();
        // Kullanıcının seçimine göre top işlemleri yapılır.
        switch(userSelection) {
            case 1: ballManager.reverse(); break;
            case 2: ballManager.print(); break;
        }
    } 
    while(userSelection != 3);

    return 0;
}