// write a program enter 2 users data  name gender interest of genter  area of interest  4 numbers
// conditions if interested gender is equal  inside if  area of interest out of 5


#include<stdio.h>
#include<string.h>
int main(){
char  name1[20];
char  name2[20];
char gender1[20];
char interg1[20];
char interg2[20];
char gender2[20];
int n[5];
int m[5];
int count=0;
printf("Enter the details of first person\n");
 printf("Name : " );
 scanf("%s",name1);
 printf("Gender : ");
 scanf("%s",gender1);
 printf("Interested Gender: ");
 scanf("%s",interg1);
 printf("Interest's: ");
for(int i =0;i<5;i++){
    scanf("%d",&n[i]);
}
printf("Enter the details of Second  person\n");
printf("Name: ");
 scanf("%s",name2);
 printf("Gender:");
 scanf("%s",gender2);
 printf("Interested Gender:");
 scanf("%s",interg2);
 printf("Interest's: ");
for(int i =0;i<5;i++){
    scanf("%d",&m[i]);
}

if(strcmp(gender1,interg2)==0 && strcmp(gender2,interg1)==0){
    // printf("got the match %s %s\n ",name,names);
    for(int i=0;i<5;i++)
    {
        for(int j =0;j<5;j++){
            if(n[i]==m[j]){
                // printf("the number of interest are %d\n",n[i]);
                count += 1;
            }
        }
       

}
}

if(count ==0)
{
    printf("there is no match found ");
   
}
else
{
    printf("the %s and %s matches %d out of 5",name1,name2,count);


}



}
