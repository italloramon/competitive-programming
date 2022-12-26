#include <iostream>
#include <algorithm>
#include<map>

using namespace std;

int numEscolhido(int array[], int len) {
    int moreTimes = 0;
    int nEscolhido = array[0];
    for (int j = 0; j < len; j++)
    {
        int temp = count(array, array + len, array[j]);
        if (temp >= moreTimes)
        {
            if (temp == moreTimes)
            {
                if (array[j] > nEscolhido)
                {
                    nEscolhido = array[j];
                }
            }
            else
            {
                moreTimes = temp;
                nEscolhido = array[j];
            }
        }
    }
    return nEscolhido;
}

int main() {
    int k, vitoriaPedro = 0, vitoriaTulio = 0, empates = 0;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int m, n;
        cin >> m >> n;
        int arrayPedro[m], arrayTulio[n];
        for (int j = 0; j < m; j++)
        {
            cin >> arrayPedro[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arrayTulio[j];
        }

        sort(arrayPedro, arrayPedro + m, greater<int>());
        sort(arrayTulio, arrayTulio + n, greater<int>());

        int nEscolhidoPedro = numEscolhido(arrayPedro, m);
        int nEscolhidoTulio = numEscolhido(arrayTulio, n);

        if (nEscolhidoPedro > nEscolhidoTulio)
        {
            vitoriaPedro++;
        } else if (nEscolhidoTulio > nEscolhidoPedro)
        {
            vitoriaTulio++;
        } else
        {
            empates++;
        }
        
        cout << "pedro: " << nEscolhidoPedro << " " << "tulio: " << nEscolhidoTulio << endl;

    }

    if (vitoriaPedro > vitoriaTulio)
    {
        cout << "Pedro foi vitorioso com " << vitoriaPedro << " pontos" << endl;
    } else if (vitoriaTulio > vitoriaPedro)
    {
        cout << "Túlio foi vitorioso com " << vitoriaTulio << " pontos" << endl;
    } else
    {
        cout << "Túlio e Pedro  empataram com " << empates << " pontos" << endl;
    }
    
    return 0;
}