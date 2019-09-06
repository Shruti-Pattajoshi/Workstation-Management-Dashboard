#pragma once


namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  HOST_VAL;
	private: System::Windows::Forms::TextBox^  SYS_VAL;


	private: System::Windows::Forms::TextBox^  SEAT_VAL;
	private: System::Windows::Forms::TextBox^  IP_VAL;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  ren_rsi_txt;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  Warranty_Status_txt;
	private: System::Windows::Forms::TextBox^  Audit_Check_Status_txt;
	private: System::Windows::Forms::TextBox^  Remarks_txt;
	private: System::Windows::Forms::TextBox^  Issue_Resolve_Date_txt;
	private: System::Windows::Forms::TextBox^  Action_Taken_txt;
	private: System::Windows::Forms::TextBox^  Discrepancy_txt;
	private: System::Windows::Forms::TextBox^  Issue_Report_txt;
	private: System::Windows::Forms::TextBox^  OCS_Agent_txt;
	private: System::Windows::Forms::TextBox^  Unwanted_Software_txt;
	private: System::Windows::Forms::TextBox^  Printer_Installation_Access_txt;
	private: System::Windows::Forms::TextBox^  Printer_install_txt;
	private: System::Windows::Forms::TextBox^  Internet_Access_txt;
	private: System::Windows::Forms::TextBox^  USB_Access_txt;
	private: System::Windows::Forms::TextBox^  Admin_Accesss_txt;
	private: System::Windows::Forms::TextBox^  Windows_Security_txt;
	private: System::Windows::Forms::TextBox^  Antivirus_txt;
	private: System::Windows::Forms::TextBox^  Local_Admin_Password_txt;
	private: System::Windows::Forms::TextBox^  Encryption_Password_txt;
	private: System::Windows::Forms::TextBox^  IP_Address_txt;
	private: System::Windows::Forms::TextBox^  System_Sno_txt;
	private: System::Windows::Forms::TextBox^  Hostname_txt;
	private: System::Windows::Forms::TextBox^  Seat_no_txt;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->HOST_VAL = (gcnew System::Windows::Forms::TextBox());
			this->SYS_VAL = (gcnew System::Windows::Forms::TextBox());
			this->SEAT_VAL = (gcnew System::Windows::Forms::TextBox());
			this->IP_VAL = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->ren_rsi_txt = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Warranty_Status_txt = (gcnew System::Windows::Forms::TextBox());
			this->Audit_Check_Status_txt = (gcnew System::Windows::Forms::TextBox());
			this->Remarks_txt = (gcnew System::Windows::Forms::TextBox());
			this->Issue_Resolve_Date_txt = (gcnew System::Windows::Forms::TextBox());
			this->Action_Taken_txt = (gcnew System::Windows::Forms::TextBox());
			this->Discrepancy_txt = (gcnew System::Windows::Forms::TextBox());
			this->Issue_Report_txt = (gcnew System::Windows::Forms::TextBox());
			this->OCS_Agent_txt = (gcnew System::Windows::Forms::TextBox());
			this->Unwanted_Software_txt = (gcnew System::Windows::Forms::TextBox());
			this->Printer_Installation_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->Printer_install_txt = (gcnew System::Windows::Forms::TextBox());
			this->Internet_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->USB_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->Admin_Accesss_txt = (gcnew System::Windows::Forms::TextBox());
			this->Windows_Security_txt = (gcnew System::Windows::Forms::TextBox());
			this->Antivirus_txt = (gcnew System::Windows::Forms::TextBox());
			this->Local_Admin_Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Encryption_Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->IP_Address_txt = (gcnew System::Windows::Forms::TextBox());
			this->System_Sno_txt = (gcnew System::Windows::Forms::TextBox());
			this->Hostname_txt = (gcnew System::Windows::Forms::TextBox());
			this->Seat_no_txt = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 36);
			this->label1->TabIndex = 173;
			this->label1->Text = L"SEARCH WORKSTATION";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label29->Location = System::Drawing::Point(17, 144);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(136, 21);
			this->label29->TabIndex = 222;
			this->label29->Text = L"By System_Sno";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label27->Location = System::Drawing::Point(17, 94);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(117, 21);
			this->label27->TabIndex = 221;
			this->label27->Text = L"By Hostname";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(17, 56);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(246, 24);
			this->label17->TabIndex = 220;
			this->label17->Text = L"Choose you desired Option:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label28->Location = System::Drawing::Point(466, 145);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(129, 21);
			this->label28->TabIndex = 224;
			this->label28->Text = L"By IP_Address";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label30->Location = System::Drawing::Point(466, 95);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(105, 21);
			this->label30->TabIndex = 223;
			this->label30->Text = L"By Seat_No";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(743, 571);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 41);
			this->button3->TabIndex = 229;
			this->button3->Text = L"BACK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// HOST_VAL
			// 
			this->HOST_VAL->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->HOST_VAL->Location = System::Drawing::Point(192, 98);
			this->HOST_VAL->Name = L"HOST_VAL";
			this->HOST_VAL->Size = System::Drawing::Size(132, 20);
			this->HOST_VAL->TabIndex = 230;
			// 
			// SYS_VAL
			// 
			this->SYS_VAL->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->SYS_VAL->Location = System::Drawing::Point(192, 149);
			this->SYS_VAL->Name = L"SYS_VAL";
			this->SYS_VAL->Size = System::Drawing::Size(132, 20);
			this->SYS_VAL->TabIndex = 231;
			this->SYS_VAL->TextChanged += gcnew System::EventHandler(this, &Form5::textBox2_TextChanged);
			// 
			// SEAT_VAL
			// 
			this->SEAT_VAL->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->SEAT_VAL->Location = System::Drawing::Point(688, 102);
			this->SEAT_VAL->Name = L"SEAT_VAL";
			this->SEAT_VAL->Size = System::Drawing::Size(132, 20);
			this->SEAT_VAL->TabIndex = 232;
			// 
			// IP_VAL
			// 
			this->IP_VAL->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->IP_VAL->Location = System::Drawing::Point(688, 153);
			this->IP_VAL->Name = L"IP_VAL";
			this->IP_VAL->Size = System::Drawing::Size(132, 20);
			this->IP_VAL->TabIndex = 233;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bell MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(374, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 26);
			this->button1->TabIndex = 234;
			this->button1->Text = L"GO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Menu;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bell MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(374, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 25);
			this->button2->TabIndex = 235;
			this->button2->Text = L"GO";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Menu;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bell MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkBlue;
			this->button4->Location = System::Drawing::Point(856, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 24);
			this->button4->TabIndex = 236;
			this->button4->Text = L"GO";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form5::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Menu;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bell MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkBlue;
			this->button5->Location = System::Drawing::Point(856, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 26);
			this->button5->TabIndex = 237;
			this->button5->Text = L"GO";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form5::button5_Click);
			// 
			// ren_rsi_txt
			// 
			this->ren_rsi_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ren_rsi_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ren_rsi_txt->Location = System::Drawing::Point(280, 554);
			this->ren_rsi_txt->Name = L"ren_rsi_txt";
			this->ren_rsi_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ren_rsi_txt->Size = System::Drawing::Size(189, 20);
			this->ren_rsi_txt->TabIndex = 283;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::AliceBlue;
			this->label31->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Maroon;
			this->label31->Location = System::Drawing::Point(25, 556);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(59, 15);
			this->label31->TabIndex = 282;
			this->label31->Text = L"REN-RSI";
			// 
			// Warranty_Status_txt
			// 
			this->Warranty_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Warranty_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Warranty_Status_txt->Location = System::Drawing::Point(725, 518);
			this->Warranty_Status_txt->Name = L"Warranty_Status_txt";
			this->Warranty_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Warranty_Status_txt->Size = System::Drawing::Size(178, 20);
			this->Warranty_Status_txt->TabIndex = 281;
			// 
			// Audit_Check_Status_txt
			// 
			this->Audit_Check_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Audit_Check_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Audit_Check_Status_txt->Location = System::Drawing::Point(725, 486);
			this->Audit_Check_Status_txt->Name = L"Audit_Check_Status_txt";
			this->Audit_Check_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Audit_Check_Status_txt->Size = System::Drawing::Size(178, 20);
			this->Audit_Check_Status_txt->TabIndex = 280;
			// 
			// Remarks_txt
			// 
			this->Remarks_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Remarks_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Remarks_txt->Location = System::Drawing::Point(725, 453);
			this->Remarks_txt->Name = L"Remarks_txt";
			this->Remarks_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Remarks_txt->Size = System::Drawing::Size(178, 20);
			this->Remarks_txt->TabIndex = 279;
			// 
			// Issue_Resolve_Date_txt
			// 
			this->Issue_Resolve_Date_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Resolve_Date_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Resolve_Date_txt->Location = System::Drawing::Point(725, 421);
			this->Issue_Resolve_Date_txt->Name = L"Issue_Resolve_Date_txt";
			this->Issue_Resolve_Date_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Resolve_Date_txt->Size = System::Drawing::Size(178, 20);
			this->Issue_Resolve_Date_txt->TabIndex = 278;
			// 
			// Action_Taken_txt
			// 
			this->Action_Taken_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Action_Taken_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Action_Taken_txt->Location = System::Drawing::Point(725, 389);
			this->Action_Taken_txt->Name = L"Action_Taken_txt";
			this->Action_Taken_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Action_Taken_txt->Size = System::Drawing::Size(178, 20);
			this->Action_Taken_txt->TabIndex = 277;
			// 
			// Discrepancy_txt
			// 
			this->Discrepancy_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Discrepancy_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Discrepancy_txt->Location = System::Drawing::Point(725, 358);
			this->Discrepancy_txt->Name = L"Discrepancy_txt";
			this->Discrepancy_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Discrepancy_txt->Size = System::Drawing::Size(178, 20);
			this->Discrepancy_txt->TabIndex = 276;
			// 
			// Issue_Report_txt
			// 
			this->Issue_Report_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Report_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Report_txt->Location = System::Drawing::Point(725, 316);
			this->Issue_Report_txt->Name = L"Issue_Report_txt";
			this->Issue_Report_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Report_txt->Size = System::Drawing::Size(178, 20);
			this->Issue_Report_txt->TabIndex = 275;
			// 
			// OCS_Agent_txt
			// 
			this->OCS_Agent_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->OCS_Agent_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->OCS_Agent_txt->Location = System::Drawing::Point(725, 282);
			this->OCS_Agent_txt->Name = L"OCS_Agent_txt";
			this->OCS_Agent_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OCS_Agent_txt->Size = System::Drawing::Size(178, 20);
			this->OCS_Agent_txt->TabIndex = 274;
			// 
			// Unwanted_Software_txt
			// 
			this->Unwanted_Software_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Unwanted_Software_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Unwanted_Software_txt->Location = System::Drawing::Point(725, 252);
			this->Unwanted_Software_txt->Name = L"Unwanted_Software_txt";
			this->Unwanted_Software_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Unwanted_Software_txt->Size = System::Drawing::Size(178, 20);
			this->Unwanted_Software_txt->TabIndex = 273;
			// 
			// Printer_Installation_Access_txt
			// 
			this->Printer_Installation_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_Installation_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_Installation_Access_txt->Location = System::Drawing::Point(725, 218);
			this->Printer_Installation_Access_txt->Name = L"Printer_Installation_Access_txt";
			this->Printer_Installation_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_Installation_Access_txt->Size = System::Drawing::Size(178, 20);
			this->Printer_Installation_Access_txt->TabIndex = 272;
			// 
			// Printer_install_txt
			// 
			this->Printer_install_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_install_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_install_txt->Location = System::Drawing::Point(725, 188);
			this->Printer_install_txt->Name = L"Printer_install_txt";
			this->Printer_install_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_install_txt->Size = System::Drawing::Size(178, 20);
			this->Printer_install_txt->TabIndex = 271;
			// 
			// Internet_Access_txt
			// 
			this->Internet_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Internet_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Internet_Access_txt->Location = System::Drawing::Point(280, 522);
			this->Internet_Access_txt->Name = L"Internet_Access_txt";
			this->Internet_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Internet_Access_txt->Size = System::Drawing::Size(189, 20);
			this->Internet_Access_txt->TabIndex = 270;
			// 
			// USB_Access_txt
			// 
			this->USB_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->USB_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->USB_Access_txt->Location = System::Drawing::Point(280, 491);
			this->USB_Access_txt->Name = L"USB_Access_txt";
			this->USB_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->USB_Access_txt->Size = System::Drawing::Size(189, 20);
			this->USB_Access_txt->TabIndex = 269;
			// 
			// Admin_Accesss_txt
			// 
			this->Admin_Accesss_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Admin_Accesss_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Admin_Accesss_txt->Location = System::Drawing::Point(280, 454);
			this->Admin_Accesss_txt->Name = L"Admin_Accesss_txt";
			this->Admin_Accesss_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Admin_Accesss_txt->Size = System::Drawing::Size(189, 20);
			this->Admin_Accesss_txt->TabIndex = 268;
			// 
			// Windows_Security_txt
			// 
			this->Windows_Security_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Windows_Security_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Windows_Security_txt->Location = System::Drawing::Point(280, 423);
			this->Windows_Security_txt->Name = L"Windows_Security_txt";
			this->Windows_Security_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Windows_Security_txt->Size = System::Drawing::Size(189, 20);
			this->Windows_Security_txt->TabIndex = 267;
			// 
			// Antivirus_txt
			// 
			this->Antivirus_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Antivirus_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Antivirus_txt->Location = System::Drawing::Point(280, 393);
			this->Antivirus_txt->Name = L"Antivirus_txt";
			this->Antivirus_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Antivirus_txt->Size = System::Drawing::Size(189, 20);
			this->Antivirus_txt->TabIndex = 266;
			// 
			// Local_Admin_Password_txt
			// 
			this->Local_Admin_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Local_Admin_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Local_Admin_Password_txt->Location = System::Drawing::Point(280, 359);
			this->Local_Admin_Password_txt->Name = L"Local_Admin_Password_txt";
			this->Local_Admin_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Local_Admin_Password_txt->Size = System::Drawing::Size(189, 20);
			this->Local_Admin_Password_txt->TabIndex = 265;
			// 
			// Encryption_Password_txt
			// 
			this->Encryption_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Encryption_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Encryption_Password_txt->Location = System::Drawing::Point(280, 325);
			this->Encryption_Password_txt->Name = L"Encryption_Password_txt";
			this->Encryption_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Encryption_Password_txt->Size = System::Drawing::Size(189, 20);
			this->Encryption_Password_txt->TabIndex = 264;
			// 
			// IP_Address_txt
			// 
			this->IP_Address_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->IP_Address_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->IP_Address_txt->Location = System::Drawing::Point(280, 293);
			this->IP_Address_txt->Name = L"IP_Address_txt";
			this->IP_Address_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->IP_Address_txt->Size = System::Drawing::Size(189, 20);
			this->IP_Address_txt->TabIndex = 263;
			// 
			// System_Sno_txt
			// 
			this->System_Sno_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->System_Sno_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->System_Sno_txt->Location = System::Drawing::Point(280, 258);
			this->System_Sno_txt->Name = L"System_Sno_txt";
			this->System_Sno_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->System_Sno_txt->Size = System::Drawing::Size(189, 20);
			this->System_Sno_txt->TabIndex = 262;
			// 
			// Hostname_txt
			// 
			this->Hostname_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Hostname_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Hostname_txt->Location = System::Drawing::Point(280, 223);
			this->Hostname_txt->Name = L"Hostname_txt";
			this->Hostname_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Hostname_txt->Size = System::Drawing::Size(189, 20);
			this->Hostname_txt->TabIndex = 261;
			// 
			// Seat_no_txt
			// 
			this->Seat_no_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Seat_no_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Seat_no_txt->Location = System::Drawing::Point(280, 193);
			this->Seat_no_txt->Name = L"Seat_no_txt";
			this->Seat_no_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Seat_no_txt->Size = System::Drawing::Size(189, 20);
			this->Seat_no_txt->TabIndex = 260;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AliceBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Maroon;
			this->label24->Location = System::Drawing::Point(514, 197);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(123, 15);
			this->label24->TabIndex = 259;
			this->label24->Text = L"Printer installed Y/N";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::AliceBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Maroon;
			this->label23->Location = System::Drawing::Point(514, 329);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(113, 15);
			this->label23->TabIndex = 258;
			this->label23->Text = L"Issue Report Date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::AliceBlue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Maroon;
			this->label22->Location = System::Drawing::Point(514, 363);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(106, 15);
			this->label22->TabIndex = 257;
			this->label22->Text = L"Any Discrepancy";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::AliceBlue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Maroon;
			this->label21->Location = System::Drawing::Point(514, 397);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(108, 15);
			this->label21->TabIndex = 256;
			this->label21->Text = L"Action Taken Y/N";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::AliceBlue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Maroon;
			this->label20->Location = System::Drawing::Point(514, 295);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(137, 15);
			this->label20->TabIndex = 255;
			this->label20->Text = L"OCS Agent Status Y/N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::AliceBlue;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Maroon;
			this->label19->Location = System::Drawing::Point(514, 228);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(185, 15);
			this->label19->TabIndex = 254;
			this->label19->Text = L"Printer Installation Access Y/N";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::AliceBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Maroon;
			this->label18->Location = System::Drawing::Point(514, 260);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(197, 15);
			this->label18->TabIndex = 253;
			this->label18->Text = L"Unwanted Software Installed Y/N";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::AliceBlue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Maroon;
			this->label16->Location = System::Drawing::Point(514, 529);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 15);
			this->label16->TabIndex = 252;
			this->label16->Text = L"Warranty Status Y/N";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::AliceBlue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Maroon;
			this->label15->Location = System::Drawing::Point(514, 495);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(211, 15);
			this->label15->TabIndex = 251;
			this->label15->Text = L"Audit Check Status (Open/Closed) ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::AliceBlue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Maroon;
			this->label14->Location = System::Drawing::Point(514, 458);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 15);
			this->label14->TabIndex = 250;
			this->label14->Text = L"Remarks";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::AliceBlue;
			this->label13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Maroon;
			this->label13->Location = System::Drawing::Point(25, 358);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(137, 15);
			this->label13->TabIndex = 249;
			this->label13->Text = L"Local Admin Password";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::AliceBlue;
			this->label12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(25, 392);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 15);
			this->label12->TabIndex = 248;
			this->label12->Text = L"Antivirus Update Y/N";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::AliceBlue;
			this->label11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(25, 422);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(186, 15);
			this->label11->TabIndex = 247;
			this->label11->Text = L"Windows Security Update Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::AliceBlue;
			this->label10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(25, 453);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 15);
			this->label10->TabIndex = 246;
			this->label10->Text = L"Admin Access Y/N";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::AliceBlue;
			this->label9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(25, 490);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 15);
			this->label9->TabIndex = 245;
			this->label9->Text = L"USB Access Y/N";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::AliceBlue;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(25, 522);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 15);
			this->label8->TabIndex = 244;
			this->label8->Text = L"Restricted Internet Access Y/N";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::AliceBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(514, 427);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 15);
			this->label7->TabIndex = 243;
			this->label7->Text = L"Issue Resolve Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::AliceBlue;
			this->label6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(25, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 15);
			this->label6->TabIndex = 242;
			this->label6->Text = L"Encryption Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::AliceBlue;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(25, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 15);
			this->label5->TabIndex = 241;
			this->label5->Text = L"System_Sno";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(25, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 15);
			this->label4->TabIndex = 240;
			this->label4->Text = L"IP_Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::AliceBlue;
			this->label3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(25, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 15);
			this->label3->TabIndex = 239;
			this->label3->Text = L"Hostname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(25, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 15);
			this->label2->TabIndex = 238;
			this->label2->Text = L"Seat _No";
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(920, 624);
			this->Controls->Add(this->ren_rsi_txt);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->Warranty_Status_txt);
			this->Controls->Add(this->Audit_Check_Status_txt);
			this->Controls->Add(this->Remarks_txt);
			this->Controls->Add(this->Issue_Resolve_Date_txt);
			this->Controls->Add(this->Action_Taken_txt);
			this->Controls->Add(this->Discrepancy_txt);
			this->Controls->Add(this->Issue_Report_txt);
			this->Controls->Add(this->OCS_Agent_txt);
			this->Controls->Add(this->Unwanted_Software_txt);
			this->Controls->Add(this->Printer_Installation_Access_txt);
			this->Controls->Add(this->Printer_install_txt);
			this->Controls->Add(this->Internet_Access_txt);
			this->Controls->Add(this->USB_Access_txt);
			this->Controls->Add(this->Admin_Accesss_txt);
			this->Controls->Add(this->Windows_Security_txt);
			this->Controls->Add(this->Antivirus_txt);
			this->Controls->Add(this->Local_Admin_Password_txt);
			this->Controls->Add(this->Encryption_Password_txt);
			this->Controls->Add(this->IP_Address_txt);
			this->Controls->Add(this->System_Sno_txt);
			this->Controls->Add(this->Hostname_txt);
			this->Controls->Add(this->Seat_no_txt);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->IP_VAL);
			this->Controls->Add(this->SEAT_VAL);
			this->Controls->Add(this->SYS_VAL);
			this->Controls->Add(this->HOST_VAL);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label1);
			this->Name = L"Form5";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Form5";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox_IP_Address_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 this->Hide();

		 }





