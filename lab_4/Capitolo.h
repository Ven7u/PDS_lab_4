//
//  Capitolo.h
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#ifndef __lab_4__Capitolo__
#define __lab_4__Capitolo__

#include <stdio.h>
#include <list>
#include "Contenitore.h"
#include "Paragrafo.h"

class Capitolo:public Contenitore{

private:
    
public:
    Contenitore* aggiungi(Testo* textPtr);
    std::string trova(std::string text);
};

#endif /* defined(__lab_4__Capitolo__) */
