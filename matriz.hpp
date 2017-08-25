#ifndef MATRIZ_HPP
#define MATRIZ_HPP

using namespace std;

class Matriz {
	private:
		char cell[20][20];
		string nome;
		int geracoes;
	public:
		Matriz();
		~Matriz();
		char getCell(int i, int j);
		void setCell(char cell, int i, int j);
		string getNome();
		void setNome(string nome);
		int getGeracoes();
		void setGeracoes(int geracoes);
};

#endif
