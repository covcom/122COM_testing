from lab_stack import *
import unittest

class StackTest(unittest.TestCase):
    def setUp(self):
        self.testvalues = 'abcde'
        self.s = Stack( len(self.testvalues) )

    def tearDown(self):
        pass

    def test_size(self):
        """ test that stack reports the correct number of things on the stack """

        for index, val in enumerate(self.testvalues):
            self.assertEqual( self.s.num_items(), index )

            self.s.push( val )

        for i in range(len(self.testvalues), 0, -1):
            self.assertEqual( self.s.num_items(), i )

            self.s.pop()

        self.assertEqual( self.s.num_items(), 0 )

    def test_empty(self):
        """ test that stack raises Empty exception when popping an empty stack """

        self.assertRaises( Stack.Empty, self.s.pop )

        self.s.push( self.testvalues[0] )
        self.s.pop()

        self.assertRaises( Stack.Empty, self.s.pop )            


    def test_full(self):
        """ test that the stack raises Full exception when push on a full stack """

        for i in self.testvalues:
            self.s.push(i)

        self.assertRaises( Stack.Full, self.s.push, 'a' )

    def test_top(self):
        """ test that the stack reports the correct values on the top of the stack """

        self.assertRaises( Stack.Empty, self.s.top )

        for i in self.testvalues:
            self.s.push(i)

            self.assertEqual( self.s.top(), i )

if __name__ == '__main__':
    unittest.main()
