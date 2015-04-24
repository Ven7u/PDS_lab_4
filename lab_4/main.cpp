//
//  main.cpp
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#include <iostream>
#include "Libro.h"
#include "Capitolo.h"
#include "Paragrafo.h"

int main(int argc, const char * argv[]) {
	Paragrafo * p1 = new Paragrafo;
	Paragrafo * p2 = new Paragrafo;
	Capitolo * c1 = new Capitolo;
	Capitolo * c2 = new Capitolo;
	Libro * l1 = new Libro;
    Libro * l2 = new Libro;

	p1->setText("ciao come stai?");
	p2->setText("io tutto bene, e tu?");
	c1->aggiungi(p1);
	c2->aggiungi(p2);
	c1->aggiungi(c2);
	l1->aggiungi(c1);
    //l1->aggiungi(l2); //throw exception

	std::cout << "cerca 'ciao' in libro 1:\n";
	std::cout << l1->trova("ciao");
    std::cout << "cerca 'tutto' in libro 1:\n";
    std::cout << l1->trova("tutto");
	std::cout << "cerca 'come' in capitolo 1:\n";
	std::cout << c1->trova("come");
    std::cout << "cerca 'tutto' in capitolo 2:\n";
    std::cout << c2->trova("tutto");
	
    return 0;
}
