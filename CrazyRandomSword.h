//
//  CrazyRandomSword.hpp
//  
//
//  Created by Ryan Sikand on 10/11/17.
//
//

#include <string>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % 90 + 10)) {
        srand(time(NULL)); 
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);
    
};


#endif /* CRAZYRANDOMSWORD_H */
