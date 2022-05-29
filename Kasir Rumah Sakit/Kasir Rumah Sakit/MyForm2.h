#pragma once
#include <iostream>

namespace KasirRumahSakit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		int DrJoko = 200000;
		int DrsSekar = 190000;
		int DrHeri = 250000;
		int BPJSPribadi = 0;
		int AsuransiAIA = 100000;
		int TanpaAsuransi = 85000;
		
	public:
		Form^ obj;
		   Form^ obj1;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ obj1)
		{
			obj1 = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(String^ data)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ComboBox^ cbNoStruck;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog12;

	private: System::Windows::Forms::ComboBox^ cbResep;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:











	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ComboBox^ cbNamaDokter;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RichTextBox^ rtReceipt;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReceipt;
	private: System::Windows::Forms::Button^ btnTotal;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbNamaPasien;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lblTotal;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ lblResep;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lblNamaDokter;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cbNoStruck = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbResep = (gcnew System::Windows::Forms::ComboBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lblResep = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblNamaDokter = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbNamaPasien = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbNamaDokter = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog12 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(312, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(783, 116);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SISTEM KASIR";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1364, 135);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->cbNoStruck);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->cbResep);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->cbNamaPasien);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->cbNamaDokter);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(13, 162);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(831, 459);
			this->panel2->TabIndex = 2;
			// 
			// cbNoStruck
			// 
			this->cbNoStruck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNoStruck->FormattingEnabled = true;
			this->cbNoStruck->Location = System::Drawing::Point(228, 300);
			this->cbNoStruck->Name = L"cbNoStruck";
			this->cbNoStruck->Size = System::Drawing::Size(306, 37);
			this->cbNoStruck->TabIndex = 16;
			this->cbNoStruck->Text = L"Pilih Nomer";
			this->cbNoStruck->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 29);
			this->label5->TabIndex = 15;
			this->label5->Text = L" Nomer Struck";
			// 
			// cbResep
			// 
			this->cbResep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbResep->FormattingEnabled = true;
			this->cbResep->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pilih Asuransi", L"BPJS Pribadi", L"Tanpa Asuransi" });
			this->cbResep->Location = System::Drawing::Point(228, 227);
			this->cbResep->Name = L"cbResep";
			this->cbResep->Size = System::Drawing::Size(306, 37);
			this->cbResep->TabIndex = 14;
			this->cbResep->Text = L"Pilih Asuransi";
			this->cbResep->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::cbResep_SelectedIndexChanged);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->lblTotal);
			this->panel7->Location = System::Drawing::Point(228, 381);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(534, 37);
			this->panel7->TabIndex = 13;
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->ForeColor = System::Drawing::Color::Black;
			this->lblTotal->Location = System::Drawing::Point(3, 1);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(81, 29);
			this->lblTotal->TabIndex = 6;
			this->lblTotal->Text = L"Rp.00";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(42, 389);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 29);
			this->label10->TabIndex = 12;
			this->label10->Text = L"TOTAL";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(631, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 25);
			this->label9->TabIndex = 11;
			this->label9->Text = L"HARGA";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(307, 33);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 25);
			this->label8->TabIndex = 10;
			this->label8->Text = L"KETERANGAN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(91, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 25);
			this->label7->TabIndex = 9;
			this->label7->Text = L"MENU";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->lblResep);
			this->panel6->Location = System::Drawing::Point(584, 227);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(178, 37);
			this->panel6->TabIndex = 8;
			// 
			// lblResep
			// 
			this->lblResep->AutoSize = true;
			this->lblResep->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblResep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResep->ForeColor = System::Drawing::Color::Black;
			this->lblResep->Location = System::Drawing::Point(3, 1);
			this->lblResep->Name = L"lblResep";
			this->lblResep->Size = System::Drawing::Size(81, 29);
			this->lblResep->TabIndex = 6;
			this->lblResep->Text = L"Rp.00";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lblNamaDokter);
			this->panel5->Location = System::Drawing::Point(584, 66);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(178, 37);
			this->panel5->TabIndex = 7;
			// 
			// lblNamaDokter
			// 
			this->lblNamaDokter->AutoSize = true;
			this->lblNamaDokter->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblNamaDokter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNamaDokter->ForeColor = System::Drawing::Color::Black;
			this->lblNamaDokter->Location = System::Drawing::Point(3, 1);
			this->lblNamaDokter->Name = L"lblNamaDokter";
			this->lblNamaDokter->Size = System::Drawing::Size(81, 29);
			this->lblNamaDokter->TabIndex = 6;
			this->lblNamaDokter->Text = L"Rp.00";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Asuransi";
			// 
			// cbNamaPasien
			// 
			this->cbNamaPasien->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNamaPasien->FormattingEnabled = true;
			this->cbNamaPasien->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Pilih Nama", L"Zidane", L"Fathan", L"Alex",
					L"Justin "
			});
			this->cbNamaPasien->Location = System::Drawing::Point(228, 142);
			this->cbNamaPasien->Name = L"cbNamaPasien";
			this->cbNamaPasien->Size = System::Drawing::Size(306, 37);
			this->cbNamaPasien->TabIndex = 3;
			this->cbNamaPasien->Text = L"Pilih Nama";
			this->cbNamaPasien->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::cbNamaPasien_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nama Pasien";
			// 
			// cbNamaDokter
			// 
			this->cbNamaDokter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbNamaDokter->FormattingEnabled = true;
			this->cbNamaDokter->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Pilih Dokter", L"Dr Joko", L"Drs Sekar", L"Dr Heri" });
			this->cbNamaDokter->Location = System::Drawing::Point(228, 66);
			this->cbNamaDokter->Name = L"cbNamaDokter";
			this->cbNamaDokter->Size = System::Drawing::Size(306, 37);
			this->cbNamaDokter->TabIndex = 1;
			this->cbNamaDokter->Text = L"Pilih Dokter";
			this->cbNamaDokter->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::cbNamaDokter_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nama Dokter";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->rtReceipt);
			this->panel3->Location = System::Drawing::Point(850, 162);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(526, 459);
			this->panel3->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(237, 33);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 25);
			this->label12->TabIndex = 12;
			this->label12->Text = L"RECEIPT";
			// 
			// rtReceipt
			// 
			this->rtReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtReceipt->Location = System::Drawing::Point(14, 66);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(497, 378);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Controls->Add(this->btnExit);
			this->panel4->Controls->Add(this->btnReset);
			this->panel4->Controls->Add(this->btnPrint);
			this->panel4->Controls->Add(this->btnReceipt);
			this->panel4->Controls->Add(this->btnTotal);
			this->panel4->Location = System::Drawing::Point(12, 641);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1364, 135);
			this->panel4->TabIndex = 4;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1126, 27);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(209, 82);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm2::btnExit_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(863, 27);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(209, 82);
			this->btnReset->TabIndex = 3;
			this->btnReset->Text = L"RESET";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm2::btnReset_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(588, 27);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(209, 82);
			this->btnPrint->TabIndex = 2;
			this->btnPrint->Text = L"PRINT";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm2::btnPrint_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->Location = System::Drawing::Point(313, 27);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(209, 82);
			this->btnReceipt->TabIndex = 1;
			this->btnReceipt->Text = L"RECEIPT";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm2::btnReceipt_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::DarkKhaki;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->Location = System::Drawing::Point(40, 27);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(209, 82);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"TOTAL";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm2::btnTotal_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm2::printDocument1_PrintPage);
			// 
			// printPreviewDialog12
			// 
			this->printPreviewDialog12->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog12->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog12->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog12->Document = this->printDocument1;
			this->printPreviewDialog12->Enabled = true;
			this->printPreviewDialog12->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog12.Icon")));
			this->printPreviewDialog12->Name = L"printPreviewDialog1";
			this->printPreviewDialog12->Visible = false;
			this->printPreviewDialog12->Load += gcnew System::EventHandler(this, &MyForm2::printPreviewDialog1_Load_1);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkKhaki;
			this->ClientSize = System::Drawing::Size(1388, 788);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormKasir";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 1; i < 21; i++)
		{
			cbNoStruck->Items->Add(i);
		}

	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult iExit;
			iExit = MessageBox::Show("Confirm if you want to exit", "Cashier Manage System", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			cbNamaDokter->Text = "Pilih Dokter";
			cbNamaPasien->Text = "Pilih Nama";
			cbResep->Text = "Pilih Asuransi";
			//cbNoStruck->Text = "Pilih Nomer";
			//textBoxNoStruck->Text = "";

			rtReceipt->Clear();
			lblNamaDokter->Text = "Rp.00";
			lblResep->Text = "Rp.00";
			lblTotal->Text = "Rp.00";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void cbNamaDokter_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbNamaDokter->Text == "Dr Joko")
		{
			double i = Convert::ToDouble(cbNamaDokter->Text == "Dr Joko");
			lblNamaDokter->Text = String::Format("{0:c2}", i = DrJoko);

		}
		else if (cbNamaDokter->Text == "Drs Sekar")
		{

			double i = Convert::ToDouble(cbNamaDokter->Text == "Drs Sekar");
			lblNamaDokter->Text = String::Format("{0:c2}", i = DrsSekar);

		}
		else if (cbNamaDokter->Text == "Dr Heri")
		{

			double i = Convert::ToDouble(cbNamaDokter->Text == "Dr Heri");
			lblNamaDokter->Text = String::Format("{0:c2}", i = DrHeri);

		}

	}
	private: System::Void cbNamaPasien_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void cbResep_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbResep->Text == "BPJS Pribadi")
		{
			double i = Convert::ToDouble(cbResep->Text == "BPJS Pribadi");
			lblNamaDokter->Text = String::Format("{0:c2}", i = 0);
			lblResep->Text = String::Format("{0:c2}", i = 0);

		}


		else if (cbResep->Text == "Tanpa Asuransi")
		{
			double i = Convert::ToDouble(cbResep->Text == "Tanpa Asuransi");
			lblResep->Text = String::Format("{0:c2}", i = 85000);

		}

	}

	private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
		double q[5], p[4], T[2];

		//q[0] = DrJoko;
		//q[1] = Convert::ToDouble(cbNamaDokter->Text == "Drs Sekar");
		//q[2] = Convert::ToDouble(cbNamaDokter->Text == "Dr Heri");
		//q[3] = Convert::ToDouble(lblNamaDokter->Text); 

		//p[0] = Convert::ToDouble(cbResep->Text == "BPJS Pribadi");
		//p[1] = TanpaAsuransi;
		//p[2] = Convert::ToDouble(lblResep->Text);

		//T[0] = q[3] + p[2];
		//lblTotal->Text = String::Format("{0:c2}", p[5]);

		q[0] = DrJoko;
		q[1] = DrsSekar;
		q[2] = DrHeri;
		q[3] = 0;

		p[0] = BPJSPribadi;
		p[1] = TanpaAsuransi;
		p[2] = 0;

		if (cbNamaDokter->Text == "Dr Joko")
		{
			q[3] = q[0];
		}
		else if (cbNamaDokter->Text == "Drs Sekar")
		{
			q[3] = q[1];
		}
		else if (cbNamaDokter->Text == "Dr Heri")
		{
			q[3] = q[2];
		}
		else if (cbNamaDokter->Text == "Dr Heri")
		{
			q[3] = q[2];
		}
		if (cbResep->Text == "BPJS Pribadi")
		{
			p[2] = p[0];
		}
		else if (cbResep->Text == "Tanpa Asuransi")
		{
			p[2] = p[1];
		}
		T[0] = q[3] + p[2];
		if (cbResep->Text == "BPJS Pribadi") {
			T[0] = 0;

		}
		lblTotal->Text = String::Format("{0:c2}", T[0]);

	}
	private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) {

		rtReceipt->Clear();
		rtReceipt->AppendText(label5->Text + cbNoStruck->Text +"\n" + "\n");
		rtReceipt->AppendText("\n");
		rtReceipt->AppendText(label7->Text + "\t" + "\t" + label8->Text + "\t" + "\t" + label9->Text + "\n" + "\n");
		rtReceipt->AppendText(label3->Text + "\t" + cbNamaPasien->Text + "\t" + "\t" + "\t" + "-" + "\n" + "\n");
		rtReceipt->AppendText(label2->Text + "\t" + cbNamaDokter->Text + "\t" + "\t" + "\t" + lblNamaDokter->Text + "\n" + "\n");
		rtReceipt->AppendText(label4->Text + "\t" + "\t" + cbResep->Text + "\t" + "\t" + lblResep->Text + "\n" + "\n");


		rtReceipt->AppendText(label10->Text + "\t" + "\t" + "\t" + "\t" + "\t" + "\t" + lblTotal->Text + "\n" + "\n");

	}
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		printPreviewDialog12->ShowDialog(this);
	}
	private: System::Void printPreviewDialog1_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

		System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 16, FontStyle::Regular);

		e->Graphics->DrawString(rtReceipt->Text, fntString, Brushes::Black, 120, 120);
	}

	private: System::Void cbNoStruck_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//for (int i = 1; i < 21; i++)
		//{
		//	cbNoStruck->Items->Add(i);
		//}
	

	}
//private: System::Void textBoxNoStruck_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//String^ nostruck = "";
	//textBoxNoStruck->Text == nostruck;
//}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
