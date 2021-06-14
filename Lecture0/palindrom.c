#include<stdio.h>
#include<string.h>

int iterative_palindrom(char s[]){
    int len=strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1])
            return 0;
    }
    
    return 1;
}

int recur_palindrom(char s[],int start,int end){
    if(start>end)
        return 1;
    
    else if(s[start]!=s[end])
        return 0;
        
    else
        return recur_palindrom(s,start+1,end-1);
}

int main(){
    char *str1="LOOL";
    char *str2="CHESS";
    char *str3="LOL";
    
    printf("Iterative Method:\n");
    
    (iterative_palindrom(str1))?printf("YES\n"):printf("NO\n");
    (iterative_palindrom(str2))?printf("YES\n"):printf("NO\n");
    (iterative_palindrom(str3))?printf("YES\n"):printf("NO\n");
    
    
    printf("Recursive Method:\n");
    
    (recur_palindrom(str1,0,strlen(str1)-1))?printf("YES\n"):printf("NO\n");
    (recur_palindrom(str2,0,strlen(str2)-1))?printf("YES\n"):printf("NO\n");
    (recur_palindrom(str3,0,strlen(str3)-1))?printf("YES\n"):printf("NO\n");
    
    
    return 0;
}
