#include<stdio.h>

int gcd(int m,int n){
    if(m%n==0)
        return n;
    else
        return gcd(n,m%n);
}

int main(){
    int m,n;
    
    scanf("%d%d",&m,&n);
    
    printf("GCD of %d and %d is %d\n",m,n,gcd(m,n));
    
    return 0;
}
