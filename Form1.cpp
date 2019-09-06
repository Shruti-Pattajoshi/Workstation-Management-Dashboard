#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;


void Main(array<String^>^ args)
{
         Application::EnableVisualStyles();
         Application::SetCompatibleTextRenderingDefault(false);
         First_App::Form1 form;
         Application::Run(%form);
}




