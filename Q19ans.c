#include<stdio.h>
struct student{
	int no_of_gift;
		int id;
}s[10];

int i,j;

int main(){
	for(i=0;i<10;i++){
		s[i].id=i+1;
		printf("\nEnter the number of gift items for s%d: ",i+1);
		scanf("%d",&s[i].no_of_gift);
	}
		struct student m;
	int pos;
	
	for(i=0;i<10;i++){
		m = s[i];
		pos = i;
		for(j=i+1;j<10;j++){
			if(m.no_of_gift<s[j].no_of_gift){
				m = s[j];
				pos = j;
			}
		}
		s[pos]=s[i];
		s[i]=m;
		printf("\nBill turn for student s%d having %d items",s[i].id,s[i].no_of_gift);
	}
	
	return 0;
}
