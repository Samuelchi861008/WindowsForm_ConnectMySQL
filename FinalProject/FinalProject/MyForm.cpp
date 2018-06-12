#include "MyForm.h"
#include "MyForm6.h"


///////下方include不可對調
#include <Windows.h>
#include <mysql.h>

///////屬性->連結器->系統->子系統->Window
///////屬性->連結器->進入點->編輯->main

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FinalProject::MyForm form;
	Application::Run(%form);
}
