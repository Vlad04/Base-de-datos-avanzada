#include <iostream> 
#include <string.h> 
#include <stdlib.h>

int main(int argc, char** argv) 
{
 char letras[256] = {"Hoy puede ser un gran dia, tomatelo así."};
 char histograma[256] = {0};
 int i,j;
 
 for( i = 0 ; i < strlen(letras) ; ++i )
 {
  histograma[letras[i]]++;
 }
 
 for( i = 0 ; i < 256 ; ++i )
 {
  std::cout << (char) i << ": ";
  for(j = 0 ; j < histograma[i]; ++j)
  {
   std::cout << "*";
  }
  
  std::cout << std::endl;
 }
  
 system("pause");
 
 return 0;
}