private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			String^ comboval= HOST_VAL->Text;

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.workstation where Hostname_FQDN = '"+comboval+"';",condDataBase);
    MySqlDataReader^ myReader;
	
	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		if(myReader->Read())
		{
		String^ SEAT_NOval=myReader->GetInt32("Seat_No").ToString();
		Seat_no_txt->Text=SEAT_NOval;
		String^ HOSTNAMEval=myReader->GetString("Hostname_FQDN");
		Hostname_txt->Text=HOSTNAMEval;
		String^ SYS_SNOval=myReader->GetString("System_S_N");
		System_Sno_txt->Text=SYS_SNOval;
		String^ ip_add_val=myReader->GetString("IP_Address");
		IP_Address_txt->Text=ip_add_val;
		String^ encryp_pass_val=myReader->GetString("Encryption_Password");
		Encryption_Password_txt->Text=encryp_pass_val;
	    String^ local_pass_val=myReader->GetString("Local_Admin_Password");
		Local_Admin_Password_txt->Text=local_pass_val;
	    String^ antivirus_val=myReader->GetString("Antivirus_latest_updated_Y_N");
		Antivirus_txt->Text=antivirus_val;
	    String^ window_val=myReader->GetString("Windows_security_patches_Last_Updated_date_12_12_2018");
		Windows_Security_txt->Text=window_val;
	    String^ admin_val=myReader->GetString("Admin_access_on_the_machine_Y_N");
		Admin_Accesss_txt->Text=admin_val;
	    String^ usb_val=myReader->GetString("USB_access_Y_N");
		USB_Access_txt->Text=usb_val;
	    String^ internet_val=myReader->GetString("Restricted_Internet_access_Y_N");
		Internet_Access_txt->Text=internet_val;
	    String^ printer_install=myReader->GetString("Printer_installed_Y_N");
		Printer_install_txt->Text=printer_install;
	    String^ printer_installation=myReader->GetString("Printer_installation_access_from_print_server_y_N");
		Printer_Installation_Access_txt->Text=printer_installation;
	    String^ unwanted_sw_val=myReader->GetString("Unwanted_software_installed_Y_N");
		Unwanted_Software_txt->Text=unwanted_sw_val;
	    String^ ocs_val=myReader->GetString("OCS_Agent_status_Y_N");
		OCS_Agent_txt->Text=ocs_val;
	    String^ issue_report_val=myReader->GetString("Issue_reported_on_Date");
		Issue_Report_txt->Text=issue_report_val;
	    String^ discrepancy=myReader->GetString("If_find_any_discrepancy_Y_N");
		Discrepancy_txt->Text=discrepancy;
		String^ action_val=myReader->GetString("Action_taken_to_fix_Y_N_NA");
		Action_Taken_txt->Text=action_val;


	    String^ issue_resolve_val=myReader->GetString("Issue_resolved_on_Date");
		Issue_Resolve_Date_txt->Text=issue_resolve_val;
	    String^ remarks_val=myReader->GetString("Remarks");
		Remarks_txt->Text=remarks_val;
	    String^ audit_val=myReader->GetString("Audit_check_Status_Open_Closed");
		Audit_Check_Status_txt->Text=audit_val;
	    String^ ren_val=myReader->GetString("REN_RSI");
		ren_rsi_txt->Text=ren_val;
		String^ warr_val=myReader->GetString("Wrranty_Status_Y_N");
		Warranty_Status_txt->Text=warr_val;

   		}
		
		else
		{
			MessageBox::Show("Record doesn't exist!");
		}



	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
		
}







