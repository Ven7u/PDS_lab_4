//
//  Contenitore.h
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#ifndef __lab_4__Contenitore__
#define __lab_4__Contenitore__

#include <stdio.h>
#include <list>
#include "Testo.h"

class Contenitore: public Testo{
protected:
    
    std::list<Testo*> listaTesti;
    
public:
    Contenitore():listaTesti(){};
    virtual Contenitore* aggiungi(Testo* textPtr) = 0;
};

#endif /* defined(__lab_4__Contenitore__) */
