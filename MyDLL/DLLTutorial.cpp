#include <iostream>
#include "DLLTutorial.h"
 
#define DLL_EXPORT
 
extern "C"
{
   DECLDIR int Add( int a, int b )
   {
      return( a + b );
   }
 
   DECLDIR void Function( void )
   {
      std::cout << "DLL Called!" << std::endl;
   }
}