//
//  Gun.hpp
//  
//
//  Created by Ryan Sikand on 10/11/17.
//
//

#include <string>
#include "Weapon.h"

#ifndef GUN_H
#define GUN_H

class Gun : public Weapon {
public:
    
    Gun() : Weapon("Gun", 40.0) {
    }
    virtual ~Gun() {};
    virtual double hit(double armor);
    
};

#endif /* GUN_H */
