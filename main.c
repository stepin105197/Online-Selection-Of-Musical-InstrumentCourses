
#include<stdio.h>
#include<string.h>
#include"test_sai.h"
#include"sai_header.h"
int main()
{
char str[100];
int choice,ret;
printf("Enter your Name\n");
gets(str);
printf("%s,Welcome to our school\n",str);
printf("Enter\n1-VEENA\n2-VIOLIN\n3-CHITRAVEENA\n4-FLUTE\n5-SAXOPHONE\n6-NADASWARAM\n7-MRUDANGAM\n8-TABLA\n9-GHATAM\n");
scanf("%d",&choice);
printf("Thanks for choosing our school\n");
switch(choice)
{
  case 1: {
      ret=veena();
      printf("VEENA-Rs. %d",ret);
   break;}
   case 2: {
       ret=violin();
       printf("VIOLIN-Rs. %d",ret);
   break;}
   case 3: {
       ret=chitraveena();
       printf("CHITRAVEENA-Rs. %d",ret);
   break;}
   case 4: {
       ret=flute();
       printf("FLUTE-Rs. %d",ret);
   break;}
   case 5: {
       ret=saxophone();
       printf("SAXOPHONE-Rs. %d",ret);
   break;}
   case 6: {
       ret=nadaswaram();
       printf("NADASWARAM-Rs. %d",ret);
   break;}
   case 7: {
       ret=mrudangam();
       printf("MRUDANGAM-Rs. %d",ret);
   break;}
   case 8: {
       ret=tabla();
       printf("TABLA-Rs. %d",ret);
   break;}
   case 9: {
       ret=ghatam();
       printf("GHATAM-Rs. %d",ret);
   break;}
   default:{
       printf("Enter valid choice\n");
   }
}
test_main();
return 0;
}
