//
//  Testo.h
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#ifndef __lab_4__Testo__
#define __lab_4__Testo__

#include <stdio.h>
#include <string>


class Testo{

private:
    
public:
  virtual std::string trova(std::string text) = 0;
    
};

#endif /* defined(__lab_4__Testo__) */
