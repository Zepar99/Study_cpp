#include <iostream>


int main()
{
  
 int x = 50;
 int y = 25;
 int temp;
 
 std:: cout << "Your First Number Is: "<< x <<"\n";
 std:: cout << "Your Second Number Is: "<< y <<"\n";
  
 temp = x;
 x = y;
 y = temp;
  
 std:: cout << "Numbers After Swaping \n";
 std:: cout << "Your First Number Is: "<< x <<"\n";
 std:: cout << "Your Second Number Is: "<< y <<"\n";
 
}
