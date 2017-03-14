#ifndef STACK_H
#define STACK_H

#include <exception>
#include <vector>
using namespace std;

class Stack
{
private:
    const int maxSize;
    vector<char> stack;

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
        values that can be stored in the stack at any time */
    Stack( const int _maxSize ) : maxSize(_maxSize)
    {
    }    

    ~Stack()
    {
    }

    /** Returns the number of values currently stored in the 
        stack */
    int num_items() const
    {
        // REPLACE ME
        return 0;
    }

    /** Add value to the top of the stack, raises Stack::Full 
        exception if stack is full */
    void push( char value )
    {
        if( num_items() < maxSize )
        {
            stack.emplace_back( value );
        }
        else
        {
            throw Full();
        }
    }

    /** Returns the value currently stored at the top of the 
        stack, raises Stack::Empty exception if stack is 
        empty */
    char top()
    {
    }

    /** Removes and returns the value currently stored at the
        top of the stack, raises Stack::Empty exception if stack
        is empty */
    char pop()
    {
    }
};

#endif