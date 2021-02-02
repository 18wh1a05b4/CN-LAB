/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
	int i,count = 0;
	char str[100],flag[] = "01111110";
	printf("Enter Bit String :\n");
	scanf("%s",str);
	printf("After Bit Stuffing :\n");
	printf("%s",flag);
	for(i = 0;i < strlen(str);i++) {
		if(str[i] == '1') {
			count++;
		} else {
			count = 0;
		}
		printf("%c",str[i]);
		if(count == 5) {
			printf("0");
			count = 0;
		}
	}
	printf("%s",flag);
	return 0;
}