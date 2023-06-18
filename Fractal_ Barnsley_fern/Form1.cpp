#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FractalBarnsleyfern::Form1 form;
	Application::Run(% form);
}
