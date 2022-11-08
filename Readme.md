## linked list

>linked list is a list of nodes who is linked by pointer.so if you whant to create linked list. you must know about the pointer and pointer applications.

## How to create linked list

>### Step-1
> first you will create a structure   which name is node who is contain 2 variable one is int type and another is node type.
 ```C
 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>

 struct node{
   int data;
   struct node *next;
 };
  ```
>### Step-2
> second step is that you will create a struct node type pointer who is containt NULL.and this is a globel variable so it will declier outside of the main.
 ```C
 struct node *start=NULL;
  ```
>### Step-3
> I will create some method of insertion, delete update and view.
* Insertion Methods
    * insertNodeStart()
    * insertNodeEnd()
    * insertNodeWithId(int id)
* Show methods
    * readNodeWithId(int id)
    * readNodeList();
* Update method
    * updateNodeWithId(int id)
* Delete methods
    * deleteNodeStart()
    * deleteNodeEnd()


