#include <stdio.h>
int mmr(char x, int y){
    if(x == 'F')
    {
        if(y ==3)
        {
            return 1; 
        }
        else if (y == 2)
        {
            return 2;
        }
        else if (y == 1)
        {
            return 3;
        }   
    }
    if(x == 'B')
    {
        if(y ==3)
        {
            return 4;
        }
        else if (y == 2)
        {
            return 5;
        }
        else if (y == 1)
        {
            return 6;
        }   
    }
    if(x == 'P')
    {
        if(y ==3)
        {
            return 7;
        }
        else if (y == 2)
        {
            return 8;
        }
        else if (y == 1)
        {
            return 9;
        }   
    }
    if(x == 'O')
    {
        if(y == 3)
        {
            return 10;
        }
        else if (y == 2)
        {
            return 11;
        }
        else if (y == 1)
        {
            return 12;
        }   
    }

}
int main(){
    char a, b;
    int c, d, r1, r2;
    scanf("%c %c %d %d", &a, &b, &c, &d);
    r1 = mmr(a, c);
    r2 = mmr(b, d);
    
    if (r1 - r2 <= 3 && r1 - r2 >= -3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
