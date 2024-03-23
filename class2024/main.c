#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("輸入字元：");
	char c;
	scanf("%c",&c);
	printf("字元 %c 的 ASCII 碼為 %d",c,c);
	return 0;
}
