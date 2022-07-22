/* 画面に何か表示するプログラム */
#include <stdio.h>
int function(int a, int b);
/*{
    return a+b;
}*/
int main(void)
{
    printf("C言語は習うより慣れよ\n");
	printf("%d\n",function(1,2));

    return 0;
}
