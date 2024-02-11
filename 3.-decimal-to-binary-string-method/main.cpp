/******************************************************************************
It’s another efficient approach to converting Decimal to binary 
using the right shift(>>) and And(&) operator. 
Here we’ll use only Binary Operators which 
usually are very fast in computation.
*******************************************************************************/

#include <iostream>
using namespace std;


string decimalToBinary(int num)
{
    string str;
    
    while(num){
        if (num & 1){
            str+='1';
        }else{
            str+='0';
        }
        
        num>>=1;    //right shift by 1
    }
    return str;
}

void reverseString(string str){
    for (int i=str.size()-1; i>-1; --i){
        cout<<str[i];
    }
}

int main()
{
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
    
    cout<<"Binary conversion of number is:";
    reverseString(decimalToBinary(n));

    return 0;
}

//Time Complexity: O(logn)
//Space Complexity: O(1)
