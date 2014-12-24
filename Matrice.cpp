
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Matrice.h"

//============================================================================
//                           Function definitions
//============================================================================
// Getters
int Matrice::GetRow(void) const
{
  return row;
}

int Matrice::GetColumn(void) const
{
  return column;
}

int** Matrice::GetData(void) const
{
  return data;
}



// Constructors
Matrice::Matrice(void)
{
  row = 0;
  column = 0;
  data = NULL;
}

Matrice::Matrice(const Matrice& mat)
{
  row = mat.GetRow();
  column = mat.GetColumn();
  data = new int*[row];
  for(int k = 0; k < row; k++)
  {
    data[k] = new int[column];
  }
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < column; j++)
    {
    data[i][j] = mat.GetData()[i][j];
    }
  }
}

Matrice::Matrice(int n, int p, int val)
{
  row = n;
  column = p;
  data = new int*[row];
  for(int k = 0; k < row; k++)
  {
    data[k] = new int[column];
  }
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < column; j++)
    {
    data[i][j] = val;
    }
  }
}


// Destructor
Matrice::~Matrice(void)
{
  for (int i = 0; i < row; i++)
    {
    delete[] data[i];
    }
  delete[] data;
}

// Functions
void Matrice::affiche()
{
  for(int i = 0; i < row; i++)
  {
      for(int j = 0; j < column; j++)
      {
          printf("%4d", data[i][j]);
      }
      printf("\n");
  }  
} 
  
void Matrice::read_from_file(const char* name, int n, int p)
{
  // Create file
  FILE* mat_tmp=fopen(name,"r");

  // Allocate memory according to width and height
  row = n;
  column = p;
  data = new int*[row];
  for(int k = 0; k < row; k++)
  {
    data[k] = new int[column];
  }
 
   // Read the data from the file
  for(int i = 0; i < row; i++)
    {
    for(int j = 0; j < column; j++)
    {
    fscanf(mat_tmp,"%d;",&data[i][j]);
    }
  }

  // Close file
  fclose(mat_tmp);
}

