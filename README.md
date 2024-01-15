# Custom-C-Library-Stack-
Custom Library in C (Stack)

# USING AND LINKING LIBRARY CODE
To use a Library that is not linked into your program automatically by
the compiler, you need to 

(1) include the library's header file in your
C source file (test.c in the example below), and 

(2) tell the compiler to
link in the code from the library .o file into your executable file:

    step 1: Add an include line (#include "somelib.h") in a program 
            source file (e.g., test.c).

    step 2: Link the program's .c file with the library object file 
	    (i.e. specify the somelib.o file as a command line argument to gcc): 

	  gcc  -o myprog test.c somelib.o
 
    The resulting executable file (myprog) will contain machine code 
    for all the functions defined in test.c plus any mylib library 
    functions that are called by 
