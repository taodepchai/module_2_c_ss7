#include <stdio.h>
int main(){
	float money_send,interest,month,money_out;
	printf("nhap so tien gui:");
	scanf("%f",&money_send);
	printf("nhap so phan tram lai 1 nam :");
	scanf("%f",&interest);
	printf("nhap so thang:");
	scanf("%f",&month);
	for(int i=1;i<month;i++){
	money_out=money_send*(interest/12)/100;
	money_send+=money_out;
	}
	printf("tien nhan duoc la: %.5f nghin",money_send);
}

