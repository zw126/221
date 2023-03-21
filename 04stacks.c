#include"stdio.h"
#include"stdlib.h"
#define N 6

typedef struct 
{
    char letter[N];
    int top ;

}stack;

int pin(stack *alphbet,char data);
int pout(stack *alphbet);

int pin(stack *alphbet ,char data){
    if( alphbet->top!=N ){
        printf("pushin sucessfully\n");
        alphbet->top++;
        alphbet->letter[alphbet->top]=data;
        
        //printf("%d\n",alphbet->top);
        return 1;
    }
    alphbet->top--;
    printf("stacks is full\n");
    return 0;
}

int pout(stack *alphbet){
    if( alphbet->top != -1 ){
        
        printf("%c\n",alphbet->letter[alphbet->top]);
        alphbet->top--;
        printf("pushout sucessfully\n");
        
        return 0;
    }
    printf("stacks is empty");
    return 0;
}



int main(){
    stack *alphbet;
    alphbet = (stack*)malloc(sizeof(stack));
    char data;
    alphbet->top=-1;
    //alphbet->top++;

    //alphbet->letter[alphbet->top]='a';

    //scanf("%c\n",&alphbet->letter[alphbet->top]);
    //printf("%c\n",alphbet->letter[alphbet->top]);

    //printf("%d",alphbet->top);
    for(int i=0;i<N;i++){
    scanf("%c\n",&data);
    pin(alphbet,data);
    }
    
    
    //printf("%d\n",alphbet->top);
    for(int i=0;i<N;i++)
        pout(alphbet);
    
    
 
    

}