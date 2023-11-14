#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n){
	int i;
	if ( n < 2) {
		return false;
		exit;
	} else 
	    if (n==2 || n==5 || n==7 || n==3 || n==11) {
	    	return true;
	    	exit;
		} else 
		    if (n%2 == 0 || n%3 == 0 ) {
		    	return false;
		    	exit;
			}
    i=-1;
    while (i < sqrt(n)) {
    	i = i + 6;
    	if ( n%i == 0 || n%(i+2) == 0) {
    		return false;
    		exit;
		}
	}
    return true;   	
}
int reverse(int n){
	int temp = 0;
	while (n!=0) {
		temp = temp*10 + n%10;
		n = n/10;	
	}
    return temp;
}
int main(){
	int i,n,j,sum=0,count=0,choice;
	long factorial;
	printf("nhap nhap so n:");
	scanf("%d",&n);
  do {
    printf("INTEGER NUMBER\n");
    printf("1. in ra day so nho hon hoac bang n\n");
    printf("2. in ra va dem cac so chia het cho 3 be hon n\n");
    printf("3. kiem tra xem phai so nguyen to khong\n");
    printf("4. kiem tra xem phai so hoan hao khong\n");
    printf("5. tinh tong cac uoc so chan\n");
    printf("6. tinh giai thua den n\n"); 
    printf("7. in ra so dao nguoc cua n\n"); 
    printf("8. in cac nguyen to tu mot den n\n");
    printf("9. thoat\n");
    printf("Lua chon cua ban:");
      scanf("%d",&choice);
    switch(choice) {
        case 1:
      	    for (i=1;i<=n;i++) {
      	 		printf("%d ", i);
      	 		sum += i;
		   }
		   printf("\n");
		   printf("%d\n",sum);
        break;
        case 2:
        	count = 0;
        	for (i=n;i>=3;i--){
        		if (i%3==0) printf("%d ",i);
        		count++;
			}
            printf("\n");
		    printf("%d\n",count);
		    break;
		case 3:
		    if (snt(n)) printf("%d la so nguyen to\n",n);
		      else printf ("%d khong phai la so nguyen to\n",n);
		    break;
		case 4:
			sum = 0;
			for (i=1;i<n;i++) {
				if (n%i==0) sum +=i;
			}
			if (sum == n) printf("%d la so hoan hao\n",n);
			  else printf("%d khong phai so hoan hao\n",n);
			break;
		case 5:
			sum = 0;
			for (i=2;i<=n;i++) {
				if (n%i==0 && i%2==0) sum = sum +i;
		    } printf("tong cac uoc so chan cua %d la %d\n", n,sum);
		    break;
		case 6:
			factorial = 1;
			for (i=1;i<=n;i++)
			   factorial *=i;
			printf("giai thua cua %d la %d\n",n,factorial);
			break;
		case 7:
			printf("so dao nguoc cua %d la %d\n", n, reverse(n));
			break;
		case 8:
			for (i=1;i<=n;i++)
			 if (snt(i)){
			    printf("%d ", i);
			 }
			printf("\n");
			break;
      case 9:
        printf("thoat\n");
        break;
      default:
        printf("Vui long chon tu 1-9\n");
    }
   }while (choice !=9);
}
