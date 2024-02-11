#include <iostream>
using namespace std;

//binary to decimal using bitwise operators

void decimalToBinary(int n){
    
    /*This line starts a for loop that iterates from 31 to 0. 
    It's assuming that the size of an integer is 32 bits, hence 
    the loop starts from 31 (the highest bit) and 
    decrements i until it reaches 0 (the lowest bit).*/
    for (int i=31; i >= 0; i--){
        
        /*Inside the loop, this line shifts the bits 
        of the number n to the right by i positions. 
        This effectively isolates each bit of the number 
        starting from the most significant bit (31st bit) 
        to the least significant bit (0th bit).*/
        int k = n>>i;
        
        /*Checks if the least significant bit of k is 1 or 0 
        using a bitwise AND operation (&) with 1. 
        If it's 1, it prints "1"; otherwise, it prints "0"*/
        if (k&1){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
    
    cout<<"Binary conversion of this number is:";
    decimalToBinary(n);

    return 0;
}

//Time Complexity: O(1)
