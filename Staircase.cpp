/*Staircase detail

This is a staircase of size :

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Function Description

Complete the staircase function in the editor below.

staircase has the following parameter(s):

int n: an integer
Print

Print a staircase as described above.

Input Format

A single integer, , denoting the size of the staircase.

Constraints

 .

Output Format

Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .
----------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;
    
    for(int j = 1; j < n + 1; j++)
    {
        for(int i = n - j; i >= 0; i--)
            std::cout << " ";
                
        for(int i = 0; i < j; i++)
            std::cout << "#";
            
        std::cout << std::endl;
    }
}