private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
		String^ comboval= SEAT_VAL->Text;

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.workstation where Seat_No = '"+comboval+"';",condDataBase);
    MySqlDataReader^ myReader;
	
	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		if(myReader->Read())
		{
		String^ SEAT_NOval=myReader->GetInt32("Seat_No").ToString();
		Seat_no_txt->Text=SEAT_NOval;
		String^ HOSTNAMEval=myReader->GetString("Hostname_FQDN");
		Hostname_txt->Text=HOSTNAMEval;
		String^ SYS_SNOval=myReader->GetString("System_S_N");
		System_Sno_txt->Text=SYS_SNOval;
		String^ ip_add_val=myReader->GetString("IP_Address");
		IP_Address_txt->Text=ip_add_val;
		String^ encryp_pass_val=myReader->GetString("Encryption_Password");
		Encryption_Password_txt->Text=encryp_pass_val;
	    String^ local_pass_val=myReader->GetString("Local_Admin_Password");
		Local_Admin_Password_txt->Text=local_pass_val;
	    String^ antivirus_val=myReader->GetString("Antivirus_latest_updated_Y_N");
		Antivirus_txt->Text=antivirus_val;
	    String^ window_val=myReader->GetString("Windows_security_patches_Last_Updated_date_12_12_2018");
		Windows_Security_txt->Text=window_val;
	    String^ admin_val=myReader->GetString("Admin_access_on_the_machine_Y_N");
		Admin_Accesss_txt->Text=admin_val;
	    String^ usb_val=myReader->GetString("USB_access_Y_N");
		USB_Access_txt->Text=usb_val;
	    String^ internet_val=myReader->GetString("Restricted_Internet_access_Y_N");
		Internet_Access_txt->Text=internet_val;
	    String^ printer_install=myReader->GetString("Printer_installed_Y_N");
		Printer_install_txt->Text=printer_install;
	    String^ printer_installation=myReader->GetString("Printer_installation_access_from_print_server_y_N");
		Printer_Installation_Access_txt->Text=printer_installation;
	    String^ unwanted_sw_val=myReader->GetString("Unwanted_software_installed_Y_N");
		Unwanted_Software_txt->Text=unwanted_sw_val;
	    String^ ocs_val=myReader->GetString("OCS_Agent_status_Y_N");
		OCS_Agent_txt->Text=ocs_val;
	    String^ issue_report_val=myReader->GetString("Issue_reported_on_Date");
		Issue_Report_txt->Text=issue_report_val;
	    String^ discrepancy=myReader->GetString("If_find_any_discrepancy_Y_N");
		Discrepancy_txt->Text=discrepancy;
		String^ action_val=myReader->GetString("Action_taken_to_fix_Y_N_NA");
		Action_Taken_txt->Text=action_val;


	    String^ issue_resolve_val=myReader->GetString("Issue_resolved_on_Date");
		Issue_Resolve_Date_txt->Text=issue_resolve_val;
	    String^ remarks_val=myReader->GetString("Remarks");
		Remarks_txt->Text=remarks_val;
	    String^ audit_val=myReader->GetString("Audit_check_Status_Open_Closed");
		Audit_Check_Status_txt->Text=audit_val;
	    String^ ren_val=myReader->GetString("REN_RSI");
		ren_rsi_txt->Text=ren_val;
		String^ warr_val=myReader->GetString("Wrranty_Status_Y_N");
		Warranty_Status_txt->Text=warr_val;

   		}

		else
		{
			MessageBox::Show("Record doesn't exist!");
		}


	

	
	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}


 }




