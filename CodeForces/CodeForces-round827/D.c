#include <stdio.h>

int mdc(d, r){
    if (d % r == 0)
    {
        return r;
    }
    else
    {
        mdc(r, d%r);
    }
}

int main(){
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m = 0;
        scanf("%d", &n);
        int arr[1001], temp;

        for (int v = 1; v < 1001; v++)
        {
            arr[v] = -1;
        }

        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &temp);
            arr[temp] = j;
        }

        for (int k = 1; k < 1001; k++)
        {
            for (int l = 1; l < 1001; l++)
            {
                if (arr[k] != -1 && arr[l] != -1)
                {
                    if (mdc(k, l) == 1 && (arr[k] + arr[l] > m))
                    {
                        m = arr[k]+arr[l];
                    }
                }
            }       
        }

        if (m == 0)
        {
            m = -1;
        }
        
        printf("%d\n", m);
    }
    return 0;
}
