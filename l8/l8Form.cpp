#include "l8Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	l8::l8Form form;
	Application::Run(% form);
	return 0;
}