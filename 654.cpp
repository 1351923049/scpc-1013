#include <stdio.h>
int main(){
	char a[100005];
	int sum=0;
	scanf("%[^\n]",&a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '&&a[i+1]==' '){
			sum++;
			i++;
		}
	}
	printf("%d",sum);
	return 0;
}
