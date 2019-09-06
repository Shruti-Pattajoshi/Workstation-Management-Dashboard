#pragma once

#include"Form8.h"

namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;


	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label17;
	protected: 
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  USER;
	private: System::Windows::Forms::Label^  label32;

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
			this->label17 = (gcnew System::Windows::Forms::Label());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->USER = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(27, 449);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(279, 25);
			this->label17->TabIndex = 170;
			this->label17->Text = L"Choose you desired Option:";
			// 
			// ren_rsi_txt
			// 
			this->ren_rsi_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ren_rsi_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ren_rsi_txt->Location = System::Drawing::Point(291, 417);
			this->ren_rsi_txt->Name = L"ren_rsi_txt";
			this->ren_rsi_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ren_rsi_txt->Size = System::Drawing::Size(184, 21);
			this->ren_rsi_txt->TabIndex = 169;
			this->ren_rsi_txt->TextChanged += gcnew System::EventHandler(this, &Form4::ren_rsi_txt_TextChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label31->Location = System::Drawing::Point(-98, 518);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 19);
			this->label31->TabIndex = 168;
			this->label31->Text = L"REN-RSI";
			// 
			// Warranty_Status_txt
			// 
			this->Warranty_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Warranty_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Warranty_Status_txt->Location = System::Drawing::Point(766, 388);
			this->Warranty_Status_txt->Name = L"Warranty_Status_txt";
			this->Warranty_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Warranty_Status_txt->Size = System::Drawing::Size(186, 21);
			this->Warranty_Status_txt->TabIndex = 167;
			this->Warranty_Status_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Warranty_Status_txt_TextChanged);
			// 
			// Audit_Check_Status_txt
			// 
			this->Audit_Check_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Audit_Check_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Audit_Check_Status_txt->Location = System::Drawing::Point(766, 356);
			this->Audit_Check_Status_txt->Name = L"Audit_Check_Status_txt";
			this->Audit_Check_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Audit_Check_Status_txt->Size = System::Drawing::Size(186, 21);
			this->Audit_Check_Status_txt->TabIndex = 166;
			this->Audit_Check_Status_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Audit_Check_Status_txt_TextChanged);
			// 
			// Remarks_txt
			// 
			this->Remarks_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Remarks_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Remarks_txt->Location = System::Drawing::Point(766, 322);
			this->Remarks_txt->Name = L"Remarks_txt";
			this->Remarks_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Remarks_txt->Size = System::Drawing::Size(186, 21);
			this->Remarks_txt->TabIndex = 165;
			this->Remarks_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Remarks_txt_TextChanged);
			// 
			// Issue_Resolve_Date_txt
			// 
			this->Issue_Resolve_Date_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Resolve_Date_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Resolve_Date_txt->Location = System::Drawing::Point(766, 292);
			this->Issue_Resolve_Date_txt->Name = L"Issue_Resolve_Date_txt";
			this->Issue_Resolve_Date_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Resolve_Date_txt->Size = System::Drawing::Size(186, 21);
			this->Issue_Resolve_Date_txt->TabIndex = 164;
			this->Issue_Resolve_Date_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Issue_Resolve_Date_txt_TextChanged);
			// 
			// Action_Taken_txt
			// 
			this->Action_Taken_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Action_Taken_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Action_Taken_txt->Location = System::Drawing::Point(766, 258);
			this->Action_Taken_txt->Name = L"Action_Taken_txt";
			this->Action_Taken_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Action_Taken_txt->Size = System::Drawing::Size(186, 21);
			this->Action_Taken_txt->TabIndex = 163;
			this->Action_Taken_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Action_Taken_txt_TextChanged);
			// 
			// Discrepancy_txt
			// 
			this->Discrepancy_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Discrepancy_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Discrepancy_txt->Location = System::Drawing::Point(766, 227);
			this->Discrepancy_txt->Name = L"Discrepancy_txt";
			this->Discrepancy_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Discrepancy_txt->Size = System::Drawing::Size(186, 21);
			this->Discrepancy_txt->TabIndex = 162;
			this->Discrepancy_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Discrepancy_txt_TextChanged);
			// 
			// Issue_Report_txt
			// 
			this->Issue_Report_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Report_txt->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Issue_Report_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Report_txt->Location = System::Drawing::Point(766, 187);
			this->Issue_Report_txt->Name = L"Issue_Report_txt";
			this->Issue_Report_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Report_txt->Size = System::Drawing::Size(186, 25);
			this->Issue_Report_txt->TabIndex = 161;
			this->Issue_Report_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Issue_Report_txt_TextChanged);
			// 
			// OCS_Agent_txt
			// 
			this->OCS_Agent_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->OCS_Agent_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->OCS_Agent_txt->Location = System::Drawing::Point(766, 152);
			this->OCS_Agent_txt->Name = L"OCS_Agent_txt";
			this->OCS_Agent_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OCS_Agent_txt->Size = System::Drawing::Size(186, 21);
			this->OCS_Agent_txt->TabIndex = 160;
			this->OCS_Agent_txt->TextChanged += gcnew System::EventHandler(this, &Form4::OCS_Agent_txt_TextChanged);
			// 
			// Unwanted_Software_txt
			// 
			this->Unwanted_Software_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Unwanted_Software_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Unwanted_Software_txt->Location = System::Drawing::Point(766, 122);
			this->Unwanted_Software_txt->Name = L"Unwanted_Software_txt";
			this->Unwanted_Software_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Unwanted_Software_txt->Size = System::Drawing::Size(186, 21);
			this->Unwanted_Software_txt->TabIndex = 159;
			this->Unwanted_Software_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Unwanted_Software_txt_TextChanged);
			// 
			// Printer_Installation_Access_txt
			// 
			this->Printer_Installation_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_Installation_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_Installation_Access_txt->Location = System::Drawing::Point(766, 88);
			this->Printer_Installation_Access_txt->Name = L"Printer_Installation_Access_txt";
			this->Printer_Installation_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_Installation_Access_txt->Size = System::Drawing::Size(186, 21);
			this->Printer_Installation_Access_txt->TabIndex = 158;
			this->Printer_Installation_Access_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Printer_Installation_Access_txt_TextChanged);
			// 
			// Printer_install_txt
			// 
			this->Printer_install_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_install_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_install_txt->Location = System::Drawing::Point(766, 58);
			this->Printer_install_txt->Name = L"Printer_install_txt";
			this->Printer_install_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_install_txt->Size = System::Drawing::Size(186, 21);
			this->Printer_install_txt->TabIndex = 157;
			this->Printer_install_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Printer_install_txt_TextChanged);
			// 
			// Internet_Access_txt
			// 
			this->Internet_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Internet_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Internet_Access_txt->Location = System::Drawing::Point(291, 383);
			this->Internet_Access_txt->Name = L"Internet_Access_txt";
			this->Internet_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Internet_Access_txt->Size = System::Drawing::Size(184, 21);
			this->Internet_Access_txt->TabIndex = 156;
			this->Internet_Access_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Internet_Access_txt_TextChanged);
			// 
			// USB_Access_txt
			// 
			this->USB_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->USB_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->USB_Access_txt->Location = System::Drawing::Point(291, 352);
			this->USB_Access_txt->Name = L"USB_Access_txt";
			this->USB_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->USB_Access_txt->Size = System::Drawing::Size(184, 21);
			this->USB_Access_txt->TabIndex = 155;
			this->USB_Access_txt->TextChanged += gcnew System::EventHandler(this, &Form4::USB_Access_txt_TextChanged);
			// 
			// Admin_Accesss_txt
			// 
			this->Admin_Accesss_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Admin_Accesss_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Admin_Accesss_txt->Location = System::Drawing::Point(291, 315);
			this->Admin_Accesss_txt->Name = L"Admin_Accesss_txt";
			this->Admin_Accesss_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Admin_Accesss_txt->Size = System::Drawing::Size(184, 21);
			this->Admin_Accesss_txt->TabIndex = 154;
			this->Admin_Accesss_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Admin_Accesss_txt_TextChanged);
			// 
			// Windows_Security_txt
			// 
			this->Windows_Security_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Windows_Security_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Windows_Security_txt->Location = System::Drawing::Point(291, 284);
			this->Windows_Security_txt->Name = L"Windows_Security_txt";
			this->Windows_Security_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Windows_Security_txt->Size = System::Drawing::Size(184, 21);
			this->Windows_Security_txt->TabIndex = 153;
			this->Windows_Security_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Windows_Security_txt_TextChanged);
			// 
			// Antivirus_txt
			// 
			this->Antivirus_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Antivirus_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Antivirus_txt->Location = System::Drawing::Point(291, 254);
			this->Antivirus_txt->Name = L"Antivirus_txt";
			this->Antivirus_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Antivirus_txt->Size = System::Drawing::Size(184, 21);
			this->Antivirus_txt->TabIndex = 152;
			this->Antivirus_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Antivirus_txt_TextChanged);
			// 
			// Local_Admin_Password_txt
			// 
			this->Local_Admin_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Local_Admin_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Local_Admin_Password_txt->Location = System::Drawing::Point(291, 222);
			this->Local_Admin_Password_txt->Name = L"Local_Admin_Password_txt";
			this->Local_Admin_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Local_Admin_Password_txt->Size = System::Drawing::Size(184, 21);
			this->Local_Admin_Password_txt->TabIndex = 151;
			this->Local_Admin_Password_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Local_Admin_Password_txt_TextChanged);
			// 
			// Encryption_Password_txt
			// 
			this->Encryption_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Encryption_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Encryption_Password_txt->Location = System::Drawing::Point(291, 187);
			this->Encryption_Password_txt->Name = L"Encryption_Password_txt";
			this->Encryption_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Encryption_Password_txt->Size = System::Drawing::Size(184, 21);
			this->Encryption_Password_txt->TabIndex = 150;
			this->Encryption_Password_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Encryption_Password_txt_TextChanged);
			// 
			// IP_Address_txt
			// 
			this->IP_Address_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->IP_Address_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->IP_Address_txt->Location = System::Drawing::Point(291, 154);
			this->IP_Address_txt->Name = L"IP_Address_txt";
			this->IP_Address_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->IP_Address_txt->Size = System::Drawing::Size(184, 21);
			this->IP_Address_txt->TabIndex = 149;
			this->IP_Address_txt->TextChanged += gcnew System::EventHandler(this, &Form4::IP_Address_txt_TextChanged);
			// 
			// System_Sno_txt
			// 
			this->System_Sno_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->System_Sno_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->System_Sno_txt->Location = System::Drawing::Point(291, 119);
			this->System_Sno_txt->Name = L"System_Sno_txt";
			this->System_Sno_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->System_Sno_txt->Size = System::Drawing::Size(184, 21);
			this->System_Sno_txt->TabIndex = 148;
			this->System_Sno_txt->TextChanged += gcnew System::EventHandler(this, &Form4::System_Sno_txt_TextChanged);
			// 
			// Hostname_txt
			// 
			this->Hostname_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Hostname_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Hostname_txt->Location = System::Drawing::Point(291, 84);
			this->Hostname_txt->Name = L"Hostname_txt";
			this->Hostname_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Hostname_txt->Size = System::Drawing::Size(184, 21);
			this->Hostname_txt->TabIndex = 147;
			this->Hostname_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Hostname_txt_TextChanged);
			// 
			// Seat_no_txt
			// 
			this->Seat_no_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Seat_no_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Seat_no_txt->Location = System::Drawing::Point(291, 54);
			this->Seat_no_txt->Name = L"Seat_no_txt";
			this->Seat_no_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Seat_no_txt->Size = System::Drawing::Size(184, 21);
			this->Seat_no_txt->TabIndex = 146;
			this->Seat_no_txt->TextChanged += gcnew System::EventHandler(this, &Form4::Seat_no_txt_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AliceBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::Maroon;
			this->label24->Location = System::Drawing::Point(508, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(145, 18);
			this->label24->TabIndex = 145;
			this->label24->Text = L"Printer installed Y/N";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::AliceBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::Maroon;
			this->label23->Location = System::Drawing::Point(508, 186);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 18);
			this->label23->TabIndex = 144;
			this->label23->Text = L"Issue Report Date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::AliceBlue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::Maroon;
			this->label22->Location = System::Drawing::Point(508, 220);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(122, 18);
			this->label22->TabIndex = 143;
			this->label22->Text = L"Any Discrepancy";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Azure;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Maroon;
			this->label21->Location = System::Drawing::Point(508, 255);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(127, 18);
			this->label21->TabIndex = 142;
			this->label21->Text = L"Action Taken Y/N";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::AliceBlue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::Maroon;
			this->label20->Location = System::Drawing::Point(508, 154);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(162, 18);
			this->label20->TabIndex = 141;
			this->label20->Text = L"OCS Agent Status Y/N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::AliceBlue;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::Maroon;
			this->label19->Location = System::Drawing::Point(508, 86);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(217, 18);
			this->label19->TabIndex = 140;
			this->label19->Text = L"Printer Installation Access Y/N";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::AliceBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::Maroon;
			this->label18->Location = System::Drawing::Point(508, 120);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(229, 18);
			this->label18->TabIndex = 139;
			this->label18->Text = L"Unwanted Software Installed Y/N";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::AliceBlue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::Maroon;
			this->label16->Location = System::Drawing::Point(508, 387);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(147, 18);
			this->label16->TabIndex = 138;
			this->label16->Text = L"Warranty Status Y/N";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::AliceBlue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Maroon;
			this->label15->Location = System::Drawing::Point(508, 354);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(245, 18);
			this->label15->TabIndex = 137;
			this->label15->Text = L"Audit Check Status (Open/Closed) ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::AliceBlue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Maroon;
			this->label14->Location = System::Drawing::Point(508, 320);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 15);
			this->label14->TabIndex = 136;
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
			this->label13->Location = System::Drawing::Point(32, 222);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(161, 18);
			this->label13->TabIndex = 135;
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
			this->label12->Location = System::Drawing::Point(32, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(150, 18);
			this->label12->TabIndex = 134;
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
			this->label11->Location = System::Drawing::Point(32, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(216, 18);
			this->label11->TabIndex = 133;
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
			this->label10->Location = System::Drawing::Point(32, 317);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 18);
			this->label10->TabIndex = 132;
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
			this->label9->Location = System::Drawing::Point(32, 354);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 18);
			this->label9->TabIndex = 131;
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
			this->label8->Location = System::Drawing::Point(32, 386);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 18);
			this->label8->TabIndex = 130;
			this->label8->Text = L"Restricted Internet Access Y/N";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::AliceBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(508, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 18);
			this->label7->TabIndex = 129;
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
			this->label6->Location = System::Drawing::Point(32, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 18);
			this->label6->TabIndex = 128;
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
			this->label5->Location = System::Drawing::Point(32, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 18);
			this->label5->TabIndex = 127;
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
			this->label4->Location = System::Drawing::Point(38, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 126;
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
			this->label3->Location = System::Drawing::Point(38, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 125;
			this->label3->Text = L"Hostname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(-98, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 19);
			this->label2->TabIndex = 124;
			this->label2->Text = L"Seat _No";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(327, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 36);
			this->label1->TabIndex = 123;
			this->label1->Text = L"DELETE WORKSTATION";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::AliceBlue;
			this->label25->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::Color::Maroon;
			this->label25->Location = System::Drawing::Point(38, 52);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 18);
			this->label25->TabIndex = 171;
			this->label25->Text = L"Seat _No";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::AliceBlue;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::Color::Maroon;
			this->label26->Location = System::Drawing::Point(30, 417);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(67, 18);
			this->label26->TabIndex = 172;
			this->label26->Text = L"REN-RSI";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Menu;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Navy;
			this->button6->Location = System::Drawing::Point(750, 521);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(202, 27);
			this->button6->TabIndex = 176;
			this->button6->Text = L"DELETE (USING IP_ADDRESS) ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form4::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Menu;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(294, 528);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(215, 28);
			this->button5->TabIndex = 175;
			this->button5->Text = L"DELETE (USING SYSTEM_SNO) ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form4::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Menu;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(294, 494);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(215, 29);
			this->button4->TabIndex = 174;
			this->button4->Text = L"DELETE (USING HOSTNAME) ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Menu;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(750, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 28);
			this->button2->TabIndex = 173;
			this->button2->Text = L"DELETE (USING SEAT_NO) ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::AliceBlue;
			this->label29->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Gray;
			this->label29->Location = System::Drawing::Point(32, 527);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(111, 15);
			this->label29->TabIndex = 178;
			this->label29->Text = L"By System_Sno";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::AliceBlue;
			this->label27->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Gray;
			this->label27->Location = System::Drawing::Point(32, 494);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(94, 15);
			this->label27->TabIndex = 177;
			this->label27->Text = L"By Hostname";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::AliceBlue;
			this->label28->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Gray;
			this->label28->Location = System::Drawing::Point(574, 527);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(104, 15);
			this->label28->TabIndex = 180;
			this->label28->Text = L"By IP_Address";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::AliceBlue;
			this->label30->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Gray;
			this->label30->Location = System::Drawing::Point(574, 494);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(84, 15);
			this->label30->TabIndex = 179;
			this->label30->Text = L"By Seat_No";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(820, 563);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 40);
			this->button3->TabIndex = 230;
			this->button3->Text = L"BACK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form4::button3_Click);
			// 
			// USER
			// 
			this->USER->Location = System::Drawing::Point(0, 0);
			this->USER->Name = L"USER";
			this->USER->Size = System::Drawing::Size(114, 23);
			this->USER->TabIndex = 0;
			// 
			// label32
			// 
			this->label32->Location = System::Drawing::Point(0, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(114, 23);
			this->label32->TabIndex = 1;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(969, 621);
			this->Controls->Add(this->USER);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label17);
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
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Name = L"Form4";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Delete from rsys_workstation.workstation where Hostname_FQDN ='"+this->Hostname_txt->Text+"';",condDataBase);

	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		
		this->Hide();
		Form8^ f8 = gcnew Form8();			 //opens new form 
		f8->ShowDialog();

		while(myReader->Read())
		{
		
		}
	
	}	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}




