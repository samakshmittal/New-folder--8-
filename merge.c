#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   // Open two files to be merged
   FILE *fp1 = fopen("ab.c", "r");
   FILE *fp2 = fopen("array.c", "r");
  
   // Open file to store the result
   FILE *fp3 = fopen("file3.c", "w");
   char c;
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
  
   // Copy contents of first file to file3.txt
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
  
   // Copy contents of second file to file3.txt
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
  
   printf("Merged file1.txt and file2.txt into file3.txt");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}