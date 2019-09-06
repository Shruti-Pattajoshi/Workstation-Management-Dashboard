#pragma once

#include"Form7.h"

namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label29;
	protected: 
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;














































	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  LOGIN_ID;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  ren_rsi_txt;
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
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->LOGIN_ID = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->ren_rsi_txt = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::AliceBlue;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label29->Location = System::Drawing::Point(29, 483);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(116, 16);
			this->label29->TabIndex = 64;
			this->label29->Text = L"By System_Sno";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::AliceBlue;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label28->Location = System::Drawing::Point(540, 483);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(110, 16);
			this->label28->TabIndex = 63;
			this->label28->Text = L"By IP_Address";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::AliceBlue;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label27->Location = System::Drawing::Point(29, 441);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(100, 16);
			this->label27->TabIndex = 62;
			this->label27->Text = L"By Hostname";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::AliceBlue;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label26->Location = System::Drawing::Point(560, 444);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 16);
			this->label26->TabIndex = 61;
			this->label26->Text = L"By Seat_No";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Navy;
			this->button9->Location = System::Drawing::Point(232, 433);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(227, 33);
			this->button9->TabIndex = 74;
			this->button9->Text = L"UPDATE(USING HOSTNAME)";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form3::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Navy;
			this->button8->Location = System::Drawing::Point(232, 474);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(227, 37);
			this->button8->TabIndex = 73;
			this->button8->Text = L"UPDATE(USING SYSTEM_NO)";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form3::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Navy;
			this->button7->Location = System::Drawing::Point(721, 471);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(207, 40);
			this->button7->TabIndex = 72;
			this->button7->Text = L"UPDATE(USING IP_ADDRESS)";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(721, 438);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 28);
			this->button1->TabIndex = 71;
			this->button1->Text = L"UPDATE(USING SEAT_NO)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(289, 8);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 35);
			this->label1->TabIndex = 75;
			this->label1->Text = L"UPDATE WORKSTATION";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::AliceBlue;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(27, 400);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(279, 25);
			this->label17->TabIndex = 122;
			this->label17->Text = L"Choose you desired Option:";
			this->label17->Click += gcnew System::EventHandler(this, &Form3::label17_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(812, 519);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 42);
			this->button3->TabIndex = 231;
			this->button3->Text = L"BACK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// LOGIN_ID
			// 
			this->LOGIN_ID->AutoSize = true;
			this->LOGIN_ID->Location = System::Drawing::Point(24, 33);
			this->LOGIN_ID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LOGIN_ID->Name = L"LOGIN_ID";
			this->LOGIN_ID->Size = System::Drawing::Size(0, 16);
			this->LOGIN_ID->TabIndex = 232;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(29, 375);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 18);
			this->label2->TabIndex = 278;
			this->label2->Text = L"REN-RSI";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::AliceBlue;
			this->label25->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::Color::Maroon;
			this->label25->Location = System::Drawing::Point(36, 51);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 18);
			this->label25->TabIndex = 277;
			this->label25->Text = L"Seat _No";
			// 
			// ren_rsi_txt
			// 
			this->ren_rsi_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ren_rsi_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ren_rsi_txt->Location = System::Drawing::Point(258, 375);
			this->ren_rsi_txt->Name = L"ren_rsi_txt";
			this->ren_rsi_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ren_rsi_txt->Size = System::Drawing::Size(188, 22);
			this->ren_rsi_txt->TabIndex = 276;
			// 
			// Warranty_Status_txt
			// 
			this->Warranty_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Warranty_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Warranty_Status_txt->Location = System::Drawing::Point(750, 349);
			this->Warranty_Status_txt->Name = L"Warranty_Status_txt";
			this->Warranty_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Warranty_Status_txt->Size = System::Drawing::Size(178, 22);
			this->Warranty_Status_txt->TabIndex = 275;
			// 
			// Audit_Check_Status_txt
			// 
			this->Audit_Check_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Audit_Check_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Audit_Check_Status_txt->Location = System::Drawing::Point(750, 321);
			this->Audit_Check_Status_txt->Name = L"Audit_Check_Status_txt";
			this->Audit_Check_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Audit_Check_Status_txt->Size = System::Drawing::Size(178, 22);
			this->Audit_Check_Status_txt->TabIndex = 274;
			// 
			// Remarks_txt
			// 
			this->Remarks_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Remarks_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Remarks_txt->Location = System::Drawing::Point(750, 291);
			this->Remarks_txt->Name = L"Remarks_txt";
			this->Remarks_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Remarks_txt->Size = System::Drawing::Size(178, 22);
			this->Remarks_txt->TabIndex = 273;
			// 
			// Issue_Resolve_Date_txt
			// 
			this->Issue_Resolve_Date_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Resolve_Date_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Resolve_Date_txt->Location = System::Drawing::Point(750, 264);
			this->Issue_Resolve_Date_txt->Name = L"Issue_Resolve_Date_txt";
			this->Issue_Resolve_Date_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Resolve_Date_txt->Size = System::Drawing::Size(178, 22);
			this->Issue_Resolve_Date_txt->TabIndex = 272;
			// 
			// Action_Taken_txt
			// 
			this->Action_Taken_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Action_Taken_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Action_Taken_txt->Location = System::Drawing::Point(750, 234);
			this->Action_Taken_txt->Name = L"Action_Taken_txt";
			this->Action_Taken_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Action_Taken_txt->Size = System::Drawing::Size(178, 22);
			this->Action_Taken_txt->TabIndex = 271;
			// 
			// Discrepancy_txt
			// 
			this->Discrepancy_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Discrepancy_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Discrepancy_txt->Location = System::Drawing::Point(750, 206);
			this->Discrepancy_txt->Name = L"Discrepancy_txt";
			this->Discrepancy_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Discrepancy_txt->Size = System::Drawing::Size(178, 22);
			this->Discrepancy_txt->TabIndex = 270;
			// 
			// Issue_Report_txt
			// 
			this->Issue_Report_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Report_txt->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Issue_Report_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Report_txt->Location = System::Drawing::Point(750, 171);
			this->Issue_Report_txt->Name = L"Issue_Report_txt";
			this->Issue_Report_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Report_txt->Size = System::Drawing::Size(178, 25);
			this->Issue_Report_txt->TabIndex = 269;
			// 
			// OCS_Agent_txt
			// 
			this->OCS_Agent_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->OCS_Agent_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->OCS_Agent_txt->Location = System::Drawing::Point(750, 140);
			this->OCS_Agent_txt->Name = L"OCS_Agent_txt";
			this->OCS_Agent_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OCS_Agent_txt->Size = System::Drawing::Size(178, 22);
			this->OCS_Agent_txt->TabIndex = 268;
			// 
			// Unwanted_Software_txt
			// 
			this->Unwanted_Software_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Unwanted_Software_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Unwanted_Software_txt->Location = System::Drawing::Point(750, 113);
			this->Unwanted_Software_txt->Name = L"Unwanted_Software_txt";
			this->Unwanted_Software_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Unwanted_Software_txt->Size = System::Drawing::Size(178, 22);
			this->Unwanted_Software_txt->TabIndex = 267;
			// 
			// Printer_Installation_Access_txt
			// 
			this->Printer_Installation_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_Installation_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_Installation_Access_txt->Location = System::Drawing::Point(750, 83);
			this->Printer_Installation_Access_txt->Name = L"Printer_Installation_Access_txt";
			this->Printer_Installation_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_Installation_Access_txt->Size = System::Drawing::Size(178, 22);
			this->Printer_Installation_Access_txt->TabIndex = 266;
			// 
			// Printer_install_txt
			// 
			this->Printer_install_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_install_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_install_txt->Location = System::Drawing::Point(750, 56);
			this->Printer_install_txt->Name = L"Printer_install_txt";
			this->Printer_install_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_install_txt->Size = System::Drawing::Size(178, 22);
			this->Printer_install_txt->TabIndex = 265;
			// 
			// Internet_Access_txt
			// 
			this->Internet_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Internet_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Internet_Access_txt->Location = System::Drawing::Point(258, 345);
			this->Internet_Access_txt->Name = L"Internet_Access_txt";
			this->Internet_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Internet_Access_txt->Size = System::Drawing::Size(188, 22);
			this->Internet_Access_txt->TabIndex = 264;
			// 
			// USB_Access_txt
			// 
			this->USB_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->USB_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->USB_Access_txt->Location = System::Drawing::Point(258, 317);
			this->USB_Access_txt->Name = L"USB_Access_txt";
			this->USB_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->USB_Access_txt->Size = System::Drawing::Size(188, 22);
			this->USB_Access_txt->TabIndex = 263;
			// 
			// Admin_Accesss_txt
			// 
			this->Admin_Accesss_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Admin_Accesss_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Admin_Accesss_txt->Location = System::Drawing::Point(258, 284);
			this->Admin_Accesss_txt->Name = L"Admin_Accesss_txt";
			this->Admin_Accesss_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Admin_Accesss_txt->Size = System::Drawing::Size(188, 22);
			this->Admin_Accesss_txt->TabIndex = 262;
			// 
			// Windows_Security_txt
			// 
			this->Windows_Security_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Windows_Security_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Windows_Security_txt->Location = System::Drawing::Point(258, 257);
			this->Windows_Security_txt->Name = L"Windows_Security_txt";
			this->Windows_Security_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Windows_Security_txt->Size = System::Drawing::Size(188, 22);
			this->Windows_Security_txt->TabIndex = 261;
			// 
			// Antivirus_txt
			// 
			this->Antivirus_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Antivirus_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Antivirus_txt->Location = System::Drawing::Point(258, 230);
			this->Antivirus_txt->Name = L"Antivirus_txt";
			this->Antivirus_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Antivirus_txt->Size = System::Drawing::Size(188, 22);
			this->Antivirus_txt->TabIndex = 260;
			// 
			// Local_Admin_Password_txt
			// 
			this->Local_Admin_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Local_Admin_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Local_Admin_Password_txt->Location = System::Drawing::Point(258, 202);
			this->Local_Admin_Password_txt->Name = L"Local_Admin_Password_txt";
			this->Local_Admin_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Local_Admin_Password_txt->Size = System::Drawing::Size(188, 22);
			this->Local_Admin_Password_txt->TabIndex = 259;
			// 
			// Encryption_Password_txt
			// 
			this->Encryption_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Encryption_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Encryption_Password_txt->Location = System::Drawing::Point(258, 171);
			this->Encryption_Password_txt->Name = L"Encryption_Password_txt";
			this->Encryption_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Encryption_Password_txt->Size = System::Drawing::Size(188, 22);
			this->Encryption_Password_txt->TabIndex = 258;
			// 
			// IP_Address_txt
			// 
			this->IP_Address_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->IP_Address_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->IP_Address_txt->Location = System::Drawing::Point(258, 141);
			this->IP_Address_txt->Name = L"IP_Address_txt";
			this->IP_Address_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->IP_Address_txt->Size = System::Drawing::Size(188, 22);
			this->IP_Address_txt->TabIndex = 257;
			// 
			// System_Sno_txt
			// 
			this->System_Sno_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->System_Sno_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->System_Sno_txt->Location = System::Drawing::Point(258, 110);
			this->System_Sno_txt->Name = L"System_Sno_txt";
			this->System_Sno_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->System_Sno_txt->Size = System::Drawing::Size(188, 22);
			this->System_Sno_txt->TabIndex = 256;
			// 
			// Hostname_txt
			// 
			this->Hostname_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Hostname_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Hostname_txt->Location = System::Drawing::Point(258, 79);
			this->Hostname_txt->Name = L"Hostname_txt";
			this->Hostname_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Hostname_txt->Size = System::Drawing::Size(188, 22);
			this->Hostname_txt->TabIndex = 255;
			// 
			// Seat_no_txt
			// 
			this->Seat_no_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Seat_no_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Seat_no_txt->Location = System::Drawing::Point(258, 52);
			this->Seat_no_txt->Name = L"Seat_no_txt";
			this->Seat_no_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Seat_no_txt->Size = System::Drawing::Size(188, 22);
			this->Seat_no_txt->TabIndex = 254;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AliceBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::Maroon;
			this->label24->Location = System::Drawing::Point(503, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(145, 18);
			this->label24->TabIndex = 253;
			this->label24->Text = L"Printer installed Y/N";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::AliceBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::Maroon;
			this->label23->Location = System::Drawing::Point(503, 172);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 18);
			this->label23->TabIndex = 252;
			this->label23->Text = L"Issue Report Date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::AliceBlue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::Maroon;
			this->label22->Location = System::Drawing::Point(503, 202);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(122, 18);
			this->label22->TabIndex = 251;
			this->label22->Text = L"Any Discrepancy";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Azure;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Maroon;
			this->label21->Location = System::Drawing::Point(503, 233);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(127, 18);
			this->label21->TabIndex = 250;
			this->label21->Text = L"Action Taken Y/N";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::AliceBlue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::Maroon;
			this->label20->Location = System::Drawing::Point(503, 143);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(162, 18);
			this->label20->TabIndex = 249;
			this->label20->Text = L"OCS Agent Status Y/N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::AliceBlue;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::Maroon;
			this->label19->Location = System::Drawing::Point(503, 83);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(217, 18);
			this->label19->TabIndex = 248;
			this->label19->Text = L"Printer Installation Access Y/N";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::AliceBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::Maroon;
			this->label18->Location = System::Drawing::Point(503, 113);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(229, 18);
			this->label18->TabIndex = 247;
			this->label18->Text = L"Unwanted Software Installed Y/N";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::AliceBlue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::Maroon;
			this->label16->Location = System::Drawing::Point(503, 350);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(147, 18);
			this->label16->TabIndex = 246;
			this->label16->Text = L"Warranty Status Y/N";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::AliceBlue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Maroon;
			this->label15->Location = System::Drawing::Point(503, 321);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(245, 18);
			this->label15->TabIndex = 245;
			this->label15->Text = L"Audit Check Status (Open/Closed) ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::AliceBlue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Maroon;
			this->label14->Location = System::Drawing::Point(503, 291);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 15);
			this->label14->TabIndex = 244;
			this->label14->Text = L"Remarks";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::AliceBlue;
			this->label13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Maroon;
			this->label13->Location = System::Drawing::Point(32, 202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(161, 18);
			this->label13->TabIndex = 243;
			this->label13->Text = L"Local Admin Password";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::AliceBlue;
			this->label12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(32, 232);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(150, 18);
			this->label12->TabIndex = 242;
			this->label12->Text = L"Antivirus Update Y/N";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::AliceBlue;
			this->label11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(32, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(216, 18);
			this->label11->TabIndex = 241;
			this->label11->Text = L"Windows Security Update Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::AliceBlue;
			this->label10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(32, 286);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 18);
			this->label10->TabIndex = 240;
			this->label10->Text = L"Admin Access Y/N";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::AliceBlue;
			this->label9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(32, 319);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 18);
			this->label9->TabIndex = 239;
			this->label9->Text = L"USB Access Y/N";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::AliceBlue;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(32, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 18);
			this->label8->TabIndex = 238;
			this->label8->Text = L"Restricted Internet Access Y/N";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::AliceBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(503, 260);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 18);
			this->label7->TabIndex = 237;
			this->label7->Text = L"Issue Resolve Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::AliceBlue;
			this->label6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(32, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 18);
			this->label6->TabIndex = 236;
			this->label6->Text = L"Encryption Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::AliceBlue;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(32, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 18);
			this->label5->TabIndex = 235;
			this->label5->Text = L"System_Sno";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(36, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 234;
			this->label4->Text = L"IP_Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::AliceBlue;
			this->label3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(36, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 233;
			this->label3->Text = L"Hostname";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(955, 574);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->ren_rsi_txt);
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
			this->Controls->Add(this->LOGIN_ID);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form3";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label31_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

	

		
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Update rsys_workstation.workstation set Seat_No='"+this->Seat_no_txt->Text+"',Hostname_FQDN='"+this->Hostname_txt->Text+"',System_S_N='"+this->System_Sno_txt->Text+"',IP_Address='"+this->IP_Address_txt->Text+"',Encryption_Password='"+this->Encryption_Password_txt->Text+"',Local_Admin_Password='"+this->Local_Admin_Password_txt->Text+"',Antivirus_latest_updated_Y_N='"+this->Antivirus_txt->Text+"',Windows_security_patches_Last_Updated_date_12_12_2018='"+this->Windows_Security_txt->Text+"',Admin_access_on_the_machine_Y_N='"+this->Admin_Accesss_txt->Text+"',USB_access_Y_N='"+this->USB_Access_txt->Text+"',Restricted_Internet_access_Y_N='"+this->Internet_Access_txt->Text+"',Printer_installed_Y_N='"+this->Printer_install_txt->Text+"',Printer_installation_access_from_print_server_y_N='"+this->Printer_Installation_Access_txt->Text+"',Unwanted_software_installed_Y_N='"+this->Unwanted_Software_txt->Text+"',OCS_Agent_status_Y_N='"+this->OCS_Agent_txt->Text+"',Issue_reported_on_Date='"+this->Issue_Report_txt->Text+"',If_find_any_discrepancy_Y_N='"+this->Discrepancy_txt->Text+"',Action_taken_to_fix_Y_N_NA='"+this->Action_Taken_txt->Text+"',Issue_resolved_on_Date='"+this->Issue_Resolve_Date_txt->Text+"',Remarks='"+this->Remarks_txt->Text+"',Audit_check_Status_Open_Closed='"+this->Audit_Check_Status_txt->Text+"', REN_RSI='"+this->ren_rsi_txt->Text+"',Wrranty_Status_Y_N='"+this->Warranty_Status_txt->Text+"' where Hostname_FQDN = '"+this->Hostname_txt->Text+"' ;",condDataBase);
	MySqlDataReader^ myReader;
		
				

		try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();

		this->Hide();
		Form7^ f7 = gcnew Form7();			 //opens new form 
		f7->ShowDialog();
		
		while(myReader->Read())
		{
		
		}
	
	    }	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}






