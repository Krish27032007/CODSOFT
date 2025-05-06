#include <iostream>
using namespace std ;

class game {
private :
         char arr[3][3] ;
         char mark ;
         int slot ;
         int player ;
          int row ;
          int column ;
public :  
         game () {
          reset () ;
          }
          
         void reset () {
            char c = '1' ;
              for ( int i = 0 ; i < 3 ; i++) {
                 for ( int j = 0 ; j < 3 ; j++)  {
                        arr[i][j] = c++ ;
                        }
                     }
                     player = 1 ;
                 }    
          
         void board () {
           for( int i = 0 ; i < 3 ; i++ ) {
                for( int j = 0 ; j < 3 ; j++ ) {
                    cout << " " << arr[i][j] ;
                    if( j < 2 ) {
                      cout << " |" ;
                      }
                   }
                   cout << endl ;
                   if( i < 2 ) {
                    cout << "---|---|---" << endl ;
                    }
                }
          }
          
          void slotMaker () {
               row = (slot - 1) / 3 ;
              column = (slot - 1) % 3 ;
             
             if ( arr[row][column] != 'X' && arr[row][column] != 'O' ) {
                 arr[row][column] = mark ;
                 }
              else {
                 cout << " invalid choice try again " << endl ;
                 slotMaker () ;
                 }
               }
            
          void switchPlayer () {
            player = (player == 1) ? 2:1 ;
            mark = (mark == 'X') ? 'O':'X' ;
            }
           
           bool win () {
            
            for ( int i = 0 ; i < 3 ; i++ ) {
              if( arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] ) {
                 return true ;
                 }
               }
            for ( int i = 0 ; i < 3 ; i++ ) {
              if( arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] ) {
                return true ;
                }
             }
             
             if( arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] ) {
               return true ;
               }                   
               
             if( arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] ) {
             return true ;
             }
             return false ;
          }
          
         bool draw () {
           for(int i = 0 ; i < 3 ; i++) {
              for(int j = 0 ; j < 3 ; j++) {
                      if ( arr[i][j] != 'X' && arr[i][j] != 'O' ) {
                         return false ;
                         }
                    }
               }
               return true ;
           }
           
           void start () {
             cout << " Welcome to tic TAC toe game " << endl ;
             
             cout << "player " << player << "  enter your mark : " << endl ;
             cin >> mark ;
             
             board () ;
             
             while (true) {
                cout << " player  " << player << " enter your slot : (1-9) " << endl ;
                cin >> slot ;
                
                if ( slot < 1 || slot > 9 ) {
                 cout << " invalid choice " << endl ;
                 continue ;
                 }
                 slotMaker () ;
                 board () ;
                 
                 if ( win () ) {
                    cout << " player  " << player << " wins " << endl ;
                    break ;
                    }
                 else if ( draw () ) {
                   cout << " its draw " << endl ;
                   break ;
                   }
                   switchPlayer () ;
               }
               
             char choice ;
             cout << " are you want to play again : (for yes enter Y and for no enter N ) " << endl ;
             cin >> choice ;
             
             if ( choice == 'Y' ) {
                 reset () ;
                start () ;
                }
           }
     };
     
     int main () {
     game Y ;
     Y.start () ;
     return 0;
     }          
          
                                