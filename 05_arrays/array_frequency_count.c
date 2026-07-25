#include<stdio.h>
int main()
{
    int a[5], i, freq[5] = {0}, j;
    printf("ENTER 5 ELEMENTS:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        freq[i]=1; 
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                freq[j]++;
                freq[i] = 0; // Mark as counted
                break;
            }
        }
        
    }
    printf("FREQUENCY OF ELEMENTS:\n");
    for(i = 0; i < 5; i++)
    {
        if(freq[i] != 0) // Print only if not marked as counted
        {
            printf("%d occurs %d times\n", a[i], freq[i] );
        }
    }
    return 0;
}
