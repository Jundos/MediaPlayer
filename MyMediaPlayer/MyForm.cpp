#include "MyForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args) {
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyMediaPlayer::MyForm form;
	Application::Run(%form);
	return 0;
}