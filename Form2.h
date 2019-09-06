#pragma once

#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
#include "Form6.h"

namespace First_App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
            //FillCombo_IP_ADDRESS();
		//	FillCombo_HOSTNAME();
			//FillCombo_SEAT_NO();
			//FillCombo_SYSTEM_SNO();


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  Seat_no_txt;
	private: System::Windows::Forms::TextBox^  Hostname_txt;
	private: System::Windows::Forms::TextBox^  System_Sno_txt;
	private: System::Windows::Forms::TextBox^  IP_Address_txt;
	private: System::Windows::Forms::TextBox^  Encryption_Password_txt;
	private: System::Windows::Forms::TextBox^  Local_Admin_Password_txt;

	private: System::Windows::Forms::TextBox^  Antivirus_txt;
	private: System::Windows::Forms::TextBox^  Windows_Security_txt;
	private: System::Windows::Forms::TextBox^  Admin_Accesss_txt;
	private: System::Windows::Forms::TextBox^  USB_Access_txt;
	private: System::Windows::Forms::TextBox^  Internet_Access_txt;
	private: System::Windows::Forms::TextBox^  Printer_install_txt;
	private: System::Windows::Forms::TextBox^  Printer_Installation_Access_txt;
	private: System::Windows::Forms::TextBox^  Unwanted_Software_txt;
	private: System::Windows::Forms::TextBox^  OCS_Agent_txt;
	private: System::Windows::Forms::TextBox^  Issue_Report_txt;
	private: System::Windows::Forms::TextBox^  Discrepancy_txt;
	private: System::Windows::Forms::TextBox^  Action_Taken_txt;
	private: System::Windows::Forms::TextBox^  Issue_Resolve_Date_txt;
	private: System::Windows::Forms::TextBox^  Remarks_txt;
	private: System::Windows::Forms::TextBox^  Audit_Check_Status_txt;
	private: System::Windows::Forms::TextBox^  Warranty_Status_txt;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  SAVE;

















	private: System::Windows::Forms::TextBox^  ren_rsi_txt;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Button^  button3;








