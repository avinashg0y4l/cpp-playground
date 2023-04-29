#include<iostream>    
using namespace std;  
int factorial(int);   

int main()    
{    
 
int res,value;    
cout<<"Enter any number: ";    
cin>>value;    
res=factorial(value);    
cout<<"Factorial of a number is: "<<res<<endl;    
return 0;    
}    
int factorial(int n)    
{    
if(n<0)    
return(-1); /*Wrong value*/      
if(n==0)    
return(1);  /*Terminating condition*/    
else    
{    
return(n*factorial(n-1));        
}    
}  