#include <iostream>

using namespace std;

struct Monster {
    int id;
    int vida; 
    int dano; 
    int exp;
    string classe;
    int vidaInicial;
};

struct Player {
    string classe;
    int dano;
    int vida;
    int exp = 0;
    int xIni;
    int yIni;
    int x;
    int y;
    int monstroDerrots = 0;
    int vidaInicial;
};

bool getMove(int m, Player *p, int n){
    if (m == 1){
        if (p->x > 0)
        {
            p->x--;
            return true;
        }
    } else if (m == 2){
        if (p->x < n-1)
        {
            p->x++;
            return true;
        }
    } else if (m == 3){
        if (p->y > 0)
        {
            p->y--;
            return true;
        }
    } else if (m == 4){
        if (p->y < n-1)
        {
            p->y++;
            return true;
        }
    }
    return false;
}

Monster getMonster(Monster monsters[], int id, int x){
    for (int i = 0; i < x; i++){
        if (monsters[i].id == id)
        {
            return monsters[i];
        }
    }
}

bool duelo(Monster *m, Player *p){
    int currentDano = p->dano;

    if (p->classe == "assassino" && m->classe == "arqueiro"){
        currentDano *= 2;
    }
    if (p->classe == "arqueiro" && m->classe == "mago"){
        currentDano *= 2;
    }
    if (p->classe == "mago" && m->classe == "assassino"){
        currentDano *= 2;
    }

    bool pWins;
    while (true)
    {
        m->vida -= currentDano;
        if (m->vida > 0)
        {
            p->vida -= m->dano;
            if (p->vida <= 0)
            {
                pWins = false;
                break;
            }
        } else
        {
            pWins = true;
            break;
        }
    }

    if (pWins)
    {
        p->exp += m->exp;
        p->monstroDerrots++;
    } else 
    {
        p->exp /= 2;
        p->vida = p->vidaInicial;
        p->x = p->xIni;
        p->y = p->yIni;
        m->vida = m->vidaInicial;
    }

    return pWins;
    
}

int main(){
    int x;
    cin >> x;

    Monster monsters[x];
    
    for (int i = 0; i < x; i++)
    {
        int id, v, d, e;
        string c;

        cin >> id >> c >> v >> d >> e;

        Monster m;
        m.id = id;
        m.classe = c;
        m.vida = v;
        m.dano = d;
        m.exp = e;

        monsters[i] = m;
    }

    Player pedro;
    string c;
    int d, v, i, j;
    cin >> c >> d >> v >> i >> j;
    pedro.classe = c;
    pedro.dano = d;
    pedro.vida = v;
    pedro.vidaInicial = v;
    pedro.x = i;
    pedro.y = j;
    pedro.xIni = i;
    pedro.yIni = j;

    Player tulio;
    cin >> c >> d >> v >> i >> j;
    tulio.classe = c;
    tulio.dano = d;
    tulio.vida = v;
    tulio.vidaInicial = v;
    tulio.x = i;
    tulio.y = j;
    tulio.xIni = i;
    tulio.yIni = j;

    int n;
    cin >> n;
    int bord[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> bord[i][j];
        }
    }

    int r;
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        int mPedro, mTulio;
        cin >> mPedro >> mTulio;

        if (getMove(mPedro, &pedro, n))
        {
            if (bord[pedro.x][pedro.y] != -1)
            {
                Monster m = getMonster(monsters, bord[pedro.x][pedro.y], x);
                bool delMonster = duelo(&m, &pedro);
                if (delMonster)
                {
                    bord[pedro.x][pedro.y] = -1;
                }    
            }
        }
        if (getMove(mTulio, &tulio, n))
        {
            if (bord[tulio.x][tulio.y] != -1)
            {
                Monster m = getMonster(monsters, bord[tulio.x][tulio.y], x);
                bool delMonster = duelo(&m, &tulio);
                if (delMonster)
                {
                    bord[tulio.x][tulio.y] = -1;
                }
            }
        }
    }
    cout << pedro.vida << " - " << pedro.vidaInicial << " - " << pedro.exp << " - " << pedro.monstroDerrots << endl;
    cout << tulio.vida << " - " << tulio.vidaInicial << " - " << tulio.exp << " - " << tulio.monstroDerrots << endl;
    return 0;
}
