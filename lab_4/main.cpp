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
	Paragrafo * P2 = new PAragrafo;
	Capitolo * c1 = new Capitolo;
	Capitolo * c2 = new Capitolo;
	Libro * l1 = new Libro;

	p1->setText("ciao come stai?");
	p2->setText("io tutto bene, e tu?");
	c1->aggiungi(p1);
	c2->aggiungi(p2);
	c1->aggiungi(c2);
	l1->aggiungi(c1);

	std::cout << "cerca 'ciao' in libro 1:\n";
	std::cout << l1->trova("ciao");
	std::cout << "cerca 'come' in capitolo 1:\n";
	std::cout << c1->trova("come");
	
    return 0;
}
