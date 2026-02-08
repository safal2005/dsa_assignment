=>Question 2 : to convert infix mathematican expression to postfix expression and evaluate.


This program converts an infix expression into a postfix expression and thenevaluates the postfix expression using a stack.

A stack is used to store operators during conversion and operands during evaluation.

Functions used in the programme are:
=> push() and pop()  
  Used to insert and remove elements from the stack.

=> priority(char op) 
  Returns the precedence of operators.

=> apply(int a, int b, char op) 
  Performs arithmetic operations during postfix evaluation.

Main():
The main function does following tasks:
-takes an infix expression as input,
- converts it into postfix,
-form,evaluates the postfix expression,
-and displays the result.


let us suppose input is :
3+5*2

the output is :
![Output of Question 2][def]

[def]: images/output_2.png
