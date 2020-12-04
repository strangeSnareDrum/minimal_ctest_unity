Hi.

Preparations
```
git submodule update --init --recursive
```

Build
```
mkdir build
cd build
cmake ..
cmake --build .
```

Run tests
```
ctest
```

Disable tests
```
cmake .. -DUNIT_TESTS_ENABLED=OFF
```
