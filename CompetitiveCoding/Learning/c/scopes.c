#include <stdio.h>
#include <stdlib.h>

int x = 0;

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int main(int argc, char** argv){

	int x = 5; //local to main

	printf("1: local x in outer scope is %d\n", x);

	//start new scope
	{
		int x = 2;
		printf("2: local x in inner scope is %d\n", x); // local variable new scope
	}
	//end of new scope

	printf("3: local x in outer scope is %d\n", x);

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	printf("4: local x in main is %d\n", x);

	return 0;
}

void useLocal(void){
	int x = 25; //initialized each time useLocal is called

	printf("5: local x in useLocal is %d\n", x);
	++x;
	printf("6: local x in useLocal is %d\n", x);
}

//useStaticLocal initializes static local varable x only the first time the function is called, value of x is saved between calls to this function
void useStaticLocal(void){
	//initialized once 
	static int x = 50;

	printf("6: local static x in useStaticLocal is %d\n", x);
	++x;
	printf("7: local static x in useStaticLocal is %d\n", x);
}

//function useGlobal modifies global variable x during each call
void useGlobal(void){

	printf("8: global x in useGlobal is %d\n", x);
	++x;
	printf("9: global x in useGlobal is %d\n", x);

}

//conclusion 

// C:

// Scope: In C, static can be applied to both variables and functions.
// Static variables:
// Have program-wide scope, meaning they can be accessed from any part of the program.
// Retain their value between function calls.
// Static functions:
// Don't have access to the "this" pointer (which refers to the current object instance).
// Can only access other static variables and functions from the same file (similar to private members in other languages).
// Java:

// Scope: static is primarily used with classes.
// Static variables (class variables):
// Belong to the class itself, not to any specific object instance.
// Shared by all instances of the class. Any change to a static variable by one object reflects in all other objects.
// Static methods:
// Can be called without creating an object of the class.
// Can only access other static members of the class.


// C:

// Global variables are declared outside of any function and can be accessed by any function in the program. This can lead to tight coupling and difficulty in maintaining code.
// Java:

// Java doesn't have true global variables in the same sense as C. Its object-oriented nature discourages global data access.
// However, Java offers alternatives to achieve similar functionality:

// Static Class Variables:

// Declare variables as static within a class. These variables are shared by all instances of the class and act similarly to global variables in terms of accessibility.
// Singleton Pattern:

// Create a class with a single instance that can be accessed globally. This provides more control compared to true globals and ensures only one instance exists.