private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	 String^ comboval= SYS_VAL->Text;

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.workstation where System_S_N = '"+comboval+"';",condDataBase);
    MySqlDataReader^ myReader;
	
	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		if(myReader->Read())
		{
		String^ SEAT_NOval=myReader->GetInt32("Seat_No").ToString();
		Seat_no_txt->Text=SEAT_NOval;
		String^ HOSTNAMEval=myReader->GetString("Hostname_FQDN");
		Hostname_txt->Text=HOSTNAMEval;
		String^ SYS_SNOval=myReader->GetString("System_S_N");
		System_Sno_txt->Text=SYS_SNOval;
		String^ ip_add_val=myReader->GetString("IP_Address");
		IP_Address_txt->Text=ip_add_val;
		String^ encryp_pass_val=myReader->GetString("Encryption_Password");
		Encryption_Password_txt->Text=encryp_pass_val;
	    String^ local_pass_val=myReader->GetString("Local_Admin_Password");
		Local_Admin_Password_txt->Text=local_pass_val;
	    String^ antivirus_val=myReader->GetString("Antivirus_latest_updated_Y_N");
		Antivirus_txt->Text=antivirus_val;
	    String^ window_val=myReader->GetString("Windows_security_patches_Last_Updated_date_12_12_2018");
		Windows_Security_txt->Text=window_val;
	    String^ admin_val=myReader->GetString("Admin_access_on_the_machine_Y_N");
		Admin_Accesss_txt->Text=admin_val;
	    String^ usb_val=myReader->GetString("USB_access_Y_N");
		USB_Access_txt->Text=usb_val;
	    String^ internet_val=myReader->GetString("Restricted_Internet_access_Y_N");
		Internet_Access_txt->Text=internet_val;
	    String^ printer_install=myReader->GetString("Printer_installed_Y_N");
		Printer_install_txt->Text=printer_install;
	    String^ printer_installation=myReader->GetString("Printer_installation_access_from_print_server_y_N");
		Printer_Installation_Access_txt->Text=printer_installation;
	    String^ unwanted_sw_val=myReader->GetString("Unwanted_software_installed_Y_N");
		Unwanted_Software_txt->Text=unwanted_sw_val;
	    String^ ocs_val=myReader->GetString("OCS_Agent_status_Y_N");
		OCS_Agent_txt->Text=ocs_val;
	    String^ issue_report_val=myReader->GetString("Issue_reported_on_Date");
		Issue_Report_txt->Text=issue_report_val;
	    String^ discrepancy=myReader->GetString("If_find_any_discrepancy_Y_N");
		Discrepancy_txt->Text=discrepancy;
		String^ action_val=myReader->GetString("Action_taken_to_fix_Y_N_NA");
		Action_Taken_txt->Text=action_val;


	    String^ issue_resolve_val=myReader->GetString("Issue_resolved_on_Date");
		Issue_Resolve_Date_txt->Text=issue_resolve_val;
	    String^ remarks_val=myReader->GetString("Remarks");
		Remarks_txt->Text=remarks_val;
	    String^ audit_val=myReader->GetString("Audit_check_Status_Open_Closed");
		Audit_Check_Status_txt->Text=audit_val;
	    String^ ren_val=myReader->GetString("REN_RSI");
		ren_rsi_txt->Text=ren_val;
		String^ warr_val=myReader->GetString("Wrranty_Status_Y_N");
		Warranty_Status_txt->Text=warr_val;

   		}

		else
		{
			MessageBox::Show("Record doesn't exist!");
		}

	
		

	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
 }




