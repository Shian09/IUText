#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SignIn::MyForm1 mainForm;
	Application::Run(%mainForm);
	//SignIn::MyForm2 mainForm2;
	//Application::Run(%mainForm2);
	//Application::Run(gcnew MyForm());
	return 0;
}
