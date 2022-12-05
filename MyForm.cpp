#include "MyForm.h"
#include "Functions.h" 


using namespace System; 
using namespace System::Windows::Forms;

int A;
int B;
int n; 

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	Project1::MyForm form; 
	Application::Run(% form); 
}

System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	A = Convert::ToInt32(numericUpDown_A->Value); 
	B = Convert::ToInt32(numericUpDown_B->Value); 


	check(n);  
	std::vector <int> prime_numbers(A, B); 
	Show();   
}

void Project1::MyForm::Show()
{
	std::vector <int> list = prime_numbers(A, B); 
	for (int i = 0; i < list.size(); i++) {
		listBox1->Items->Add(list[i]);          
	}
}
