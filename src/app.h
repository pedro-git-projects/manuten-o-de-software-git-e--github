#ifndef APP_H
#define APP_H

#include <iostream>
#include <stdlib.h>
#include <vector>

struct App {
	App();
	void loop();
	void boasVindas();
	void executarScript();
	void cirarCommit(std::string mensagem);

	private:
		bool m_flag;
		std::vector<const char*> m_scripts;
};

#endif