private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Update rsys_workstation.workstation set Seat_No='"+this->Seat_no_txt->Text+"',Hostname_FQDN='"+this->Hostname_txt->Text+"',System_S_N='"+this->System_Sno_txt->Text+"',IP_Address='"+this->IP_Address_txt->Text+"',Encryption_Password='"+this->Encryption_Password_txt->Text+"',Local_Admin_Password='"+this->Local_Admin_Password_txt->Text+"',Antivirus_latest_updated_Y_N='"+this->Antivirus_txt->Text+"',Windows_security_patches_Last_Updated_date_12_12_2018='"+this->Windows_Security_txt->Text+"',Admin_access_on_the_machine_Y_N='"+this->Admin_Accesss_txt->Text+"',USB_access_Y_N='"+this->USB_Access_txt->Text+"',Restricted_Internet_access_Y_N='"+this->Internet_Access_txt->Text+"',Printer_installed_Y_N='"+this->Printer_install_txt->Text+"',Printer_installation_access_from_print_server_y_N='"+this->Printer_Installation_Access_txt->Text+"',Unwanted_software_installed_Y_N='"+this->Unwanted_Software_txt->Text+"',OCS_Agent_status_Y_N='"+this->OCS_Agent_txt->Text+"',Issue_reported_on_Date='"+this->Issue_Report_txt->Text+"',If_find_any_discrepancy_Y_N='"+this->Discrepancy_txt->Text+"',Action_taken_to_fix_Y_N_NA='"+this->Action_Taken_txt->Text+"',Issue_resolved_on_Date='"+this->Issue_Resolve_Date_txt->Text+"',Remarks='"+this->Remarks_txt->Text+"',Audit_check_Status_Open_Closed='"+this->Audit_Check_Status_txt->Text+"', REN_RSI='"+this->ren_rsi_txt->Text+"',Wrranty_Status_Y_N='"+this->Warranty_Status_txt->Text+"' where Seat_No = '"+this->Seat_no_txt->Text+"' ;",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();

		this->Hide();
		Form7^ f7 = gcnew Form7();			 //opens new form 
		f7->ShowDialog();

		while(myReader->Read())
		{
		
		}
	
	    }	




	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

 }




