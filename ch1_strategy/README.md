
This chapter mainly uses a duck example to illustrate the strategy pattern.

Duck class has two variables, FlyBehavior and QuackBehavior. and they are interfaces themselves. For example, FlyWithWings and FlyNoWay implement the Fly interface.

User creates a real duck with these behaviors (using variables implement these interfaces).

Check the figure in P22 (Chinese version)

# Design Principle

Identify the aspects of your application that vary and separate them from what stays the same

# Separating what changes from what stays the same

# Design Principle

Program to interface but not an implementaion

# Design Principle

Favor composition over inheritance (HAS-A can be better than IS-A)


# Implementation Details

+ Since the inheritance is very simple, I just put the baseclasses and subclasses into one file (e.g. All the ducks are in one files). And I also didn't separate definition from declaration.

+ Remember to define virtual destructor in interface class (abstract class in C++), also use const after function if possible.

+ Take care of the memory using new (quite different from Java).

+ `set` interface is very simple so I just ignore it (But be careful when dealing with dynamic memory allocation). 
