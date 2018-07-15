#include <bits/stdc++.h>

#define vi vector<int>

using namespace std;

void adicionarVizinho(vi lista[], int de, int para)
{
	lista[de].push_back(para);
	// Descomente para ter um grafo não direcionado
	// lista[para].push_back(de);
}

int main()
{
	int n_nos, n_arestas;

	cout << "Insira o número de nós: " << endl;
	cin >> n_nos;
	cout << "Insira o número de arestas: " << endl;
	cin >> n_arestas;

	vi lista[n_nos];

	for (int i = 0; i < n_arestas; ++i)
	{
		int de, para;
		cout << "Insira o nó de origem e o de destino: " << endl;
		cin >> de >> para;
		adicionarVizinho(lista, de - 1, para - 1);
	}

	// Mostra lista
	for (int i = 0; i < n_nos; ++i)
	{
		cout << "Nó " << i + 1 << " - vizinhos: [";
		for (unsigned int j = 0; j < lista[i].size(); ++j)
		{
			if (j > 0) cout << ", ";
			cout << lista[i][j] + 1;
		}
		cout << "]" << endl;
	}

	return 0;
}
