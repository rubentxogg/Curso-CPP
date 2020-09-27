#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "SerVivo.h"
using namespace std;

class AnimalHerbivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El animal herbivoro se alimenta de hierba"<<endl;
		}
};

#endif
