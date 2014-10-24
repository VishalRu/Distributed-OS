Distributed-OS
==============
Wrote a set of Q-ing routines as follows. The routines manipulate a queue and items.
Q is a pointer to the first element of the queue (aka head pointer) and the queue is circular, doubly linked. 
The items are of type  TCB_t (defined later). The routines are:

InitQ (*Q)  //Note that if Q is a head pointer to the queue, then InitQ will have to be passed &Q.
AddQ(*Q, *item)
DelQ(*Q) // will return a pointer to the item deleted.
RotateQ(*Q) // deletes the head and adds it to the tail, by just moving the header pointer to the next item.

The queue items used for handling the threads is the TCB_t. 
A TCB_t is a structure that contains a next pointer, a previous pointer and a data item of the type “ucontext_t”.

This program will emulate how operating scheduler works.

PS: This was just a part of project. Whole project code is not being uploaded on GitHub.
