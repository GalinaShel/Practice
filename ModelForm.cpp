#include "ModelForm.h"
#include <Windows.h>
using namespace MyModel;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ModelForm);
	return 0;
}