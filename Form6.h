#pragma once



namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
		{
			InitializeComponent();
			PASS_txt->PasswordChar='*';
			PASS_txt->MaxLength=25;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  NAME_txt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  PASS_txt;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form6::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NAME_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PASS_txt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(15, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Re- Enter your details : ";
			this->label1->Click += gcnew System::EventHandler(this, &Form6::label1_Click);
			// 
			// NAME_txt
			// 
			this->NAME_txt->Location = System::Drawing::Point(176, 92);
			this->NAME_txt->Name = L"NAME_txt";
			this->NAME_txt->Size = System::Drawing::Size(150, 20);
			this->NAME_txt->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(17, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"YOUR USERNAME:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(118, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"SUBMIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(17, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PASSWORD:";
			// 
			// PASS_txt
			// 
			this->PASS_txt->Location = System::Drawing::Point(176, 133);
			this->PASS_txt->Name = L"PASS_txt";
			this->PASS_txt->Size = System::Drawing::Size(150, 20);
			this->PASS_txt->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(237, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 48);
			this->button2->TabIndex = 6;
			this->button2->Text = L"MAIN MENU";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(293, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click_1);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(348, 219);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PASS_txt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NAME_txt);
			this->Controls->Add(this->label1);
			this->Name = L"Form6";
			this->Text = L"Form6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.login where USERNAME='"+this->NAME_txt->Text+"' and PASSWORD='"+this->PASS_txt->Text+"';",condDataBase);
	MySqlDataReader^ myReader;

	String^ name =  NAME_txt->Text ;
	String^ sen = " A record was added by :\t ";

	String^ final = sen + name;

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
		MailMessage^ mail = gcnew MailMessage("anjali.jain@rsystems.com","anjali.jain@rsystems.com","Inventory Record Addition Notification", final );
		SmtpClient^ client = gcnew SmtpClient("mailrelay.india.rsystems.com");
		client->Port=25;
		client->Credentials = gcnew System::Net::NetworkCredential("anjali.jain","Welcome@4rs");
		client->EnableSsl=false;
		client->Send(mail);

		MessageBox::Show("Addition Successful");

	}
	else 
	{
		MessageBox::Show("Fill-In correct details!");
	}

	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
			
 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->Hide();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 }


private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		 }
};
}
