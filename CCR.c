#include<stdio.h>
#include "CCR.h"

void  print_codes( void )
{
   printf( "\n\n\tThe colored bands are coded as follows:\n\n\n\t" );
   printf( "COLOR\t\t\tCODE\n\t" );
   printf( "-----\t\t\t----\n\n" );
   printf( "\tBlack-------------------> B\n" );
   printf( "\tBrown-------------------> N\n" );
   printf( "\tRed---------------------> R\n" );
   printf( "\tOrange------------------> O\n" );
   printf( "\tYellow------------------> Y\n" );
   printf( "\tGreen-------------------> G\n" );
   printf( "\tBlue--------------------> E\n" );
   printf( "\tViolet------------------> V\n" );
   printf( "\tGray--------------------> A\n" );
   printf( "\tWhite-------------------> W\n" );
}
double decode_char( char code )
{
     switch ( code ) {
     case 'B':
          return 0.0;
          break;
     case 'N':
          return 1.0;
          break;
     case 'R':
          return 2.0;
          break;
     case 'O':
          return 3.0;
          break;
     case 'Y':
          return 4.0;
          break;
     case 'G':
          return 5.0;
          break;
     case 'E':
          return 6.0;
          break;
     case 'V':
          return 7.0;
          break;
     case 'A':
          return 8.0;
          break;
     case 'W':
          return 9.0;
          break;
     default:
          return -999.0;     
     }
}
double decode_multiplier(char  code3 )
{
    switch (code3){
        case 'B':
          return 1.0;
          break;
     case 'N':
          return 10.0;
          break;
     case 'R':
          return 100.0;
          break;
     case 'O':
          return 1000.0;
          break;
     case 'Y':
          return 10000.0;
          break;
     case 'G':
          return 100000.0;
          break;
     case 'E':
          return 1000000.0;
          break;
     case 'V':
          return 10000000.0;
          break;
     case 'A':
          return 100000000.0;
          break;
     case 'W':
          return 1000000000.0;
          break;
     default:
          return -999.0;  

    }
}