#include <iostream>
using namespace std ;

class Calculator {
private :
         int a ;
         int b ;
public :
         void values(int c , int d ) {
          a = c ;
          b = d ;
          }
          
         void sum () {
          cout << " Addition is :  " << a+b << endl ;
          }
          
         void Substraction () {
          cout << " Substraction is : " << a-b << endl ;
          }
          
         void Multiply () {
          cout << "Multiplication is : " << a*b << endl ;
          }
          
         void division () {
          cout << "Division is : " << a / b << endl ;
          }
       };
       
       int main () {
       int c , d ;
       
       cout << " Enter a and b : " << endl ;
       cin >> c >> d ;
       
       Calculator A ;
       A.values(c , d) ;
       
       int choise ;
       
       while (1) {
       
       cout << "1.addition " << endl ;
       cout<< "2.substraction " << endl ;
       cout << "3.multiplication " << endl ;
       cout << " 4.division " << endl ;
       
      cout << " which number of calculation you want to perform : " << endl ;
      cin >> choise ;
      
      
      
      switch (choise) {
        case 1 :  
                 A.sum () ;
                 break ;
        case 2 :  
                A.Substraction () ;
                break ;
        case 3 :
               A.Multiply () ;
               break ;
        case 4 :
               A.division () ;
               break ;
          }
               
      }                
                
   return 0;
   }          
          
                   