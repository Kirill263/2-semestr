#include <iostream>
using namespace std;

int main()
{
    float t = 0, G = 9.8, v;
    int quantity = 0;
    
    printf("Enter number of seconds: ");
    scanf("%d", &quantity);
    for(int i = 0; i <= quantity*2; i++)
    {
        v = t * G;
        printf("%2.1f \t\t %2.2f\n", t, v);
        t += 0.5;
    }
    return 0;
}
