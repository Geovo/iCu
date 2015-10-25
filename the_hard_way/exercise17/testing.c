#include<stdio.h>

int main ()
{
   FILE *fp;
   char str[] = "This is tutorialspoint.com";

   fp = fopen( "file.dat" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );

   fclose(fp);
  
   return(0);
}
