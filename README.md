# Aim: To study and implement C++ Pointer basics
# Software Required:
Visual Studio
# Theory:

A pointer is a special variable that holds the memory address of another variable, rather than storing a direct value itself. Pointers allow programs to access and manipulate data in memory efficiently, making them a key feature for system-level programming and dynamic memory management. When we access a pointer directly, we get the address it holds not the actual data stored at that location.

<img width="900" height="450" alt="Screenshot 2025-08-14 144848" src="https://github.com/user-attachments/assets/4a6f203a-8d58-4acf-97b3-30aa741d3520" />

Assign Address:

The addressof operator (&) determines the address of any variable in C++. This address can be assigned to the pointer variable to initialize it.

Dereferencing:

The process of accessing the value present at the memory address pointed by the pointer is called dereferencing. The (*) Symbol is used for Dereferencing.

<ins>Uses of Pointers</ins>:

Pointers are a useful concept in C++ that allow direct access to memory addresses, providing greater control over memory and data manipulation. Below are some primary uses of pointers in C++:

+ Dynamic Memory Allocation: Pointers allow memory to be allocated dynamically at runtime using operators like new and delete. This enables the creation of objects or arrays whose sizes are determined during execution.

+ Implementing Data Structures: Pointers are used to implementing complex data structures such as linked lists, trees, and graphs, where elements are dynamically allocated and linked together.

+ Pass Arguments by Pointer: Pass the argument with their address and make changes in their value using pointer. So that the values get changed into the original argument.


# Implementation:
Pointers in C++ were implemented using the following codes,
+ Increment of pointers
+ Addition or Subtraction of Pointers
+ Reversing an Array using a Pointer
+ Printing a String using Pointer

# Algorithms:

1. Algorithm for Sum-and-Diff-Between-two-pointers:

Objective:
Calculate the sum and difference of the values stored at two different memory locations (using pointers).

Steps:

Start.

Declare two integer variables, `i` and `j`, and assign them values (e.g., 90 and 80).

Declare two pointer variables, `i1` and `j1`.

Assign the address of `i` to `i1` and the address of `j` to `j1`.

Dereference the pointers to access the values stored at those addresses.

Calculate the sum of the values pointed to by `i1` and `j1`.

Calculate the difference of the values pointed to by `i1` and `j1`.

Output the addresses and the calculated sum and difference.

End.

2. Algorithm for Increment-of-Pointer:

Objective:
Demonstrate how incrementing a pointer moves it to the next memory location of its data type.

Steps:

Start.

Declare an array or an integer variable.

Declare a pointer and assign it the address of the array or variable.

Output the current address stored in the pointer.

Increment the pointer.

Output the new address after incrementing.

Optionally, show the value at the new address if within array bounds.

End.

# Conlusion:
The concept of pointers was discussed along with its implementaion using several codes in C++.
