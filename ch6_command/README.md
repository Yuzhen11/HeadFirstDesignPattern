# The Command Pattern

1. SimpleRemoteControl

    **The Command Pattern** encapsulates a request as an object, thereby letting
    you parameterize other objects with different requests, queue or log requests,
    and support undoable operations.

    The key point is that SimpleRemoteControl holds a pointer to the interface Command

    P207

2. RemoteControl

    Almost the same.

    P215

    Undo is simple, so is omitted. Another Command in RemoteControl to keep track of last Command.
    
    Party is also simple, so is omitted. Just to implement a new Command, by grouping some of the Command. 
