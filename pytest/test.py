import py_test_example
import unittest

class SimpleTest(unittest.TestCase):
    def test_pass(self):
        self.assertEqual(499500, py_test_example.sum(1000))
