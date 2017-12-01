#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
    String s={"Fatih Sultan Mehmet Vakıf Üniversitesi"};
    int i=0,boyut=sizeof(s);
   /* for(i=0;i<boyut;i++){
        printf("%c",*(s+i))
    }*/
    printf("%d",boyut);
	return 0;
}