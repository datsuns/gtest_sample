#include "imple_user.h"

ImpleUser::ImpleUser(SampleInterface& interface) : interface(&interface){}

int ImpleUser::total() const {
	return this->interface->sum();
}

void ImpleUser::add(int x) {
	this->interface->add(x);
}
