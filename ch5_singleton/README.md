# Singleton

use `-std=c++11 -lpthread` to compile

The Singleton Pattern ensures a class has only one instance, and provides a global point of access to it.

Remarks:

Singleton Pattern is very simple but useful. Use double-checked locking in multi-thread environment. In Java, we can use `synchronized` keyword to make a critical section, in C++, we need to use lock and mutex.

Actually, we can use C++ style to implement Singleton. And C++11
will gurantee that the initialization is thread-safe.
