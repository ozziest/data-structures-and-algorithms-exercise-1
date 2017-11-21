/**
* @file Ball.cpp
* @description Ball isimli sınıfın implementasyonunu içermektedir.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#include "Ball.hpp"

int Ball::getColorCode() {
    return _colorCode;
}

Ball::Ball(int colorCode) {
    _colorCode = colorCode;
}