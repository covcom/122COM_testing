class Stack:
    class Full(Exception):
        pass
    class Empty(Exception):
        pass

    def __init__( self, maxSize ):
        """ Initialise the stack, maxSize is the maximum number of
            values that can be stored in the stack at any time """
        self.__maxSize = maxSize
        self.__stack = [None]*self.__maxSize
        self.__pos = 0

    def push( self, value ):
        """ Add value to the top of the stack, raises Stack.Full 
            exception is stack is full """
        if self.num_items() < self.__maxSize:
            self.__stack[self.__pos] = value
            self.__pos += 1
        else:
            raise self.Full( 'Can\'t push ' + str(value) )

    def num_items( self ):
        """ Returns the number of values currently stored in the 
            stack """
        return self.__pos

    def top( self ):
        """ Returns the value currently stored at the top of the 
            stack, raises Stack.Empty exception is stack is 
            empty """
        if self.num_items() > 0:
            return self.__stack[self.__pos]
        else:
            raise self.Empty()

    def pop( self ):
        """ Removes and returns the value currently stored at the
            top of the stack, raises Stack.Empty exception is stack
            is empty """
        if self.num_items() > 0:
            self.__pos -= 1
            return self.__stack[self.__pos]
        else:
            raise self.Empty()
