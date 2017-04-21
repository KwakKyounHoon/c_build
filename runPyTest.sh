#! /bin/sh
cd pytest
sudo swig -python pre_example.i
sudo gcc -c ../test_example.c pre_example_wrap.c -I/usr/include/python2.7
ld -shared test_example.o pre_example_wrap.o -o _py_test_example.so
pytest --junit-xml=pytest.xml test.py 
