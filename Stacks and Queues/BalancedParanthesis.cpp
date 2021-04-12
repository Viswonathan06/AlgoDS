#include<iostream>
#include "stack_char.h"
#include<string>
bool Balanced_Paranthesis( struct Node* stack , std::string expression ){
   
    while(!expression.empty()){
        if( stack == NULL)
            push( &stack, expression[0]);
        else if( expression[0] == '{' || expression[0] == '[' || expression[0] == '('){
            push( &stack, expression[0]);
        }
        else if( expression[0] == '}'){
            if ( peek( stack )== '(' ||  peek( stack )== '[' )
                return false;
            else 
                pop( &stack);

        }
        else if( expression[0] == ')'){
            if ( peek( stack )== '{' ||  peek( stack )== '[' )
                return false;
            else 
               pop( &stack);

        }
        else if( expression[0] == ']'){
            if ( peek( stack )== '{' ||  peek( stack )== '(' )
                return false;
            else 
                pop( &stack);

        }
        
        expression = expression.substr(1);
    }
    //parseList( stack );
    
    return isEmpty(stack);        
}
    



int main(){
    struct Node* stack = NULL;
    std::string expression = "{{()[}}";
    //getline( cin, expression);

    // push(&stack, '{');
    // push(&stack, '[');{}
    // push(&stack, '(');
    // push(&stack, '[');
    // push(&stack, ']');
    // push(&stack, '{');
    // push(&stack, '}');
    // push(&stack, ')');
    // push(&stack, ']');
    // push(&stack, '}');
    
    Balanced_Paranthesis( stack, expression)? std::cout<<"true":std::cout<<"false";
    

}