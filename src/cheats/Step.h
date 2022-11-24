#include "Cheat.h"

class Step : public Module {
public:
	Step(class Client* client, class Category* category, std::string name) : Module(client, category, name) {};
	void Run();
	void onDisable();
  
  float stepHeight;
};
