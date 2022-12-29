#include <iostream>

using namespace std;

int main(){
    bool vezGabi = true;
    int vitoriaGabi = 0, vitoriaPai = 0, empate = 0;
    char board[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = '-';
        }
    }
    int c = 0, jogoEncerrado = 0;
    while (true)
    {
        int x, y;
        char check;
        cin >> x >> y;
        
        if (vezGabi)
        {
            board[x-1][y-1] = 'X';
            check = 'X';
        } 
        else 
        {
            board[x-1][y-1] = 'O';
            check = 'O';
        }

        c++;

        //Check the lines
        for(int i = 0; i < 3; i++)
        {
            if (board[i][0] == check && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            {
                jogoEncerrado = 1;
            }
        }
        //Check the columns
        for(int i = 0; i < 3; i++)
        {
            if (board[0][i] == check && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            {
                jogoEncerrado = 1;
            }
        }
        //Check primary diagonal
        if (board[0][0] == check && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        {
            jogoEncerrado = 1;
        }
        //Cehck the second diagonal
        if (board[0][2] == check && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            jogoEncerrado = 1;
        }

        if (jogoEncerrado == 1 || c == 9)
        {
            if(check == 'X' && jogoEncerrado == 1){
               vitoriaGabi++; 
               cout << "gabrielly  venceu essa partida" << endl; 
            }
            if (check == 'O' && jogoEncerrado == 1){
                vitoriaPai++; 
                cout << "pai venceu essa partida" << endl;    
            }
            if (c == 9 && jogoEncerrado == 0){
                empate++; 
                cout << "empate" << endl;
            } 

            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout << board[i][j];
                    board[i][j] = '-';
                }
                cout << endl;
            }
            cout << endl;

            c = 0;
            jogoEncerrado = 0;
            vezGabi = false;

            int conti;
            cin >>  conti;
            if (conti == 0) break;
        }
        vezGabi = !vezGabi;
    }

    if (vitoriaGabi > vitoriaPai)
    {
        cout << "gabrielly foi a grande vencedora desse grande duelo" << endl;
    } else if (vitoriaPai > vitoriaGabi)
    {
        cout << "pai foi a grande vencedora desse grande duelo" << endl;
    } else
    {
        cout << "esse grande duelo terminou em empate" << endl;
    }
    return 0;
}
