from lab_queue import *
import unittest

class QueueTest(unittest.TestCase):
    def setUp(self):
        self.testvalues = 'abcde'
        self.q = Queue( len(self.testvalues) )

    def tearDown(self):
        pass

    # COMPLETE ME

    def test_something(self):
        pass

if __name__ == '__main__':
    unittest.main()



