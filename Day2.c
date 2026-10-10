#include <stdio.h>
#include <stdlib.h>
int main(){
    system("chcp 65001");

    float celsius, fahrenheit;

    printf("请输入摄氏温度：");
    scanf("%f",&celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    
    printf("%.2f 摄氏度 = %.2f 华氏度\n", celsius, fahrenheit);
    return 0;
}