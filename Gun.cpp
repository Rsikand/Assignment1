//
//  Gun.cpp
//  
//
//  Created by Ryan Sikand on 10/11/17.
//
//

#include "Gun.h"
//if armor is between 20-40 does less damage
double Gun::hit(double armor) {
    double damage = 0;
    if((armor >= 20) && (armor <= 40))
        damage = hitPoints;
    else
        damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}
