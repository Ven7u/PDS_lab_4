//
//  Libro.cpp
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#include "Libro.h"
#include <typeinfo>
#include <sstream>

void Libro::setTitolo(std::string titolo);
std::string Libro::getTitolo();

Contenitore* Libro::aggiungi(Testo* textPtr){
    Capitolo *c;

    if ((c = dynamic_cast<Capitolo *>(textPtr)) != NULL) {
        Contenitore::listaTesti.push_back(c);
        return this;
    }

    else{
        throw new std::bad_cast();
    }
}

std::string Libro::trova(std::string text){

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
