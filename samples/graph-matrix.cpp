#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n_nos, n_arestas;

	cout << "Insira o número de nós: " << endl;
	cin >> n_nos;
	cout << "Insira o número de arestas: " << endl;
	cin >> n_arestas;

	int matriz[n_nos][n_nos];

	memset(matriz, -1, sizeof(matriz));

	for (int i = 0; i < n_arestas; ++i)
	{
		int de, para;
		cout << "Insira o nó de origem e o de destino: " << endl;
		cin >> de >> para;
		matriz[de - 1][para - 1] = 1;
		// Descomente para ter um grafo não direcionado
		// matriz[para][de] = 1;
	}

	// Mostrar matriz
	for (int i = 0; i < n_nos; ++i)
	{
		for (int j = 0; j < n_nos; ++j)
		{
			if (matriz[i][j] == 1)
				cout << "Nó " << i + 1 << " é vizinho de " << j + 1 << endl;
		}
	}

	return 0;
}
