#include "app.h"
#include <cstdlib>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdio.h>

App::App() : m_flag(true)  { }

void App::loop() {
	boasVindas();
	while (m_flag) {
		try {
			imprimirOpcoes();
			escolheOpcao();
		} catch(std::runtime_error& err) {
			std::cout << err.what() << std::endl;
		}
	}
}

void App::boasVindas() {
	std::cout << ":: Seja bem vindo à aplicação sobre git!" << std::endl;
}

void App::imprimirOpcoes() {
	std::cout << ":: Escolha um comando para ser executado:" << std::endl;
	std::cout << "1 - listar a versão do git" << std::endl;
	std::cout << "2 - iniciar um repositório" << std::endl;
	std::cout << "3 - criar uma nova branch" << std::endl;
	std::cout << "4 - ver o status do repositório" << std::endl;
	std::cout << "5 - adicionar todos os arquivos" << std::endl;
	std::cout << "6 - fazer um commit" << std::endl;
	std::cout << "0 - sair" << std::endl;
	std::cout << "-> ";
	std::cin >> m_opcao; 
}

void App::escolheOpcao() {
	switch (m_opcao) {
		case 0:
			m_flag = false;	
		case 1:
			lerVersao();
			break;
		case 2:
			inicializar();
			break;
		case 3:
			criarBranch();
			break;
		case 4:
			status();
			break;
		case 5:
			add();
			break;
		case 6:
			crirarCommit();
			break;
		default:
			throw std::runtime_error("Argumento inválido");
	}
}

void App::criarBranch() {
	std::cout << "insira a branch a ser criada: " ;
	std::cin >>  m_bnome; 
	std::string command{"git checkout -b " + m_bnome};
	system(command.c_str());
}

void App::crirarCommit() {
	std::cout << "insira a branch a mensagem para o commit: " ;
	std::cin >> m_mensagem;
	std::string command{"git commit -m " + m_mensagem};
	system(command.c_str());
} 

void App::lerVersao() {
	system("git --version");
}

void App::status() {
	system("git status");
}

void App::inicializar() {
	system("git init");
}

void App::log() {
	system("git log");
}

void App::add() {
	system("git add .");
}
