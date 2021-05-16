#include<stdio.h>
main()
{
 FILE *fp;
 char ch;
 fp = fopen("one.txt", "w");
 printf("Enter data");
 while ((ch == fgetc(fp)) != EOF)  //ctrl+z represents the EOF
 {
    fputc(ch,fp);
 }
 fclose(fp);
fp = fopen("one.txt", "r");
//fseek(fp,0,SEEK_SET);

 while ((ch = getc(fp)) != EOF)
    printf("%c",ch);

 fclose(fp);
}
