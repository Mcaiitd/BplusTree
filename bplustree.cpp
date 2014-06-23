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
    Bplus *root;Bplus *start;Bplus *start2;
    int k1,k2;int a;
    char ch;
    FILE *fp;
    fp = fopen("input.txt","r");
    
    k1=fgetc(fp)-48;ch =fgetc(fp);k2= fgetc(fp)-48;ch =fgetc(fp);
    Bplus rot;
    if(k1>=0) rot.key1=k1;
    if (k2>=0) rot.key2=k2;
    root = &rot;

    start = root;
    start2=start;
 
int count = 0;
Bplus *midline;Bplus mid;
midline=&mid;
while(count>=0)
{
   while( ( ch = fgetc(fp) ) != EOF)
     {     
     k1=ch-48;ch =fgetc(fp);k2= fgetc(fp)-48; 
     Bplus *mid = new Bplus();
     if(k1>=0)mid->key1=k1; if(k2>=0)mid->key2=k2;
     count++;
     
     mid->parent = start;
     if(count==1)start->left = mid;
     if(count==2)start->center = mid;
     if(count==3)start->right = mid;
     midline->next = mid;
     midline = mid;
     
     if(count==3) {start = start->next; count = 0;}
     ch =fgetc(fp);
     if(ch=='\n') {break;}
     }
start = start2->left;
start2=start;
if(ch==EOF) break;
}   

fclose(fp);
printf("%d",root->center->key1); 
scanf("%d",&a);

return 0;
}
