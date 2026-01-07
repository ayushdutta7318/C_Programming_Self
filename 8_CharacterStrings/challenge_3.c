#include <stdio.h>

//1. find length of str
int lengthOfString(char str[]){
    int count =0;
    int i =0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

//2. concatenate str
void concatStr(char result[], const char str1[], const char str2[]){

    int len1 = lengthOfString(str1);
    int len2 = lengthOfString(str2); 
    
    if(len1>len2){
        for(int i =0; i<len1)
    }
}

int main(void){
    char testStr[] = "ayush"; 
    printf("The length of %s is %d\n",testStr,lengthOfString(testStr));
    return 0;
}