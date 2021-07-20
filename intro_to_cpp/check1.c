#include <stdio.h>
int i = 1;

int main()
{
    
    printf("hello world \n" );
    if(i == 1){
        i++;
        main( );
    }
      
    printf("hello world \n" );
    printf("hello world \n" );
    
    return 0;
}
