#ifndef IMPLE_USER_H_INCLUDED
#define IMPLE_USER_H_INCLUDED

#include "interrace.h"

class ImpleUser{
	public:
		ImpleUser(SampleInterface& interface);
		int total() const;
		void add(int x);
	private:
		SampleInterface* interface;
};



#endif
