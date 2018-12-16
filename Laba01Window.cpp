#include "Laba01Window.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TVLaba01::Laba01Window form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
}