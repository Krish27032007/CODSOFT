#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std ;

int main () {
int number ;

srand(time(0)) ;
number = rand()  % 100 + 1;

int userNumber ;
cout << "i decide one number between 1 to 100 , guess which number I guess " << endl ;
  
  

while (1) {
cout << "Enter your guess" << endl ;
cin >> userNumber ;
  
  if( number == userNumber ) {
     cout << " You are correct " << endl ;
     break ;
     }
     
  else if (number > userNumber) { 
     cout << "to small " << endl ;
     }
     
  else { 
     cout << " to large " << endl ;
     }
  }
  
  return 0;
  }      