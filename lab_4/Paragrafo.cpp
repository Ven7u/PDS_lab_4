//
//  Paragrafo.cpp
//  lab_4
//
//  Created by Francesco Ventura on 14/04/15.
//  Copyright (c) 2015 polito. All rights reserved.
//

#include "Paragrafo.h"


std::string Paragrafo::trova(std::string text){
    int pos;
    pos = Paragrafo::text.find(text);
    return std::to_string(pos) + ":" + std::to_string(pos + text.size()) + "\n";
}

void Paragrafo::setText(std::string text){
	this->text = text;
}
std::string Paragrafo::getText(std::string text){
	return this->text;
}