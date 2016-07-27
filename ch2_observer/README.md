
# Observer

# Design Principle

Strive for loosely coupled designs between objects that interact

Check the figure in P56 in Chinese version



Looks like that in this design pattern each class is not quite independent...

+ WetherData implemnts Subject but has Observer

+ CurrentConditionDisplay implements Observer and DisplayElement but has Subject
