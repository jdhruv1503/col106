#include <iostream>   // Import stuff

// Strongly typed: each var has a type

int inch; // definition
inch = 2; //assignment





// Functions and conditionals

int someFunc(char input) {     // returnType name(formal parameter list, with type)

    if ( input == 'y' ) {
        return 1;
    }

    else {
        return 0;
    }

}





// Iteratives

bool accept() {

    int tries = 1;  // Definition and assignments at once

    while ( tries < 4 ) {  // While loop

        std::cout << "Proceed (y/n)?\n" << endl;   // :: is a scope resolution operator; std is an inbuilt scope/namespace but you can build your own 
        char answer = 0;
        std::cin >> answer;

        switch(answer)  {
            case 'y': return true;
            case 'n': return false;
            default: std::cout >> "Unknown option\n"; tries++;
        }

    }

}

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++) {   // For loop

        sum += i;

    }

    std::cout << sum << endl;
    return 0;

}





// Scopes: global, local, block

int globalVar;   // global variable, accessible in the entire program

void someFunction () {

    globalVar = 10; // Valid!
    int localVar = 5; // Valid! But this is a local variable defined in this function. It's destroyed as soon as function finishes and can't be accessed outside

    {
        // Block scope: defined by {}
        // localVar is still accessible here; it's declared outside from the scope's POV

        int blockVar = 5; // Valid! This is a block scope variable. It's destroyed as soon as block finishes and can't be accessed outside
    }

    // blockVar is no longer accessible here but localVar and globalVar still are

}

// only globalVar is accessible here, blockVar and localVar have been destroyed





// Static vars

void someFunc() {

    static int x = 30;
    x++;

}

// x is NOT accessble here (scopes still apply to static variables)
// HOWEVER C still keeps track of it. If we call someFunc again, x starts as 31 and increases to 32.
// HOME READING: Read more about keywords: extern, const, public, private, protected, namespace, volatile, mutable; also, what's the difference bw pointers and references?





// Pointer
// A variable that leads to the memory address of another variable

int *p;     // *p is a pointer that points to an integer location that I can assign later

int x = 5;
p = &x      // p now points to the address of x.

int y = *p; // Get the value that p is pointing to. Note y is just a regular int value, not a pointer. This is called DEREFERENCING

*p = 20;    // Dereference p in order to change the value of memory location


