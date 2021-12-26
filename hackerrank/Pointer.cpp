#include <stdio.h>
#include <stdlib.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function  
int temp1 = *a;
int temp2 = *b;
*a = temp1 + temp2;
*b = abs(temp1 - temp2);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}