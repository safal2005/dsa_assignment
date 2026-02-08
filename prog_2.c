#include<stdio.h>
#include<ctype.h>




char stack[50];  //

int top = -1;  //initialize empty top

void push(char x){ //push 

    stack[++top] = x;
 }



char pop(){ //pop

    return stack[top--]; 
}

int priority(char x){

    if (x == '+' || x == '-'){
        return 1;
    }
    if (x == '*' || x == '/'){
        return 2;
    return 0;
    }
}

int apply(int a, int b, char op){
    switch (op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}


int main(){
    char infix[50], postfix[50];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i]; i++) {
        char ch = infix[i];

        if (isdigit(ch))
            postfix[j++] = ch;

        else{
            while (top != -1 && priority(stack[top]) >= priority(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }

    while(top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
    printf("Postfix: %s\n", postfix);

    
    top = -1;                    //evaluate
    for (i = 0; postfix[i]; i++) {
        char ch = postfix[i];

        if (isdigit(ch))
            push(ch - '0');
        else {
            int b = pop();
            int a = pop();
            push(apply(a, b, ch));
        }
    }

    printf("Result: %d\n", pop());
    return 0;
}
