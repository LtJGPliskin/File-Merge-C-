#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char delim[2] = ",";
void merge(FILE * a, FILE * b, FILE * c);//makes template for merge
void find();//makes template for find

void merge(FILE * a, FILE * b, FILE * c)//merges the two files 
{
  fprintf(c,"%s",  a);//merges file a with file c
  fprintf(c,"%s", b);//merges file b with file c
  printf("File merging complete");//reports that the merge worked
}
void find()//finds the inputted values
{
  FILE *fpfinal;//creates a file variable
  fpfinal = fopen("elements.csv", "r");//opens the elements file
    if(fpfinal == NULL)//checks to see if the file is null
	 {				  
	   printf("Error loading file.");//runs the error
	   exit(1);//exits with an error	      
	  }
  
}
int main(int argc, char *argv[])//runs the program
{
  FILE *fp1;//creates a file variable 
  FILE *fp2;//creates a file variable 
  FILE *fpfinal;//creates a file variable 

  fp1 = fopen("elements_file1.csv", "r");//stores a file variable 
  fp2 = fopen("elements_file2,csv", "r");//stores a file variable
  fpfinal = fopen("elements.csv", "w");//stores a file variable
  if(fp1 == NULL || fp2 == NULL)//checks to see if the files are not null
    {
      printf("Error loading file.");//runs the error
      exit(1);//exits with an error
      }
  merge(fp1, fp2, fpfinal);//merges the files
}
