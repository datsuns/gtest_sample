#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

class SampleInterface{
	public:
		virtual ~SampleInterface(){};
		virtual void add(int x) = 0;
		virtual int sum() const = 0;
};


#endif