private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Seat_no_txt = (gcnew System::Windows::Forms::TextBox());
			this->Hostname_txt = (gcnew System::Windows::Forms::TextBox());
			this->System_Sno_txt = (gcnew System::Windows::Forms::TextBox());
			this->IP_Address_txt = (gcnew System::Windows::Forms::TextBox());
			this->Encryption_Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Local_Admin_Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Antivirus_txt = (gcnew System::Windows::Forms::TextBox());
			this->Windows_Security_txt = (gcnew System::Windows::Forms::TextBox());
			this->Admin_Accesss_txt = (gcnew System::Windows::Forms::TextBox());
			this->USB_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->Internet_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->Printer_install_txt = (gcnew System::Windows::Forms::TextBox());
			this->Printer_Installation_Access_txt = (gcnew System::Windows::Forms::TextBox());
			this->Unwanted_Software_txt = (gcnew System::Windows::Forms::TextBox());
			this->OCS_Agent_txt = (gcnew System::Windows::Forms::TextBox());
			this->Issue_Report_txt = (gcnew System::Windows::Forms::TextBox());
			this->Discrepancy_txt = (gcnew System::Windows::Forms::TextBox());
			this->Action_Taken_txt = (gcnew System::Windows::Forms::TextBox());
			this->Issue_Resolve_Date_txt = (gcnew System::Windows::Forms::TextBox());
			this->Remarks_txt = (gcnew System::Windows::Forms::TextBox());
			this->Audit_Check_Status_txt = (gcnew System::Windows::Forms::TextBox());
			this->Warranty_Status_txt = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SAVE = (gcnew System::Windows::Forms::Button());
			this->ren_rsi_txt = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(188, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(605, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INVENTORY DETAILS - WORKSTATIONS";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(36, 74);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Seat _No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(36, 107);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hostname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(36, 174);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"IP_Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(36, 139);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"System_Sno";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(36, 206);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Encryption Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(490, 301);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Issue Resolve Date";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(36, 404);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(219, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Restricted Internet Access Y/N";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(36, 373);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"USB Access Y/N";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(36, 336);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(136, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Admin Access Y/N";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(36, 305);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(222, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Windows Security Update Date";
			this->label11->Click += gcnew System::EventHandler(this, &Form2::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(36, 275);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Antivirus Update Y/N";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Maroon;
			this->label13->Location = System::Drawing::Point(36, 242);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(165, 16);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Local Admin Password";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Maroon;
			this->label14->Location = System::Drawing::Point(490, 332);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Remarks";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Maroon;
			this->label15->Location = System::Drawing::Point(490, 369);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(246, 16);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Audit Check Status (Open/Closed) ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Maroon;
			this->label16->Location = System::Drawing::Point(490, 404);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(147, 16);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Warranty Status Y/N";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Maroon;
			this->label18->Location = System::Drawing::Point(490, 135);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(233, 16);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Unwanted Software Installed Y/N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Maroon;
			this->label19->Location = System::Drawing::Point(490, 101);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(217, 16);
			this->label19->TabIndex = 18;
			this->label19->Text = L"Printer Installation Access Y/N";
			this->label19->Click += gcnew System::EventHandler(this, &Form2::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Maroon;
			this->label20->Location = System::Drawing::Point(490, 171);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(160, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"OCS Agent Status Y/N";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Maroon;
			this->label21->Location = System::Drawing::Point(490, 271);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(129, 16);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Action Taken Y/N";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Maroon;
			this->label22->Location = System::Drawing::Point(490, 236);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(125, 16);
			this->label22->TabIndex = 21;
			this->label22->Text = L"Any Discrepancy";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Maroon;
			this->label23->Location = System::Drawing::Point(490, 203);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(133, 16);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Issue Report Date";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Maroon;
			this->label24->Location = System::Drawing::Point(490, 71);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(146, 16);
			this->label24->TabIndex = 23;
			this->label24->Text = L"Printer installed Y/N";
			// 
			// Seat_no_txt
			// 
			this->Seat_no_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Seat_no_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Seat_no_txt->Location = System::Drawing::Point(268, 77);
			this->Seat_no_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Seat_no_txt->Name = L"Seat_no_txt";
			this->Seat_no_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Seat_no_txt->Size = System::Drawing::Size(188, 22);
			this->Seat_no_txt->TabIndex = 24;
			this->Seat_no_txt->TextChanged += gcnew System::EventHandler(this, &Form2::Seat_no_txt_TextChanged);
			// 
			// Hostname_txt
			// 
			this->Hostname_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Hostname_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Hostname_txt->Location = System::Drawing::Point(268, 107);
			this->Hostname_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Hostname_txt->Name = L"Hostname_txt";
			this->Hostname_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Hostname_txt->Size = System::Drawing::Size(188, 22);
			this->Hostname_txt->TabIndex = 25;
			// 
			// System_Sno_txt
			// 
			this->System_Sno_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->System_Sno_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->System_Sno_txt->Location = System::Drawing::Point(268, 141);
			this->System_Sno_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->System_Sno_txt->Name = L"System_Sno_txt";
			this->System_Sno_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->System_Sno_txt->Size = System::Drawing::Size(188, 22);
			this->System_Sno_txt->TabIndex = 26;
			// 
			// IP_Address_txt
			// 
			this->IP_Address_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->IP_Address_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->IP_Address_txt->Location = System::Drawing::Point(268, 176);
			this->IP_Address_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->IP_Address_txt->Name = L"IP_Address_txt";
			this->IP_Address_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->IP_Address_txt->Size = System::Drawing::Size(188, 22);
			this->IP_Address_txt->TabIndex = 27;
			// 
			// Encryption_Password_txt
			// 
			this->Encryption_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Encryption_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Encryption_Password_txt->Location = System::Drawing::Point(268, 208);
			this->Encryption_Password_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Encryption_Password_txt->Name = L"Encryption_Password_txt";
			this->Encryption_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Encryption_Password_txt->Size = System::Drawing::Size(188, 22);
			this->Encryption_Password_txt->TabIndex = 28;
			// 
			// Local_Admin_Password_txt
			// 
			this->Local_Admin_Password_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Local_Admin_Password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Local_Admin_Password_txt->Location = System::Drawing::Point(268, 243);
			this->Local_Admin_Password_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Local_Admin_Password_txt->Name = L"Local_Admin_Password_txt";
			this->Local_Admin_Password_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Local_Admin_Password_txt->Size = System::Drawing::Size(188, 22);
			this->Local_Admin_Password_txt->TabIndex = 29;
			// 
			// Antivirus_txt
			// 
			this->Antivirus_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Antivirus_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Antivirus_txt->Location = System::Drawing::Point(268, 276);
			this->Antivirus_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Antivirus_txt->Name = L"Antivirus_txt";
			this->Antivirus_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Antivirus_txt->Size = System::Drawing::Size(188, 22);
			this->Antivirus_txt->TabIndex = 30;
			// 
			// Windows_Security_txt
			// 
			this->Windows_Security_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Windows_Security_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Windows_Security_txt->Location = System::Drawing::Point(268, 306);
			this->Windows_Security_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Windows_Security_txt->Name = L"Windows_Security_txt";
			this->Windows_Security_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Windows_Security_txt->Size = System::Drawing::Size(188, 22);
			this->Windows_Security_txt->TabIndex = 31;
			// 
			// Admin_Accesss_txt
			// 
			this->Admin_Accesss_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Admin_Accesss_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Admin_Accesss_txt->Location = System::Drawing::Point(268, 339);
			this->Admin_Accesss_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Admin_Accesss_txt->Name = L"Admin_Accesss_txt";
			this->Admin_Accesss_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Admin_Accesss_txt->Size = System::Drawing::Size(188, 22);
			this->Admin_Accesss_txt->TabIndex = 32;
			// 
			// USB_Access_txt
			// 
			this->USB_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->USB_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->USB_Access_txt->Location = System::Drawing::Point(268, 374);
			this->USB_Access_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->USB_Access_txt->Name = L"USB_Access_txt";
			this->USB_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->USB_Access_txt->Size = System::Drawing::Size(188, 22);
			this->USB_Access_txt->TabIndex = 33;
			// 
			// Internet_Access_txt
			// 
			this->Internet_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Internet_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Internet_Access_txt->Location = System::Drawing::Point(268, 404);
			this->Internet_Access_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Internet_Access_txt->Name = L"Internet_Access_txt";
			this->Internet_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Internet_Access_txt->Size = System::Drawing::Size(188, 22);
			this->Internet_Access_txt->TabIndex = 34;
			this->Internet_Access_txt->TextChanged += gcnew System::EventHandler(this, &Form2::Internet_Access_txt_TextChanged);
			// 
			// Printer_install_txt
			// 
			this->Printer_install_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_install_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_install_txt->Location = System::Drawing::Point(740, 74);
			this->Printer_install_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Printer_install_txt->Name = L"Printer_install_txt";
			this->Printer_install_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_install_txt->Size = System::Drawing::Size(177, 22);
			this->Printer_install_txt->TabIndex = 35;
			// 
			// Printer_Installation_Access_txt
			// 
			this->Printer_Installation_Access_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Printer_Installation_Access_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Printer_Installation_Access_txt->Location = System::Drawing::Point(740, 104);
			this->Printer_Installation_Access_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Printer_Installation_Access_txt->Name = L"Printer_Installation_Access_txt";
			this->Printer_Installation_Access_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Printer_Installation_Access_txt->Size = System::Drawing::Size(177, 22);
			this->Printer_Installation_Access_txt->TabIndex = 36;
			// 
			// Unwanted_Software_txt
			// 
			this->Unwanted_Software_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Unwanted_Software_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Unwanted_Software_txt->Location = System::Drawing::Point(740, 137);
			this->Unwanted_Software_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Unwanted_Software_txt->Name = L"Unwanted_Software_txt";
			this->Unwanted_Software_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Unwanted_Software_txt->Size = System::Drawing::Size(177, 22);
			this->Unwanted_Software_txt->TabIndex = 37;
			// 
			// OCS_Agent_txt
			// 
			this->OCS_Agent_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->OCS_Agent_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->OCS_Agent_txt->Location = System::Drawing::Point(740, 167);
			this->OCS_Agent_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->OCS_Agent_txt->Name = L"OCS_Agent_txt";
			this->OCS_Agent_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OCS_Agent_txt->Size = System::Drawing::Size(177, 22);
			this->OCS_Agent_txt->TabIndex = 38;
			// 
			// Issue_Report_txt
			// 
			this->Issue_Report_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Report_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Report_txt->Location = System::Drawing::Point(740, 202);
			this->Issue_Report_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Issue_Report_txt->Name = L"Issue_Report_txt";
			this->Issue_Report_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Report_txt->Size = System::Drawing::Size(177, 22);
			this->Issue_Report_txt->TabIndex = 39;
			// 
			// Discrepancy_txt
			// 
			this->Discrepancy_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Discrepancy_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Discrepancy_txt->Location = System::Drawing::Point(740, 243);
			this->Discrepancy_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Discrepancy_txt->Name = L"Discrepancy_txt";
			this->Discrepancy_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Discrepancy_txt->Size = System::Drawing::Size(177, 22);
			this->Discrepancy_txt->TabIndex = 40;
			// 
			// Action_Taken_txt
			// 
			this->Action_Taken_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Action_Taken_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Action_Taken_txt->Location = System::Drawing::Point(740, 276);
			this->Action_Taken_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Action_Taken_txt->Name = L"Action_Taken_txt";
			this->Action_Taken_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Action_Taken_txt->Size = System::Drawing::Size(177, 22);
			this->Action_Taken_txt->TabIndex = 41;
			// 
			// Issue_Resolve_Date_txt
			// 
			this->Issue_Resolve_Date_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Issue_Resolve_Date_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Issue_Resolve_Date_txt->Location = System::Drawing::Point(740, 307);
			this->Issue_Resolve_Date_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Issue_Resolve_Date_txt->Name = L"Issue_Resolve_Date_txt";
			this->Issue_Resolve_Date_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Issue_Resolve_Date_txt->Size = System::Drawing::Size(177, 22);
			this->Issue_Resolve_Date_txt->TabIndex = 42;
			// 
			// Remarks_txt
			// 
			this->Remarks_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Remarks_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Remarks_txt->Location = System::Drawing::Point(740, 339);
			this->Remarks_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Remarks_txt->Name = L"Remarks_txt";
			this->Remarks_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Remarks_txt->Size = System::Drawing::Size(177, 22);
			this->Remarks_txt->TabIndex = 43;
			// 
			// Audit_Check_Status_txt
			// 
			this->Audit_Check_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Audit_Check_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Audit_Check_Status_txt->Location = System::Drawing::Point(740, 371);
			this->Audit_Check_Status_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Audit_Check_Status_txt->Name = L"Audit_Check_Status_txt";
			this->Audit_Check_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Audit_Check_Status_txt->Size = System::Drawing::Size(177, 22);
			this->Audit_Check_Status_txt->TabIndex = 44;
			// 
			// Warranty_Status_txt
			// 
			this->Warranty_Status_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Warranty_Status_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Warranty_Status_txt->Location = System::Drawing::Point(740, 404);
			this->Warranty_Status_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Warranty_Status_txt->Name = L"Warranty_Status_txt";
			this->Warranty_Status_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Warranty_Status_txt->Size = System::Drawing::Size(177, 22);
			this->Warranty_Status_txt->TabIndex = 45;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label17->Font = (gcnew System::Drawing::Font(L"Rockwell", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label17->Location = System::Drawing::Point(262, 478);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(368, 36);
			this->label17->TabIndex = 46;
			this->label17->Text = L"ACCESSING DATABASE";
			// 
			// SAVE
			// 
			this->SAVE->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->SAVE->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SAVE->Location = System::Drawing::Point(763, 438);
			this->SAVE->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->SAVE->Name = L"SAVE";
			this->SAVE->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SAVE->Size = System::Drawing::Size(142, 37);
			this->SAVE->TabIndex = 47;
			this->SAVE->Text = L"SAVE";
			this->SAVE->UseVisualStyleBackColor = false;
			this->SAVE->Click += gcnew System::EventHandler(this, &Form2::SAVE_Click);
			// 
			// ren_rsi_txt
			// 
			this->ren_rsi_txt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ren_rsi_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ren_rsi_txt->Location = System::Drawing::Point(268, 438);
			this->ren_rsi_txt->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->ren_rsi_txt->Name = L"ren_rsi_txt";
			this->ren_rsi_txt->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ren_rsi_txt->Size = System::Drawing::Size(188, 22);
			this->ren_rsi_txt->TabIndex = 63;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Maroon;
			this->label31->Location = System::Drawing::Point(31, 438);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(70, 16);
			this->label31->TabIndex = 62;
			this->label31->Text = L"REN-RSI";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(809, 557);
			this->button3->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 50);
			this->button3->TabIndex = 64;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button10->Location = System::Drawing::Point(246, 531);
			this->button10->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(117, 35);
			this->button10->TabIndex = 73;
			this->button10->Text = L"UPDATE";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form2::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button11->Location = System::Drawing::Point(246, 573);
			this->button11->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(117, 35);
			this->button11->TabIndex = 74;
			this->button11->Text = L"DELETE";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button12->Location = System::Drawing::Point(646, 531);
			this->button12->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(117, 35);
			this->button12->TabIndex = 75;
			this->button12->Text = L"SEARCH";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form2::button12_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::DimGray;
			this->label25->Location = System::Drawing::Point(44, 542);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(169, 15);
			this->label25->TabIndex = 76;
			this->label25->Text = L"Click to Update Workstation";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::DimGray;
			this->label26->Location = System::Drawing::Point(44, 584);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(163, 15);
			this->label26->TabIndex = 77;
			this->label26->Text = L"Click to delete Workstation";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::DimGray;
			this->label27->Location = System::Drawing::Point(441, 542);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(168, 15);
			this->label27->TabIndex = 78;
			this->label27->Text = L"Click to search Workstation";
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(0, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(100, 23);
			this->label28->TabIndex = 1;
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(0, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(100, 23);
			this->label29->TabIndex = 0;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(940, 621);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ren_rsi_txt);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->SAVE);
			this->Controls->Add(this->label17);
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
			this->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Seat_no_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Internet_Access_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


//addition of database sets  

private: System::Void SAVE_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring=L"datasource=localhost;port=3306;username=root;password=root123";
	MySqlConnection^ condDataBase= gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into rsys_workstation.workstation values('"+this->Seat_no_txt->Text+"','"+this->Hostname_txt->Text+"','"+this->System_Sno_txt->Text+"','"+this->IP_Address_txt->Text+"','"+this->Encryption_Password_txt->Text+"','"+this->Local_Admin_Password_txt->Text+"','"+this->Antivirus_txt->Text+"','"+this->Windows_Security_txt->Text+"','"+this->Admin_Accesss_txt->Text+"','"+this->USB_Access_txt->Text+"','"+this->Internet_Access_txt->Text+"','"+this->Printer_install_txt->Text+"','"+this->Printer_Installation_Access_txt->Text+"','"+this->Unwanted_Software_txt->Text+"','"+this->OCS_Agent_txt->Text+"','"+this->Issue_Report_txt->Text+"','"+this->Discrepancy_txt->Text+"','"+this->Action_Taken_txt->Text+"','"+this->Issue_Resolve_Date_txt->Text+"','"+this->Remarks_txt->Text+"','"+this->Audit_Check_Status_txt->Text+"','"+ren_rsi_txt->Text+"','"+this->Warranty_Status_txt->Text+"');",condDataBase);
	
	MySqlDataReader^ myReader;

	try{
		condDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();




		//this->Hide();
		Form6^ f6 = gcnew Form6();			 //opens new form 
		f6->ShowDialog();

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
			 Application::Exit();
		 }


private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

		//this->Hide();
		Form3^ f3 = gcnew Form3();			 //opens new form 
		f3->ShowDialog();
			 }



private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

		//this->Hide();
		Form4^ f4 = gcnew Form4();			 //opens new form 
		f4->ShowDialog();

		 }



private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
 
		//this->Hide();
		Form5^ f5 = gcnew Form5();			 //opens new form 
		f5->ShowDialog();
		}


};
}
