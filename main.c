#include <stdio.h>

int main(void){
	printf("Hello Calculator\n");
	printf("두 수를 입력하세요.\n");

	scanf("%d %d",&n1,&n2);
	printf("%d + %d = %d\n",n1+n2);
	return 0;
}
