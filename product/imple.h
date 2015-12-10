#ifndef IMPLE_H_INCLUDED
#define IMPLE_H_INCLUDED

#include "interrace.h"

class SampleImplement : public SampleInterface{
	protected:
		int total;
	public:
		SampleImplement();
		void add(int x);
		int sum() const;
};


#endif