private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ comboval= IP_VAL->Text;

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from rsys_workstation.workstation where IP_Address = '"+comboval+"';",condDataBase);
    MySqlDataReader^ myReader;
	
	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		if(myReader->Read())
		{
		String^ SEAT_NOval=myReader->GetInt32("Seat_No").ToString();
		Seat_no_txt->Text=SEAT_NOval;
		String^ HOSTNAMEval=myReader->GetString("Hostname_FQDN");
		Hostname_txt->Text=HOSTNAMEval;
		String^ SYS_SNOval=myReader->GetString("System_S_N");
		System_Sno_txt->Text=SYS_SNOval;
		String^ ip_add_val=myReader->GetString("IP_Address");
		IP_Address_txt->Text=ip_add_val;
		String^ encryp_pass_val=myReader->GetString("Encryption_Password");
		Encryption_Password_txt->Text=encryp_pass_val;
	    String^ local_pass_val=myReader->GetString("Local_Admin_Password");
		Local_Admin_Password_txt->Text=local_pass_val;
	    String^ antivirus_val=myReader->GetString("Antivirus_latest_updated_Y_N");
		Antivirus_txt->Text=antivirus_val;
	    String^ window_val=myReader->GetString("Windows_security_patches_Last_Updated_date_12_12_2018");
		Windows_Security_txt->Text=window_val;
	    String^ admin_val=myReader->GetString("Admin_access_on_the_machine_Y_N");
		Admin_Accesss_txt->Text=admin_val;
	    String^ usb_val=myReader->GetString("USB_access_Y_N");
		USB_Access_txt->Text=usb_val;
	    String^ internet_val=myReader->GetString("Restricted_Internet_access_Y_N");
		Internet_Access_txt->Text=internet_val;
	    String^ printer_install=myReader->GetString("Printer_installed_Y_N");
		Printer_install_txt->Text=printer_install;
	    String^ printer_installation=myReader->GetString("Printer_installation_access_from_print_server_y_N");
		Printer_Installation_Access_txt->Text=printer_installation;
	    String^ unwanted_sw_val=myReader->GetString("Unwanted_software_installed_Y_N");
		Unwanted_Software_txt->Text=unwanted_sw_val;
	    String^ ocs_val=myReader->GetString("OCS_Agent_status_Y_N");
		OCS_Agent_txt->Text=ocs_val;
	    String^ issue_report_val=myReader->GetString("Issue_reported_on_Date");
		Issue_Report_txt->Text=issue_report_val;
	    String^ discrepancy=myReader->GetString("If_find_any_discrepancy_Y_N");
		Discrepancy_txt->Text=discrepancy;
		String^ action_val=myReader->GetString("Action_taken_to_fix_Y_N_NA");
		Action_Taken_txt->Text=action_val;


	    String^ issue_resolve_val=myReader->GetString("Issue_resolved_on_Date");
		Issue_Resolve_Date_txt->Text=issue_resolve_val;
	    String^ remarks_val=myReader->GetString("Remarks");
		Remarks_txt->Text=remarks_val;
	    String^ audit_val=myReader->GetString("Audit_check_Status_Open_Closed");
		Audit_Check_Status_txt->Text=audit_val;
	    String^ ren_val=myReader->GetString("REN_RSI");
		ren_rsi_txt->Text=ren_val;
		String^ warr_val=myReader->GetString("Wrranty_Status_Y_N");
		Warranty_Status_txt->Text=warr_val;

   		}
	
		else
		{
			MessageBox::Show("Record doesn't exist!");
		}




	}
	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

 }


private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		

		 }

};
}
