#ifndef APP_H
#define APP_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

struct App {
	App();
	void loop();
	void boasVindas();
	void crirarCommit();
	void inicializar();
	void criarBranch();
	void lerVersao();
	void status();
	void log();
	void add();
	void imprimirOpcoes(); 
	void escolheOpcao();

	private:
		bool m_flag;
		std::string m_bnome;
		std::string m_mensagem;
		int m_opcao;
};

#endif
