// CSC 134 - 0901
// M5T1 
// Name: Josue Rodriguez
// Date: 11/04/2025
// Goal: Practice intro to functions.

#include <iostream>
#include <string>
using namespace std;

// ----- Prototypes -----
void show_greeting(const string& who);   // void: prints a greeting
int triple(int n);                       // returns 3 * n
bool is_even(int n);                     // returns true if n is even

// ----- Definitions -----
int main() {
    cout << "Hello from main()\n";

    // call the void function
    show_greeting("CSC-134");

    // call value-returning functions
    int start = 7;
    int result = triple(start);
    cout << "Triple of " << start << " is " << result << endl;

    if (is_even(result)) {
        cout << result << " is even.\n";
    } else {
        cout << result << " is odd.\n";
    }

    // one more test value
    cout << "Is 12 even? " << (is_even(12) ? "Yes" : "No") << endl;

    return 0;
}

// Prints a simple greeting (no return value).
void show_greeting(const string& who) {
    cout << "Welcome, " << who << "! (from show_greeting)\n";
}

// Multiplies an integer by 3 and returns the result.
int triple(int n) {
    int answer = n * 3;
    return answer;
}

// Returns true if n is divisible by 2.
bool is_even(int n) {
    return (n % 2 == 0);
}
