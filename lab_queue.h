#ifndef QUEUE_H
#define QUEUE_H

#include <exception>
#include <memory>
using namespace std;

class Queue
{
private:
	const int maxSize;
	unique_ptr<char[]> queue;
	int items;

public:
	class Full: public exception
	{
	public:
		virtual const char* what() const throw()
  		{
    		return "queue is full";
  		}
	};

	class Empty: public exception
	{
	public:
		virtual const char* what() const throw()
  		{
    		return "queue is empty";
  		}
	};

	/** Initialise the queue, maxSize is the maximum number of
		values that can be stored in the queue at any time **/
	Queue( const int _maxSize ) : maxSize(_maxSize),
								  queue( new char[_maxSize] )
	{
		items = 0;
	}	

	~Queue()
	{
	}

	/** Returns the number of values currently stored in the 
		queue **/
	int num_items()
	{
		return items;
	}

	/** Add value to the front of the queue, raises Queue::Full 
		exception is queue is full **/
	void push( char value )
	{
		if( num_items() < maxSize )
		{
			queue[ items ] = value;
			items += 1;
		}
		else
		{
			throw Full();
		}
	}

	/** Returns the value currently stored at the front of the 
		queue, raises Queue::Empty exception is queue is 
		empty **/
	char front()
	{
		if( num_items() > 0 )
		{
			return queue[0];
		}
		else
		{
			throw Empty();
		}
	}

	/** Returns the value currently stored at the back of the 
		queue, raises Queue.Empty exception if the queue is
		empty **/
	char back()
	{
		if( num_items() > 0 )
		{
			return queue[items-1];
		}
		else
		{
			throw Empty();
		}
	}

	/** Removes and returns the value currently stored at the
		front of the queue, raises Queue::Empty exception is queue
		is empty **/
	char pop()
	{
		if( num_items() > 0 )
		{
			char value = queue[0];			// get the value at the front of the queue

			for( int i=0; i<items-1; ++i )	// shuffle everything forward one space
			{
				queue[i] = queue[i+1];	
			}

			items -= 1;						// reduce the item count by 1

			return value;					// return the value that was at the front
		}
		else
		{
			throw Empty();
		}
	}
};

#endif
