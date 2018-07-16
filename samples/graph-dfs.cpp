#include <bits/stdc++.h>

using namespace std;

bool dfs(vector<int> lista[], int de, int para, int n_nos)
{
	stack<int> pilha;
	vector<int> visitados;

	pilha.push(de);
	visitados.push_back(de);

	while (!pilha.empty())
	{
		int atual = pilha.top();
		pilha.pop();
		
		// Encontrei, hora de parar!
		if (atual == para)
		{
			cout << "Destino encontrado!" << endl;
			return true;
		}

		for (int vizinho : lista[atual])
		{
			if (find(visitados.begin(), visitados.end(), vizinho) == visitados.end())
			{
				visitados.push_back(vizinho);
				pilha.push(vizinho);
			}
		}
	}

	return false;
}

int main()
{
	vector<int> lista[] = {
		{1, 3, 4},
		{0, 2},
		{1},
		{0},
		{0, 5},
		{4, 6, 7},
		{5},
		{5}
	};

	cout << dfs(lista, 0, 7, 8) << endl;

	return 0;
}
