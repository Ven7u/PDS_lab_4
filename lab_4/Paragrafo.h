//
//  Paragrafo.h
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#ifndef __lab_4__Paragrafo__
#define __lab_4__Paragrafo__

#include <stdio.h>
#include <string>
#include "Testo.h"

class Paragrafo:public Testo{
private:
    std::string text;

public:
    std::string trova(std::string text);
};

#endif /* defined(__lab_4__Paragrafo__) */
