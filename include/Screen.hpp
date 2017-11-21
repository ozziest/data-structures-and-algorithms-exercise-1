/**
* @file Screen.hpp
* @description Ekrana menünün gösterilmesi ve ekran etkileşimleri bu sınıf içerisinde gerçekleştirilmelidir.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#ifndef SCREEN_HPP 
#define SCREEN_HPP
#include <iostream>

using namespace std;

class Screen {

    public:
        int showMenu();         // Menüyü ekrana gösterip, kullanıcı seçimini alan metot
        int getArraySize();     // Kullanıcıdan dizi boyutunu öğrenen metot.

};

#endif