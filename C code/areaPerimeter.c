#include <stdio.h>
int main(){
    int len,wid;
    printf("Enter length: ");
    scanf("%d",&len);
    printf("Enter width: ");
    scanf("%d",&wid);
    int peri = 2*(len+wid);
    int area = len*wid;
    printf("Material req for fencing: %d units\n", peri);
    printf("Area of carpet req: %d sq. units", area);
    return 0;
}