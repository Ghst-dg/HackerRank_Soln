/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
--------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    
    for(int i = a; i < b+1; i++)
    {
    if(i == 1)
        std::cout << "one" << std::endl;
        
    else if(i == 2)
        std::cout << "two";
        
    else if(i == 3)
        std::cout << "three";
        
    else if(i == 4)
        std::cout << "four";
        
    else if(i == 5)
        std::cout << "five";
        
    else if(i == 6)
        std::cout << "six";
        
    else if(i == 7)
        std::cout << "seven";
        
    else if(i == 8)
        std::cout << "eight";
        
    else if(i == 9)
        std::cout << "nine";
        
    else if(i % 2 == 0)
        std::cout << "even";
      
    else
        std::cout << "odd";    
    }
    return 0;
}