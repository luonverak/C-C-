#include <stdio.h>
#include <stdbool.h>
int main()
{
	int op,i,n,j;
	int a[30];
	do
	{
		puts("-------------Menu------------");
		puts("\t 1.	Input");
		puts("\t 2.	Output");
		puts("\t 3.	Search");
		puts("\t 4.	Update");
		puts("\t 5.	Delete");
		puts("\t 6.	Insert");
		puts("\t 7.	Sort");
		puts("\t 8.	Add");
		puts("\t 9.	Clear");
		puts("\t 10.	Exit");
		printf("Choose option = ");scanf("%d",&op);//op=10
		switch(op){
			case 1:
				{
					printf("Input number of array = ");scanf("%d",&n);
					for(i=0;i<n;i++){
						printf("Enter Value = ");scanf("%d",&a[i]);
					}
				}break;
			case 2:
				{
					for(i=0;i<n;i++){
						printf(" %d\t",a[i]);
					}
					puts("");
				}break;
			case 3:{
				int var;
				bool check=false;
				printf("Search value = ");scanf("%d",&var);
				for(i=0;i<n;i++){
					if(var==a[i]){
						printf("That array = %d\n",a[i]);
						check=true;
					}
				}
				if(check==false){
					puts("No this array");
				}else{
					puts("Array found");
				}
			}break;
		case 4:
			{
				int var,b=0;
				printf("Search value for update = ");scanf("%d",&var);
				for(i=0;i<n;i++){
					if(var==a[i]){
						printf("Update Value = ");
						scanf("%d",&a[i]);
						b=1;
						puts("Update success");
					}
				}if(b==0)
				puts("Search not found");
			}break;
		case 5:
			{
				int var;
				printf("Search value for delete = ");scanf("%d",&var);
				for(i=0;i<n;i++){
					if(var==a[i]){
						for(j=i;j<n;j++){
							a[j]=a[j+1];
						}
						
					}
				}
			}break;
		}
	}while(op!=10);
}
