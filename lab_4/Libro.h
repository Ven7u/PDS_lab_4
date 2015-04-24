//
//  Libro.h
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#ifndef __lab_4__Libro__
#define __lab_4__Libro__

#include <stdio.h>
#include "Contenitore.h"
#include "Capitolo.h"

class Libro:public Contenitore{
private:
    std::string titolo;
public:
    Libro():Contenitore(){
    }
    
    Contenitore* aggiungi(Testo* textPtr);
    std::string trova(std::string text);
    
};

#endif /* defined(__lab_4__Libro__) */
