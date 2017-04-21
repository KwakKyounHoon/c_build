import life
import unittest

class SimpleTest(unittest.TestCase):
    @unittest.skip("demonstrating skipping")
    def test_skipped(self):
        self.fail("shouldn't happen")

    def test_pass(self):
        self.assertEqual(10, life.add(5, 5))

    def test_fail(self):
        self.assertEqual(11, life.add(5, 5))
