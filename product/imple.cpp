#include "imple.h"

SampleImplement::SampleImplement() : total(0) {}

void SampleImplement::add(int x){
	this->total += x;
}

int SampleImplement::sum() const{
	return this->total;
}
