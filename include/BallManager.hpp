/**
* @file BallManager.hpp
* @description Topların tutulduğu dizi üzerindeki işlemleri gerçekleştirir.
* @course Veri Yapıları 2A
* @assignment 1. Ödev
* @date 10 Ekim 2017
* @author "Özgür Adem Işıklı<ozgur.isikli@ogr.sakarya.edu.tr>"
*/
#ifndef BALL_MANAGER_HPP 
#define BALL_MANAGER_HPP
#include <iostream>
#include "Ball.hpp"

using namespace std;

class BallManager {

    private:
        int arraySize;
        Ball** balls;           
        
    public:
        void setArraySize(int value);   // Dizinin boyutunun ayarlandığı metot
        void reverse();                 // Diziyi tersine çeviren metot
        void print();                   // Diziyi ekrana yazdıran metot
        ~BallManager();

};

#endif