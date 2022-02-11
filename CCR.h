#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void    print_codes( void );     /* menu of codes */
double  decode_char( char code );
double  decode_multiplier( char code3);

 int main()
{
     char    code1;       /* one code per band */
     char    code2;      /* one code per band */
     char    code3;     /* one code per band */
     double  resistance;
     double  color1;    /* input color values */
     double  color2;   /* input color values */
     double  color3;  /* input color values */
     int     flag;
     int     p;

     /* Print codes and ask  for user input. */
     print_codes();
     printf( "\n\n\tEnter three color  codes of choise :  " );

     /* Read three character codes. */
     code1 = getchar();
     code2 = getchar();
     code3 = getchar();

     /* Decode each character code. */
     color1 = decode_char( code1 );
     color2 = decode_char( code2 );
     color3 = decode_multiplier( code3 );

     /* Check whether codes is valid . */
     if ( color1 == -999.0 )
     {
            printf( "\n\n\t cannot validate the resistance values \n" );

     }
      else if ( color3 == -999.0 )
      {
            printf( "\n\n\t cannot validate the resistance values \n" );

      }
      else if ( color2 == -999.0 )
      {
            printf( "\n\n\t cannot validate the resistance values\n" );

      }
         
          

     /* If codes were correct , compute and print resistance in ohms. */
     else
      {
           p= 10 * color1 + color2;
          resistance =   p  * (color3 );
                                 
                    
          printf( "\n\n\tResistance in ohms:\t%f\n", resistance );
      }

     return EXIT_SUCCESS;
}


