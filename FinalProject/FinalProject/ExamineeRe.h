#pragma once
#include "funtion.h"
#include "MyForm3.h"
#include "SaveError.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ExamineeRe 的摘要
	/// </summary>
	public ref class ExamineeRe : public System::Windows::Forms::Form
	{
	public:
		ExamineeRe(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~ExamineeRe()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;




	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;





	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  comboBox3;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(96, 31);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"number :";
			this->label2->Click += gcnew System::EventHandler(this, &ExamineeRe::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(96, 78);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 20;
			this->label1->Text = L"name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 79);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 21;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ExamineeRe::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(492, 649);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 68);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ExamineeRe::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(96, 117);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"social_security_number :";
			this->label3->Click += gcnew System::EventHandler(this, &ExamineeRe::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(96, 163);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"birthdate :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(96, 209);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 20);
			this->label5->TabIndex = 26;
			this->label5->Text = L"sex :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(96, 253);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 20);
			this->label6->TabIndex = 27;
			this->label6->Text = L"phone :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(96, 366);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 28;
			this->label7->Text = L"address :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(377, 118);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 25);
			this->textBox2->TabIndex = 29;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ExamineeRe::textBox2_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(232, 164);
			this->maskedTextBox1->Mask = L"0000-00-00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(200, 25);
			this->maskedTextBox1->TabIndex = 34;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ExamineeRe::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(209, 254);
			this->maskedTextBox2->Mask = L"0000000000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(223, 25);
			this->maskedTextBox2->TabIndex = 35;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ExamineeRe::maskedTextBox2_MaskInputRejected);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(100, 416);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(575, 25);
			this->maskedTextBox3->TabIndex = 36;
			this->maskedTextBox3->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ExamineeRe::maskedTextBox3_MaskInputRejected);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(96, 317);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 20);
			this->label13->TabIndex = 42;
			this->label13->Text = L"City :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(209, 317);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(195, 25);
			this->textBox3->TabIndex = 43;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ExamineeRe::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(100, 649);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 68);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ExamineeRe::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(232, 32);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(160, 25);
			this->textBox4->TabIndex = 44;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &ExamineeRe::textBox4_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(209, 209);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 23);
			this->comboBox1->TabIndex = 47;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ExamineeRe::comboBox1_SelectedIndexChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(421, 79);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 20);
			this->label8->TabIndex = 48;
			this->label8->Text = L"EX : ZHOU BO XUN";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(596, 118);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(174, 20);
			this->label9->TabIndex = 49;
			this->label9->Text = L"EX : A123456789";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(455, 164);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(174, 20);
			this->label10->TabIndex = 50;
			this->label10->Text = L"EX : 1999-11-11";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(455, 259);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(174, 20);
			this->label11->TabIndex = 51;
			this->label11->Text = L"EX : 0987654321";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(96, 471);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(438, 20);
			this->label12->TabIndex = 52;
			this->label12->Text = L"EX : 9F, No.77, Dahu Rd, Xiangshan Dist";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point(96, 524);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(119, 20);
			this->label14->TabIndex = 53;
			this->label14->Text = L"zip code :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(237, 519);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(195, 25);
			this->textBox6->TabIndex = 54;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &ExamineeRe::textBox6_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label15->Location = System::Drawing::Point(455, 524);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(119, 20);
			this->label15->TabIndex = 55;
			this->label15->Text = L"EX : 11650";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label16->Location = System::Drawing::Point(96, 588);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(174, 20);
			this->label16->TabIndex = 56;
			this->label16->Text = L"registry  name:";
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(278, 585);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(220, 23);
			this->comboBox3->TabIndex = 57;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &ExamineeRe::comboBox3_SelectedIndexChanged);
			// 
			// ExamineeRe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(834, 772);
			this->ControlBox = false;
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ExamineeRe";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ExamineeRe";
			this->Load += gcnew System::EventHandler(this, &ExamineeRe::ExamineeRe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ExamineeRe_Load(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "examinee";
		string k2 = "name"; 
		string k3 = "number";
		string k4 = to_string(MyDB.getCounter());
		using namespace Runtime::InteropServices;
		this->textBox4->Text = gcnew String(k4.c_str());
		this->textBox1->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "social_security_number";
		this->textBox2->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "birthdate";
		this->maskedTextBox1->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "sex";
		this->comboBox1->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "phone";
		this->maskedTextBox2->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "city";
		this->textBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "address";
		this->maskedTextBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "zip_code";
		this->textBox6->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "Rname";
		this->comboBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());


		
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}

private: System::Void maskedTextBox3_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "examinee";
		string k2 = "name";
		string k3 = "number";
		string k4 = to_string(MyDB.getCounter());

		const char* name = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
		if (MyDB.updateSQL(k1, k2, name, k3) == false)
		{
			FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
			sp2->ShowDialog();
		}
		else
		{
			const char* Ssn = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox2->Text)).ToPointer();
			k2 = "social_security_number";
			if (MyDB.updateSQL(k1, k2, Ssn, k3) == false)
			{
				FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
				sp2->ShowDialog();
			}
			else
			{
				const char* Bd = (const char*)(Marshal::StringToHGlobalAnsi(this->maskedTextBox1->Text)).ToPointer();
				k2 = "birthdate";
				if (MyDB.updateSQL(k1, k2, Bd, k3) == false)
				{
					FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
					sp2->ShowDialog();
				}
				else
				{
					const char* sex = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
					k2 = "sex";
					if (MyDB.updateSQL(k1, k2, sex, k3) == false)
					{
						FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
						sp2->ShowDialog();
					}
					else
					{
						const char* phone = (const char*)(Marshal::StringToHGlobalAnsi(this->maskedTextBox2->Text)).ToPointer();
						k2 = "phone";
						if (MyDB.updateSQL(k1, k2, phone, k3) == false)
						{
							FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
							sp2->ShowDialog();
						}
						else
						{
							const char* city = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox3->Text)).ToPointer();
							k2 = "city";
							if (MyDB.updateSQL(k1, k2, city, k3) == false)
							{
								FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
								sp2->ShowDialog();
							}
							else
							{
								const char* address = (const char*)(Marshal::StringToHGlobalAnsi(this->maskedTextBox3->Text)).ToPointer();
								k2 = "address";
								if (MyDB.updateSQL(k1, k2, address, k3) == false)
								{
									FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
									sp2->ShowDialog();
								}
								else
								{
									const char* Zc = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox6->Text)).ToPointer();
									k2 = "zip_code";
									if (MyDB.updateSQL(k1, k2, Zc, k3) == false)
									{
										FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
										sp2->ShowDialog();
									}
									else
									{
										const char* Rn = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox3->Text)).ToPointer();
										k2 = "Rname";
										if (MyDB.updateSQL(k1, k2, Rn, k3) == false)
										{
											FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
											sp2->ShowDialog();
										}
										else
										{
											FinalProject::MyForm3^sp2 = gcnew FinalProject::MyForm3;
											sp2->ShowDialog();
										}
									}
									
								}
								
							}
							
						}
						
					}
					
					
					
					
					
				}
			}
		}
		
		
		
		
		this->Close();
	

		
		
	
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