private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Update rsys_workstation.workstation set Seat_No='"+this->Seat_no_txt->Text+"',Hostname_FQDN='"+this->Hostname_txt->Text+"',System_S_N='"+this->System_Sno_txt->Text+"',IP_Address='"+this->IP_Address_txt->Text+"',Encryption_Password='"+this->Encryption_Password_txt->Text+"',Local_Admin_Password='"+this->Local_Admin_Password_txt->Text+"',Antivirus_latest_updated_Y_N='"+this->Antivirus_txt->Text+"',Windows_security_patches_Last_Updated_date_12_12_2018='"+this->Windows_Security_txt->Text+"',Admin_access_on_the_machine_Y_N='"+this->Admin_Accesss_txt->Text+"',USB_access_Y_N='"+this->USB_Access_txt->Text+"',Restricted_Internet_access_Y_N='"+this->Internet_Access_txt->Text+"',Printer_installed_Y_N='"+this->Printer_install_txt->Text+"',Printer_installation_access_from_print_server_y_N='"+this->Printer_Installation_Access_txt->Text+"',Unwanted_software_installed_Y_N='"+this->Unwanted_Software_txt->Text+"',OCS_Agent_status_Y_N='"+this->OCS_Agent_txt->Text+"',Issue_reported_on_Date='"+this->Issue_Report_txt->Text+"',If_find_any_discrepancy_Y_N='"+this->Discrepancy_txt->Text+"',Action_taken_to_fix_Y_N_NA='"+this->Action_Taken_txt->Text+"',Issue_resolved_on_Date='"+this->Issue_Resolve_Date_txt->Text+"',Remarks='"+this->Remarks_txt->Text+"',Audit_check_Status_Open_Closed='"+this->Audit_Check_Status_txt->Text+"', REN_RSI='"+this->ren_rsi_txt->Text+"',Wrranty_Status_Y_N='"+this->Warranty_Status_txt->Text+"' where System_S_N='"+this->System_Sno_txt->Text+"' ;",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		this->Hide();
		Form7^ f7 = gcnew Form7();			 //opens new form 
		f7->ShowDialog();

		while(myReader->Read())
		{
		
		}
	
	    }	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

 }





