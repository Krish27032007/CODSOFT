#include <iostream>
#include <string>
using namespace std ;

class ToDoList {

private :
        string arr[100] ;
        int TaskCount ;
        bool Arr[100] ;
        int n ;
        int N ;
        
public : 
       void MakeList () {
       
         cout << " How many number of task you want to add in list ? " << endl ;
         cin >> TaskCount ;
         cin.ignore() ;
         
         cout << " enter all task " << endl ;
         for (int i = 0 ; i < TaskCount ; i++) {
              getline(cin, arr[i]);
              }
          }
          
      void DisplayList () {
        
        for ( int i = 0 ; i < TaskCount ; i++ ) {
              cout << " " << i+1 << " . " << arr[i] << endl ;
              }
           }
           
      void addTask () {
     
        cout << " How many other task you want to add ? " << endl ;
        cin >> n ;
        cin.ignore() ;
       
        
        cout << " enter other task you want to add " << endl ;
       
        for ( int i = TaskCount ; i < TaskCount+n ; i++ ) {
           getline(cin, arr[i]) ;
           }
           
           TaskCount += n ;
        }
        
      void Mark () {
        
        DisplayList () ;
        
        cout << " enter 1 ( completed ) or 0 ( pending ) " << endl ;
        
        for ( int i = 0 ; i < TaskCount ; i++ ) {
           cin >> Arr[i];
           }
           
        for ( int i = 0 ; i < TaskCount ; i++ ) {
        
           cout << i+1 << ". "  << arr[i] ; 
           
           if (Arr[i]) {
              cout << "  (completed) " << endl ;
              }
              
           else {
               cout << "  (pending) " << endl ;
               }
           }     
      
         } 
        
        void RemoveTask () {
        
        DisplayList() ;
        
          cout << " enter the number of task you want to remove " << endl ;
          cin >> N ;
        
          for ( int i = N - 1; i < TaskCount ; i++ ) {
           arr[i] = arr[i+1] ;
           }
           
           TaskCount -- ;
           
           DisplayList () ;
           
           }
         
       void start () {
       int choise ;
       
       while (1) {
       cout << " 1 . make list of task " << endl ;
       cout << " 2 . Display list " << endl ;
       cout << " 3 . adding extra task " << endl ;
       cout << " 4 . mark as completed or not " << endl ;
       cout << " 5 . remove any task you want " << endl ;
       cout << " 6 . exit " << endl ;
       
       cout << " enter the number of task you want to perform " << endl ;
       cin >> choise ;
       
       switch ( choise ) {
       
       case 1 :  MakeList () ;
                 break ;
        
       case 2 : DisplayList () ;
                 break ;
                 
       case 3 :  addTask () ;
                  break ;
                  
       case 4 :  Mark () ;
                 break ;
       
       case 5 :  RemoveTask () ;
                 break ;
         
       case 6 :   return ;
       
              default :
              cout << " invalid choise . try again " << endl ;
              }
           }
         }
     };
              
    int main () {
    ToDoList y ;
    y.start () ;
    return 0 ;
    }                   
                                       
       
           
              
     
        
        
              
                   
            
       
         