 #include <stdio.h>
   void useLocal( void );       /* function prototype */
   void useStaticLocal( void ); /* function prototype */
   void useGlobal( void );      /* function prototype */
   int x = 1; /* global variable */
   /* function main begins program execution */
   int main()
   {
      int x = 5; /* local variable to main */
      printf("local x in outer scope of main is %d\n", x );
      { /* start new scope */                                     
         int x = 7; /* local variable to new scope */               
         printf( "local x in inner scope of main is %d\n", x );     
      } /* end new scope */                                          
      printf( "local x in outer scope of main is %d\n", x );
    useLocal();       /* useLocal has automatic local x */
      useStaticLocal(); /* useStaticLocal has static local x */
      useGlobal();      /* useGlobal uses global x */
      useLocal();       /* useLocal reinitializes automatic local x */
      useStaticLocal(); /* static local x retains its prior value */
      useGlobal();      /* global x also retains its value */
      printf( "local x in main is %d\n", x );
      return 0; /* indicates successful termination */
   } /* end main */
   /* useLocal reinitializes local variable x during each call */
   void useLocal( void )
   {
      int x = 25;  /* initialized each time useLocal is called */
      printf( "\nlocal x in a is %d after entering a\n", x );
      x++;
     printf( "local x in a is %d before exiting a\n", x );
   } /* end function useLocal */
   /* useStaticLocal initializes static local variable x only the first time 
  	the function is called; value of x is saved between calls to this
     function */
   void useStaticLocal( void )
   {
      /* initialized only first time useStaticLocal is called */
      static int x = 50;                                             
      printf( "\nlocal static x is %d on entering b\n", x );
      x++;
      printf( "local static x is %d on exiting b\n", x );
   } /* end function useStaticLocal */
   /* function useGlobal modifies global variable x during each call */
   void useGlobal( void )
   {
      printf( "\nglobal x is %d on entering c\n", x );
      x *= 10;
      printf( "global x is %d on exiting c\n", x );
 }

