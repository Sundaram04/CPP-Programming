// DIRECT RECURSION
/*
void directRecursiveFunction(int n) {  
 if (n > 0) {  
 cout << n << " ";  
 directRecursiveFunction(n - 1); // Direct recursion  
 }  
}  
*/

// INDIRECT RECURSION
/*
void functionA(int n);  
void functionB(int n);  
  
void functionA(int n) {  
 if (n > 0) {  
 cout << n << " ";  
 functionB(n - 1); // Indirect recursion  
 }  
}  
  
void functionB(int n) {  
 if (n > 1) {  
 cout << n << " ";  
 functionA(n / 2); // Indirect recursion  
 }  
}  
*/

/* ALGORITHM STEPS
Base Case: It defines a termination condition that stops the recursion.

Recursive Case: It expresses the problem in terms of smaller instances of itself.

Implement Function: It writes the function with base case and recursive case.

Adjust Parameters: It modifies input parameters to simplify the problem.

Return Results: It provides a result in the base case(s).

Handle Intermediates: It processes intermediate results if needed.

Manage Call Stack: Understand how frames are pushed and popped.

Test and Debug: Verify correctness and debug if necessary.

Optimize (if needed): Improve efficiency using techniques like memoization or tail recursion.

Call Function: Invoke the recursive function with initial inputs.
*/

/*
 Real-world issues and recursion applications

 Tree Recursion:

 Dynamic Programming and Memoization:

 Recursive Data Structures:

 Recursion with Arrays and Strings:

 Mutually Recursive Data Structures:

 Infinite Recursion:

 Tail Call Optimization (TCO):

 Handling Deep Recursion:

 Divide and Conquer:

 Backtracking:
*/