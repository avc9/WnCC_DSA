#include<iostream>
using namespace std;

void greatest_smallest(int a,int b,int c,int &small, int &large){
    small=min(a,min(b,c));
    large=max(a,max(b,c));
}

int main(){
    int a,b,c,small,large;
    
    cin>>a>>b>>c;
    
    greatest_smallest(a,b,c,small,large);
    
    cout<<"smallest="<<small<<"\tlargest="<<large;
    
    return 0;
}
