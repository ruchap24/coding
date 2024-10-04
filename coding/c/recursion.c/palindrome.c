#include<stdio.h>
static boolean is palindrome(string input)
{
    if(input.length()==0|| input.length()==1){
        return true;
    }
    if(input.charAt(0)==imput.charAt(input.length()-1)){
        return is palindrome(input.snbstring(1,input.length()-1));
    }
    return false;
}
