#include <stdio.h>

int main() {
    int a; scanf("%d",&a); // a라는 정수형 변수를 만든 후 사용자의 입력으로 변수 a에 정수형태로 입력받음
    long long lla; scanf("%lld", &lla); // lla라는 큰 값 정수형 변수를 만든 후 사용자 입력으로 변수 lla에 큰 값 정수 형태로 입력받음
    char b; scanf("%c",&b); // b라는 문자 변수를 만든 후 사용자의 입력으로 변수 b에 문자형태로 입력받음
    float c; scanf("%f",&c); // c라는 실수형 변수를 만든 후 사용자의 입력으로 변수 c에 문자형태로 입력받음
    double lc; scanf("%lf",&lc); // lc라는 소수점이 긴 실수형 변수를 만든 후 사용자의 입력으로 변수 lc에 소수점이 긴 실수 형태로 입력받음
    
    int d = getchar();
    char e = getchar();
    // 문자형태로 입력을 받은 후, 해당하는 문자값을 반환함. (반환된 값을 변수에 넣어서 값을 저장/입력)

    char str[100]; scanf("%s",str); // str이라는 문자열 변수를 만든 후 사용자의 입력으로 변수 str에 문자열 형태로 입력받음
}