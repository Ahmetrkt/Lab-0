/**************************************************************************************************
 * Name: Algi, AHmet
 * Class CST 113 - 02
 * Project: Lab 0
 * Date : 8/28/24
 * 
 * ------------------------------------------------------------------------------------------------
 * Description:
 * This program will check if a user entered value is a prime number.
 * 
 * ------------------------------------------------------------------------------------------------
 * Inputs:
 * prime_check - integer entered by the user; value to be tested. 
 * 
 *-------------------------------------------------------------------------------------------------
 * Outputs:
 * A string that informs the user if the value is prime or not
 * 
 * 
 * 
 *************************************************************************************************/



#include <iostream> //Iostream inclluded for input and output

using namespace std; // Tell the compiler to use the std definition of cin. cput and endl.

int main()
{
int prime_check;// The number to test for being prime
int base = 2; // The base number to divide by
bool is_prime = true; // A true or false variable to store if a number is prime


cout << "Please enter a number greater than or equal to 2; " ;
cin >> prime_check;

while (base < prime_check)
{
    if (prime_check % base == 0)
    {
        is_prime = false;
        base = prime_check;
    }    
    base++; // Increment base by 1

}

cout << " The number " << prime_check; 

if (is_prime)
{
    cout << " Is prime. " << endl;

}
else 
{

    cout << " is not prime. " << endl;
}    
    return 0;

}