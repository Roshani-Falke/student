
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    char str[n][1000];
    for(int i=0; i<n; i++)
    {
    	
    	printf("Enter your name :\n");
    	scanf("%s",str[i]);
    	
    	
    } 
    for(int i=0; i<n; i++)
    {
    	printf("%s ",str[i]);
    }


return 0;
}



/*#include <stdio.h>
#include <string.h>

int main() {
    int n ;
    printf ("enter a number");
    scanf ("%d",&n);
    char a[n][50];

    printf("Enter 5 names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", a[i]);
    }

    return 0;
}
*/

