#include <stdio.h>

int main() {
	// your code goes here
 int n,a;
 scanf("%d", &n);
 while(n){
    scanf("%d", &a);
    if ((10-a)>=3){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    n--;
 }
}

