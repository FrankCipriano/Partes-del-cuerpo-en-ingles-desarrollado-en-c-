#include "Inicio.h"

using namespace ElCuerpo;

[STAThreadAttribute]

int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Inicio());

	return 0;
}