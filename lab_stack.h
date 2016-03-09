#ifndef STACK_H
#define STACK_H

#include <memory>
#include <exception>
using namespace std;

class Stack
{
private:
	const int maxSize;
	unique_ptr<char[]> stack;
	int pos;

public:
	class Full: public exception
	{
	public:
		virtual const char* what() const throw()
  		{
    		return "Stack is full";
  		}
	};

	class Empty: public exception
	{
	public:
		virtual const char* what() const throw()
  		{
    		return "Stack is empty";
  		}
	};

	/** Initialise the stack, maxSize is the maximum number of
		values that can be stored in the stack at any time **/
	Stack( const int _maxSize ) : maxSize(_maxSize), 
								  stack( new char[_maxSize] )
	{
		pos = 0;
	}	

	~Stack()
	{
	}

	/** Returns the number of values currently stored in the 
		stack **/
	int num_items()
	{
		return pos;
	}

	/** Add value to the top of the stack, raises Stack::Full 
		exception is stack is full **/
	void push( char value )
	{
		if( num_items() < maxSize )
		{
			stack[ pos ] = value;
			pos += 1;
		}
		else
		{
			throw Full();
		}
	}

	/** Returns the value currently stored at the top of the 
		stack, raises Stack::Empty exception is stack is 
		empty **/
	char top()
	{
		if( num_items() > 0 )
		{
			return stack[ pos ];
		}
		else
		{
			throw Empty();
		}
	}

	/** Removes and returns the value currently stored at the
		top of the stack, raises Stack::Empty exception is stack
		is empty **/
	char pop()
	{
		if( num_items() > 0 )
		{
			pos -= 1;
			return stack[ pos ];
		}
		else
		{
			throw Empty();
		}
	}
};

#endif