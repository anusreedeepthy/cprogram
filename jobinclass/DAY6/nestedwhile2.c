  //      *
    //     * *
    //    * * * 
    #include<stdio.h>
    int main()
    {
        int row = 4,i=1,j;
        while(i<=row){
            int space = row -i ;

            while(space>0){
            printf(" ");
            space--;
            }
            j=1;
            while(j<=i){
                printf(" *");
                j++;
            }
            printf("\n");
            i++;
            
        }
        
    }