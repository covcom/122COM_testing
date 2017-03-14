#ifndef QUEUE_H
#define QUEUE_H

#include <exception>
#include <vector>
using namespace std;

class Queue
{
private:
    const int maxSize;
    vector<char> queue;

public:
    class Full: public exception
    {
    public:
        virtual const char* what() const throw()
          {
            return "Queue is full";
          }
    };

    class Empty: public exception
    {
    public:
        virtual const char* what() const throw()
          {
            return "Queue is empty";
          }
    };

    /** Initialise the queue, maxSize is the maximum number of
        values that can be stored in the queue at any time **/
    Queue( const int _maxSize ) : maxSize(_maxSize)
    {
    }    

    ~Queue()
    {
    }

    /** Returns the number of values currently stored in the 
        queue **/
    int num_items() const
    {
        // COMPLETE ME
        return 0;
    }

    /** Add value to the front of the queue, raises Queue::Full 
        exception is queue is full **/
    void push( char value )
    {
        if( num_items() < maxSize )
        {
            queue.emplace_back(value);
        }
        else
        {
            throw Full();
        }
    }

    /** Returns the value currently stored at the front of the 
        queue, raises Queue::Empty exception is queue is 
        empty **/
    char front() const
    {
        if( num_items() > 0 )
        {
            return queue.front();
        }
        else
        {
            throw Empty();
        }
    }

    /** Returns the value currently stored at the back of the 
        queue, raises Queue.Empty exception if the queue is
        empty **/
    char back() const
    {
        // COMPLETE ME
        return 0;
    }

    /** Removes and returns the value currently stored at the
        front of the queue, raises Queue::Empty exception is queue
        is empty **/
    char pop()
    {
        // COMPLETE ME
        return 0;
    }
};

#endif
