class Queue:
    class Full(Exception):
        pass
    class Empty(Exception):
        pass

    def __init__( self, maxSize ):
        """ Initialise the queue, maxSize is the maximum number of
            values that can be stored in the queue at any time """
        self.__maxSize = maxSize
        self.__queue = [None]*self.__maxSize
        self.__items = 0

    def push( self, value ):
        """ Add value to the top of the queue, raises queue.Full 
            exception is queue is full """
        if self.num_items() < self.__maxSize:
            self.__queue[self.__items] = value
            self.__items += 1
        else:
            raise self.Full( 'Can\'t push ' + str(value) )

    def num_items( self ):
        """ Returns the number of values currently stored in the 
            queue """
        return self.__items

    def front( self ):
        """ Returns the value currently stored at the top of the 
            queue, raises queue.Empty exception if queue is 
            empty """
        if self.num_items() > 0:
            return self.__queue[0]
        else:
            raise self.Empty()

    def back( self ):
        """ Returns the value currently stored at the back of the 
            queue, raises Queue.Empty exception if the queue is
            empty """

        if self.num_items() > 0:
            return self.__queue[self.__items-1]
        else:
            raise self.Empty()

    def pop( self ):
        """ Removes and returns the value currently stored at the
            top of the queue, raises queue.Empty exception is queue
            is empty """
        if self.num_items() > 0:
            value = self.__queue[0]                        # get the value at the front of the queue

            for i in range(self.__items-1):                # shuffle everything forward one space
                self.__queue[i] = self.__queue[i+1]

            self.__items -= 1                            # reduce the item count by 1

            return value                                 # return the value that was at the front

        else:
            raise self.Empty()
