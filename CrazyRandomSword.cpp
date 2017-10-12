//
//  CrazyRandomSword.cpp
//  
//
//  Created by Ryan Sikand on 10/11/17.
//
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    int ha = armor/2;
    double damage = hitPoints - (rand() % ha);
    srand(time(NULL));
    if (damage < 0) {
        return 0;
    }
    return damage;
}

