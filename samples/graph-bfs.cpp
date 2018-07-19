#include <bits/stdc++.h>

using namespace std;

bool bfs(vector<int> matriz[], int de, int para, int n_nos)
{
	queue<int> fila;
	vector<int> visitados(n_nos, false);

	fila.push(de);

	while (!fila.empty())
	{
		int atual = fila.front();
		fila.pop();
		if (visitados[atual]) continue;
		visitados[atual] = true;

		// Encontrei, hora de parar a busca!
		if (atual == para)
		{
			cout << "Destino encontrado!" << endl;
			return true;
		}

		for (int i = 0; i < n_nos; ++i)
		{
			if (matriz[atual][i] == 1)
			{
				visitados.push_back(i);
				fila.push(i);
			}
		}

	}
	
	return false;
}

int main()
{
	vector<int> matriz[] = {
		{0, 1, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 1, 0, 1, 1},
		{0, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 0}
	};

	cout << bfs(matriz, 0, 7, 8) << endl;

	return 0;
}
