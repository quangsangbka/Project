// Bài tập 1

#include<stdio.h>
#include<conio.h>

int bai1(int *p = (int*)1000, double d = le-10) {
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(p));
    return p, d;
}

// Bài tập 2
 #include<stdio.h>

 int bai2(int a, char c) {
     printf("1.%d\n", sizeof(a+0.1));
     printf("2.%d\n", sizeof(c+1));
     printf("4.%d\n", sizeof(c+a));
     return a, c;
 }


// Bài tập 3
int main(){

    int n = 25;
    float n3 = 11;
    const double p = 3.1412;
    unsigned q = 63000;
    char c = 'n';
    enum WeekDay(Mon = 2, Tue, Wed, Thu, Fri, Sat, Sun = 1);
    double y = 12.3456789e16;
    char *ch = "welcome C++";
    int *a = &n;
    float n1 = n3/3;
        printf("value size\n");
        printf("n1 %f%d\n", n1, typeid(n1));
        printf("p %lf%d\n", q, typeid(q));
        printf("y %lf%d\n", y, typeid(y));
        printf("ch %c%d\n", ch, typeid(ch));
        printf("ad of n %c\n", &n);
        printf("ad of ch %c\n", &ch);
}