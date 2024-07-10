#include <iostream>

using namespace std;

// Global variable declaration
int globalVar = 10;

// Function prototypes
void showGlobalVar();
void modifyGlobalVar();
void localVarScope();

int main() {
    // Local variable declaration
    int localVar = 20;

    cout << "Initial values:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable (in main): " << localVar << endl;

    // Calling functions
    showGlobalVar();
    modifyGlobalVar();
    showGlobalVar();
    localVarScope();

    // Showing the value of localVar again to show its scope is limited to main
    cout << "Local variable (in main) after calling localVarScope: " << localVar << endl;

    return 0;
}

// Function to show the value of the global variable
void showGlobalVar() {
    cout << "Global variable (in showGlobalVar): " << globalVar << endl;
}

// Function to modify the global variable
void modifyGlobalVar() {
    globalVar += 5;
    cout << "Global variable (in modifyGlobalVar) after modification: " << globalVar << endl;
}

// Function to demonstrate local variable scope
void localVarScope() {
    int localVar = 30; // This local variable is different from the one in main
    cout << "Local variable (in localVarScope): " << localVar << endl;
    // Modifying the local variable inside this function
    localVar += 10;
    cout << "Local variable (in localVarScope) after modification: " << localVar << endl;
}

