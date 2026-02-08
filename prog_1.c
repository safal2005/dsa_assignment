#include<stdio.h>
#include<string.h>
#define MAX 25  //defined size

char stack[MAX];  //stack initialized
int top = -1;

void push(char c){  //push

    stack[++top] = c;

}

char pop(){  //pop

    return stack[top--];

}

int match(char open, char close){  //function to check if the matching partenthesis pair is pesent in the expression
    if (open =='(' && close ==')'){
         return 1;
    }
    if (open =='{' && close =='}'){
        return 1;
    }
    if (open =='[' && close ==']'){
         return 1;
    }
    return 0;
}

int balance(char exp[]) {  //function to check if the expression is balanced
    for (int count = 0; exp[count]; count++){
        char ch = exp[count];

        if (ch =='(' || ch =='{' || ch =='[')
            push(ch);

        else if (ch ==')' || ch =='}' || ch ==']') {
            if (top ==-1){
                return 0;
            }
            if (!match(pop(), ch)) return 0;
        }
    }
    return top ==-1;
}

int main() { //main
    char exp[100];

    printf("Enter expression: ");
    fgets(exp, sizeof(exp), stdin);

    if (balance(exp))
        printf("Balanced Expression\n");
    else
        printf("Not Balanced Expression\n");

    return 0;
}