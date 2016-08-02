# Factory Pattern


1. Simple pizza factory, P117

2. Pizza store framework (Factory Method Pattern), P131

    Different PizzaStores inherit PizzaStore. createPizza is a virtual function.

    **The Factory Method Pattern** defines an interface for creating object, but lets subclasses decide which class to instantiate. 
    Factory Method lets a class defer instantiation to subclasses. P134

    Design Principle:

    Depend upon abstraction. Do not depend upon concrete classes.

3. Abstract Factory Pattern, P156

    **The Abstract Factory Pattern** provides an interface for creating families of related or dependent objects without specifying their concrete classes. P156

    Each Pizza has an ingredient factory. Use the factory to prepare the pizza.
