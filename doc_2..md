Question 1: Program to check if the given expression has balanced parenthesis using stack . 

In this program , the input expression is checked if the input expression has complete pair of parenthesis like :'()','{}','[]', using stack whick follows Last In First Out(LIFO) principle. 

In program following functions are used:

1. void push(char c):

=> The function take an character argument c. it initializes c to the top value of stack.

2. char pop():

=>The pop function returns  the removed/popped value of the top of stack.

3. int match(char open, char close):

=> The function takes two character arguments .
The function makes sure if the opening and closing brackets match . Basically , if opening bracket is '{' , the closing bracket is '}' strictle .If it matches , the function returns true value '1' else returns false value '0'.

4. int balance(char exp[]):
=> The function takes a character argument . It travels/traverses throughout the input expression and makes sure if the input parenthesis present in the expression are balanced . 


Main ():
The main function take input expression from user using fgets . It passes the expression to the balance function and returns the result if the parenthesis is balanced or not and prints the result .


Output :
![Output of Question 2][def]


[def]: images/output_2.png