private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Delete from rsys_workstation.workstation where Seat_No ='"+this->Seat_no_txt->Text+"';",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();

		this->Hide();
		Form8^ f8 = gcnew Form8();			 //opens new form 
		f8->ShowDialog();


		while(myReader->Read())
		{
		
		}
	
	}	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

 }





private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Delete from rsys_workstation.workstation where System_S_N ='"+this->System_Sno_txt->Text+"';",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();

		this->Hide();
		Form8^ f8 = gcnew Form8();			 //opens new form 
		f8->ShowDialog();

		while(myReader->Read())
		{
		
		}
	
	}	
	catch(Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}



private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("Delete from rsys_workstation.workstation where IP_Address ='"+this->IP_Address_txt->Text+"';",condDataBase);
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		

		this->Hide();
		Form8^ f8 = gcnew Form8();			 //opens new form 
		f8->ShowDialog();




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
private: System::Void Hostname_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void System_Sno_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void IP_Address_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Encryption_Password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Local_Admin_Password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Seat_no_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Antivirus_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Issue_Report_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Warranty_Status_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Printer_Installation_Access_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Discrepancy_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Unwanted_Software_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Printer_install_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Internet_Access_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Audit_Check_Status_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Remarks_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ren_rsi_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Issue_Resolve_Date_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void USB_Access_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Action_Taken_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void OCS_Agent_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Windows_Security_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Admin_Accesss_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
