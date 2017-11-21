/**
* @file Ball.hpp
* @description Ball isimli sınıfın başlık dosyasıdır.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/

#ifndef BALL_HPP 
#define BALL_HPP
#include <iostream>

using namespace std;

class Ball {

    private:
        int _colorCode;

    public:
        Ball(int colorCode);
        int getColorCode();

};

#endif