//
//  Capitolo.cpp
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#include "Capitolo.h"
#include "Contenitore.h"
#include "Libro.h"
#include <typeinfo>

Contenitore* Capitolo::aggiungi(Testo* textPtr){
    Testo *c;
    if ((c = dynamic_cast<Libro *>(textPtr)) == NULL) {
        Contenitore::listaTesti.push_back(textPtr);
        return this;
    }
        else{
            throw new std::bad_cast();
        }
}

std::string Capitolo::trova(std::string text){
    
    std::list<Testo*>::iterator p;
    std::string found;
    int i=0;
    
    for( p = Contenitore::listaTesti.begin(); p != Contenitore::listaTesti.end(); p++){
        i++;
        found = (*p)->trova(text);
        if (found != "") {
            found = std::to_string(i) + "/" + found;
            return found;
        }
    }
    
    return "";
}