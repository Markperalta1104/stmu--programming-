#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(); //function prototype

int main()
{
   unsigned int loop; //loop counter
   int headCount = 0; //total Heads count
   int tailcount = 0; //total  Tails count

   srand( time( NULL ) ); // seed random number generator

   // simulate coin toss, 0 refers to tails
   for ( loop = 1; loop <=200; ++loop ) {

      // simulate coin toss, o refers to tails
      if ( flip() == 0 ) {
         ++tailCount; // update Tails count
      }  // end if
      else {
        ++headCount; //update Heads Count
      } // end else

      if ( loop %20 == 0 ) {
        puts( "" );
      } // end if

   } // end for

   // display totals
   printf( "\nThe total number of Heads was %d\n", headcount );
   printf( "The total number of Tails was %d\n", tailcount );
} //end main

//flip uses random number to simulate coin toss
int flip() {
   int HorT = rand()%2; // scale by 2 for binary result

    // display result of flip
    if (0 == HorT ) {
        printf( "%s", "T ");
    } // end if
    else {
        printf( "%s", "H ");
    } // end else

    return HorT; // return result of coin toss
 } // end function flip

