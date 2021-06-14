#include<stdio.h>

void greatest_smallest(int a,int b,int c,int *small, int *large){
    if(a>b){
        *small=b;
        *large=a;
    }
    
    else{
        *small=a;
        *large=b;
    }
    
    if(c>*large)
        *large=c;
    if(c<*small)
        *small=c;
    
}

int main(){
    int a,b,c,small,large;
    
    scanf("%d%d%d",&a,&b,&c);
    
    greatest_smallest(a,b,c,&small,&large);
    
    printf("smallest=%d\tlargest=%d",small,large);
}