private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Update rsys_workstation.workstation set Seat_No='"+this->Seat_no_txt->Text+"',Hostname_FQDN='"+this->Hostname_txt->Text+"',System_S_N='"+this->System_Sno_txt->Text+"',IP_Address='"+this->IP_Address_txt->Text+"',Encryption_Password='"+this->Encryption_Password_txt->Text+"',Local_Admin_Password='"+this->Local_Admin_Password_txt->Text+"',Antivirus_latest_updated_Y_N='"+this->Antivirus_txt->Text+"',Windows_security_patches_Last_Updated_date_12_12_2018='"+this->Windows_Security_txt->Text+"',Admin_access_on_the_machine_Y_N='"+this->Admin_Accesss_txt->Text+"',USB_access_Y_N='"+this->USB_Access_txt->Text+"',Restricted_Internet_access_Y_N='"+this->Internet_Access_txt->Text+"',Printer_installed_Y_N='"+this->Printer_install_txt->Text+"',Printer_installation_access_from_print_server_y_N='"+this->Printer_Installation_Access_txt->Text+"',Unwanted_software_installed_Y_N='"+this->Unwanted_Software_txt->Text+"',OCS_Agent_status_Y_N='"+this->OCS_Agent_txt->Text+"',Issue_reported_on_Date='"+this->Issue_Report_txt->Text+"',If_find_any_discrepancy_Y_N='"+this->Discrepancy_txt->Text+"',Action_taken_to_fix_Y_N_NA='"+this->Action_Taken_txt->Text+"',Issue_resolved_on_Date='"+this->Issue_Resolve_Date_txt->Text+"',Remarks='"+this->Remarks_txt->Text+"',Audit_check_Status_Open_Closed='"+this->Audit_Check_Status_txt->Text+"', REN_RSI='"+this->ren_rsi_txt->Text+"',Wrranty_Status_Y_N='"+this->Warranty_Status_txt->Text+"' where IP_Address='"+this->IP_Address_txt->Text+"' ;",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();

		this->Hide();
		Form7^ f7 = gcnew Form7();			 //opens new form 
		f7->ShowDialog();

		while(myReader->Read())
		{
		
		}
	
	    }	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Hide();
 }




};
}
