#include <stdio.h>
int check(int n){
    int temp,sum=0;
    int num=n;
    for (int i = 0; i < 3; i++)
    {
        temp=n%10;
        sum=sum+temp*temp*temp;
        n = n/10;
    }
    if (sum==num)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    for (int i = 100; i <=999; i++)
    {
            
        if (check(i)==1)
        {
            printf("%d\n",i);
        }
    }
}
