#include <stdio.h>
int lim_p(int p){
    int lp = p - 7400;
    return lp;
}

int lim_t(int t){
    int lt = t - 4400;
    return lt; 
}

int lim_g(int g){
    int lg = g - 5200;
    return lg;

}

int lim_y(int y){
    int ly = y - 4000;
    return ly;
}

int lim_pa(int pa){
    int lpa = pa - 4400;
    return lpa;  
}

int lim_v(int v){
    int lv = v - 4800;
    return lv;
}

int lim_e(int e){
    int le = e - 6600;
    return le;
}

int casa1(int lp, int lt, int lg, int ly, int lpa, int lv, int le){
    int c1 = 0;
    if(lp >= 1000)
    {
        c1 += 1;
    }
    if(lt >= 400)
    {
        c1 += 1;
    }
    if(lg >= 400)
    {
        c1 += 1;
    }
    if(ly >= 400)
    {
        c1 += 1;
    }
    if(lpa >= 400)
    {
        c1 += 1;
    }
    if(lv >= 800)
    {
        c1 += 1;
    }
    if(le >= 1000)
    {
        c1 += 1;
    }
    return c1;
}

int casa2(int lp, int lt, int lg, int ly, int lpa, int lv, int le){
    int c2 = 0;
    if(lp >= 200)
    {
        c2 += 1;
    }
    if(lt >= 800)
    {
        c2 += 1;
    }
    if(lg >= 1200)
    {
        c2 += 1;
    }
    if(ly >= 800)
    {
        c2 += 1;
    }
    if(lpa >= 1200)
    {
        c2 += 1;
    }
    if(lv >= 1200)
    {
        c2 += 1;
    }
    if(le >= 1800)
    {
        c2 += 1;
    }
    return c2;
}

int casa3(int lp, int lt, int lg, int ly, int lpa, int lv, int le){
    int c3 = 0;
    if(lp >= 1000)
    {
        c3 += 1;
    }
    if(lt >= 1600)
    {
        c3 += 1;
    }
    if(lg >= 2000)
    {
        c3 += 1;
    }
    if(ly >= 1200)
    {
        c3 += 1;
    }
    if(lpa >= 1200)
    {
        c3 += 1;
    }
    if(lv >= 800)
    {
        c3 += 1;
    }
    if(le >= 1000)
    {
        c3 += 1;
    }
    return c3;
}

int main(){
    int p, t, g, y, pa, v, e, lp, lt, lg, ly, lpa, lv, le;
    int pag_c1, pag_c2, pag_c3, totalc1, totalc2, totalc3;
    scanf("%d %d %d %d %d %d %d", &p, &t, &g, &y, &pa, &v, &e);
    
    lp = lim_p(p);
    lt = lim_t(t);
    lg = lim_g(g);
    ly = lim_y(y);
    lpa = lim_pa(pa);
    lv = lim_v(v);
    le = lim_e(e);

    totalc1 = casa1(lp, lt, lg, ly, lpa, lv, le);
    totalc2 = casa2(lp, lt, lg, ly, lpa, lv, le);
    totalc3 = casa3(lp, lt, lg, ly, lpa, lv, le);
    
    pag_c1 = totalc1 * 10;
    pag_c2 = totalc2 * 20;
    pag_c3 = totalc3 * 30;
    
    if (totalc1 == 0 && totalc2 == 0 && totalc3 == 0) // Todos 0
    {
        printf("NAO TERA SHOW!\n");
    }
    else if (pag_c1 == pag_c2 && pag_c1 == pag_c3) // Todos iguais
    {
        if(totalc1 > totalc2 && totalc1 > totalc3)
        {
            printf("CASA 1\n");
            printf("%d\n", pag_c1);
            printf("%d\n", totalc1);
        }
        else if (totalc2 > totalc1 && totalc2 > totalc3)
        {
            printf("CASA 2\n");
            printf("%d\n", pag_c2);
            printf("%d\n", totalc2);
        }
        else if (totalc3 > totalc1 && totalc3 > totalc2)
        {
            printf("CASA 3\n");
            printf("%d\n", pag_c3);
            printf("%d\n", totalc3);
        }
    }
    else if (pag_c1 > pag_c2 && pag_c1 > pag_c3)
    {
        printf("CASA 1\n");
        printf("%d\n", pag_c1);
        printf("%d\n", totalc1);
    }
    else if (pag_c2 > pag_c1 && pag_c2 > pag_c3)
    {
        printf("CASA 2\n");
        printf("%d\n", pag_c2);
        printf("%d\n", totalc2);
    }
    else if (pag_c3 > pag_c2 && pag_c3 > pag_c1)
    {
        printf("CASA 3\n");
        printf("%d\n", pag_c3);
        printf("%d\n", totalc3);
    }
    else if (pag_c1 == pag_c2)
    {
        if(totalc1 > totalc2)
        {
            printf("CASA 1\n");
            printf("%d\n", pag_c1);
            printf("%d\n", totalc1);
        }
        else
        {
            printf("CASA 2\n");
            printf("%d\n", pag_c2);
            printf("%d\n", totalc2);
        }
    }
    else if (pag_c1 == pag_c3)
    {
        if(totalc1 > totalc3)
        {
            printf("CASA 1\n");
            printf("%d\n", pag_c1);
            printf("%d\n", totalc1);
        }
        else
        {
            printf("CASA 3\n");
            printf("%d\n", pag_c3);
            printf("%d\n", totalc3);
        }
    }
    else if (pag_c2 == pag_c3)
    {
        if(totalc2 > totalc3)
        {
            printf("CASA 2\n");
            printf("%d\n", pag_c2);
            printf("%d\n", totalc2);
        }
        else
        {
            printf("CASA 3\n");
            printf("%d\n", pag_c3);
            printf("%d\n", totalc3);
        }
    }
    
    return 0;
}
