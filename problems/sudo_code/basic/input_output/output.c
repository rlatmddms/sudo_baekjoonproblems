#include <stdio.h>

int main() {
    printf("abcde"); // "abcde" 라는 문자열을 출력함 (문자열 전용)

    int a = 1234, b = 2345, c = 3456;
    printf("%d %d %d", a, b, c); // a,b,c 변수에 들어있는 값을 %d 자리에 있게끔 출력함
                                 // 출력 : "1234 2345 3456" , 뒤에 변수를 기입한 순서대로 출력됨
    printf("%d~~%d~~%d",c,b,a);  // %d사이를 아무 문자나 문자열로 채워도 %d자리를 제외하곤 입력한 대로 출력됨
                                 // 출력 : "3456~~2345~~1234"
    
    char c1 = 'a', c2 = 'b', c3 = 'c';
    printf("%c %c %c", c1, c2, c3); // 출력 : "a b c"
    printf("%cggg%cggg%cggg", c3, c2, c1); // 출력 : "cgggbgggaggg"

    float f1 = 1.1, f2 = 3.3, f3 = 5.5;
    printf("%f %f %f", f1, f2, f3); // 출력 : "1.1 3.3 5.5"
    printf("%fgg%fgg%f", f3, f2, f1); // 출력 : "1.1gg3.3gg5.5"
    //...


    putchar('a'); // 문자 'a' 한글자를 출력함
    putchar(c1); // 변수 c1에 들어있는 'a'를 출력함

    puts("abcde"); // // "abcde" 라는 문자열을 출력함 (문자열 전용, 변수 적용 불가)
}