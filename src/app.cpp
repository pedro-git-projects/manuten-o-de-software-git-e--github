#include "app.h"
#include <cstdlib>
#include <vector>

App::App() : m_flag(true)  {
	m_scripts = std::vector<const char*>{"./scripts/git.sh"};
}

void App::loop() {
	while (m_flag) {
		boasVindas();
		executarScript();
		m_flag = false;
	}
}

void App::boasVindas() {
	std::cout << ":: Seja bem vindo à aplicação sobre git!" << std::endl;
}

void App::executarScript() {
	system(m_scripts[0]);
}
