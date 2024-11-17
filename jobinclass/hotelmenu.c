#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100];  
    char name[1][10]={"submit"};

    int i = 0,count=0 ,total=0;
    printf("the menu are\n  porotta:10\n biriyai:100 \n fried rice:90\n Meals:50\n fish fry:70\n beaf fry:100 \n SUBMIT\n" );
    while(1){
        scanf("%s",arr[i]); //meal [0] i++  [1]
        
        if(strcmp(arr[i],name[0])==0){  
            break;
        }
        i++;
        count++;




    }
    int itemcount=-1;
    for(int i = 0;i< count;i++){
    
        if(strcmp(arr[i],"porotta")==0){
            itemcount =1;
        }
        else if(strcmp(arr[i],"biriyai")==0){
            itemcount =2;
        }
        else if(strcmp(arr[i],"fried rice")==0){
            itemcount =3;
        }
        else if(strcmp(arr[i],"Meals")==0){
            itemcount =4;
        }
        else if(strcmp(arr[i],"fish fry")==0){
            itemcount =5;
        }
        else if(strcmp(arr[i],"beaf fry")==0){
            itemcount =6;
        }
        switch (itemcount)
        {
        case 1:
            total = total +10;
          continue;
        case 2:
            total = total +100;
          continue;
        case 3:
            total = total +90;
           continue;
        case 4:
            total = total +50;
          continue;
        case 5:
            total = total +70;
          continue;
        case 6:
            total = total +100;
            continue;
        
        default:
            break;
        }

          
  printf("the total amount is %d",total);


    }
  printf("the total amount is %d",total);
  
    return 0;
}