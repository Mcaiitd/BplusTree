#include <iostream>
class Bplus
{
public:
int key1;
int key2;
Bplus * next;
Bplus * left;
Bplus * center;
Bplus * right;
Bplus * parent;
};

int main()
{
   char ch;
   FILE *fp;
   fp = fopen("input.txt","r");
 
   while( ( ch = fgetc(fp) ) != EOF )
      printf("%c",ch);
 
   fclose(fp);
   return 0;
}
