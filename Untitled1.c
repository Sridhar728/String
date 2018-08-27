#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N,count=0;
	int i=0,j=0;
	int str[100001],revString[10001];
	scanf("%s %d",str,&N);
	int len;
	len=strlen(str);
	/*for(i=0;i<len;i++){
		for(j=i+1;j<=N;j++){
		if(str[i]==str[j]){
			count++;
		}
		}
	}*/
i=0,j=0;
	for(i=len-1;i>=0;i--){
				revString[j]=str[i];
				j++;
			}
     i=0,j=0;
     len=strlen(revString);
	for(i=0;i<len;i++){
		for(j=i+1;j<=N;j++){
			if(revString[i]==revString[j]){
				count++;
				
			}
		}
		}
	printf("%d",count);
		
}
