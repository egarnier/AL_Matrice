
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Matrice.h"

//============================================================================
//                                  Main
//============================================================================
int main(int argc, char* argv[])
{
 
 printf("Hello World !\n");
 Matrice A = Matrice(3,6,1);
 A.affiche();
 Matrice B;
 B.read_from_file("test.csv",3,4);
 printf("The matrice read from the file is :\n");
 B.affiche();
 
 return 0;   
}