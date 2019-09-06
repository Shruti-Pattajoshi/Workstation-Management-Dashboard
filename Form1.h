#pragma once
#include "Form2.h"


namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		
		Form1(void)
		{
			InitializeComponent();
			PASSWORD_txt_fill->PasswordChar='*';
			PASSWORD_txt_fill->MaxLength=25;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  USERNAME_txt;
	private: System::Windows::Forms::Label^  PASSWORD_txt;
	private: System::Windows::Forms::Label^  LOGIN_PAGE_txt;
	private: System::Windows::Forms::TextBox^  USERNAME_txt_fill;

	private: System::Windows::Forms::TextBox^  PASSWORD_txt_fill;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->USERNAME_txt = (gcnew System::Windows::Forms::Label());
			this->PASSWORD_txt = (gcnew System::Windows::Forms::Label());
			this->LOGIN_PAGE_txt = (gcnew System::Windows::Forms::Label());
			this->USERNAME_txt_fill = (gcnew System::Windows::Forms::TextBox());
			this->PASSWORD_txt_fill = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// USERNAME_txt
			// 
			this->USERNAME_txt->AutoSize = true;
			this->USERNAME_txt->BackColor = System::Drawing::Color::Gainsboro;
			this->USERNAME_txt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->USERNAME_txt->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->USERNAME_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->USERNAME_txt->ForeColor = System::Drawing::Color::DarkRed;
			this->USERNAME_txt->Location = System::Drawing::Point(69, 137);
			this->USERNAME_txt->Name = L"USERNAME_txt";
			this->USERNAME_txt->Size = System::Drawing::Size(163, 29);
			this->USERNAME_txt->TabIndex = 0;
			this->USERNAME_txt->Text = L"USERNAME:";
			this->USERNAME_txt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->USERNAME_txt->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// PASSWORD_txt
			// 
			this->PASSWORD_txt->AutoSize = true;
			this->PASSWORD_txt->BackColor = System::Drawing::Color::Gainsboro;
			this->PASSWORD_txt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PASSWORD_txt->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->PASSWORD_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PASSWORD_txt->ForeColor = System::Drawing::Color::DarkRed;
			this->PASSWORD_txt->Location = System::Drawing::Point(69, 199);
			this->PASSWORD_txt->Name = L"PASSWORD_txt";
			this->PASSWORD_txt->Size = System::Drawing::Size(166, 29);
			this->PASSWORD_txt->TabIndex = 1;
			this->PASSWORD_txt->Text = L"PASSWORD:";
			this->PASSWORD_txt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LOGIN_PAGE_txt
			// 
			this->LOGIN_PAGE_txt->AutoSize = true;
			this->LOGIN_PAGE_txt->BackColor = System::Drawing::Color::Gainsboro;
			this->LOGIN_PAGE_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LOGIN_PAGE_txt->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LOGIN_PAGE_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LOGIN_PAGE_txt->Location = System::Drawing::Point(173, 9);
			this->LOGIN_PAGE_txt->Name = L"LOGIN_PAGE_txt";
			this->LOGIN_PAGE_txt->Size = System::Drawing::Size(210, 36);
			this->LOGIN_PAGE_txt->TabIndex = 2;
			this->LOGIN_PAGE_txt->Text = L"LOGIN PAGE";
			this->LOGIN_PAGE_txt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// USERNAME_txt_fill
			// 
			this->USERNAME_txt_fill->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->USERNAME_txt_fill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->USERNAME_txt_fill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->USERNAME_txt_fill->ForeColor = System::Drawing::SystemColors::InfoText;
			this->USERNAME_txt_fill->Location = System::Drawing::Point(283, 137);
			this->USERNAME_txt_fill->Name = L"USERNAME_txt_fill";
			this->USERNAME_txt_fill->Size = System::Drawing::Size(204, 29);
			this->USERNAME_txt_fill->TabIndex = 3;
			this->USERNAME_txt_fill->TextChanged += gcnew System::EventHandler(this, &Form1::username_txt_fill_TextChanged);
			// 
			// PASSWORD_txt_fill
			// 
			this->PASSWORD_txt_fill->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->PASSWORD_txt_fill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PASSWORD_txt_fill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PASSWORD_txt_fill->ForeColor = System::Drawing::SystemColors::InfoText;
			this->PASSWORD_txt_fill->Location = System::Drawing::Point(283, 201);
			this->PASSWORD_txt_fill->Name = L"PASSWORD_txt_fill";
			this->PASSWORD_txt_fill->Size = System::Drawing::Size(204, 29);
			this->PASSWORD_txt_fill->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(68, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"WORKSTATION DATABASE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(214, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"LOG IN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(543, 327);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PASSWORD_txt_fill);
			this->Controls->Add(this->USERNAME_txt_fill);
			this->Controls->Add(this->LOGIN_PAGE_txt);
			this->Controls->Add(this->PASSWORD_txt);
			this->Controls->Add(this->USERNAME_txt);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->ForeColor = System::Drawing::Color::DarkRed;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void username_txt_fill_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

    String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.login where USERNAME='"+this->USERNAME_txt_fill->Text+"' and PASSWORD='"+this->PASSWORD_txt_fill->Text+"';",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		int count=0;
		while(myReader->Read())
		{
		count=count+1;
		}
	
	if(count==1)
	{
		MessageBox::Show("Login successful");
		this->Hide();
		Form2^ f2 = gcnew Form2();			 //opens new form 
		f2->ShowDialog();

	}
	else 
	{
		MessageBox::Show("Login Failed");
	}

	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
			
		 
}

};
}
