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
	/// grade_reportSet 的摘要
	/// </summary>
	public ref class grade_reportSet : public System::Windows::Forms::Form
	{
	public:
		grade_reportSet(void)
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
		~grade_reportSet()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;

	protected:














	protected:

































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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(255, 218);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 23);
			this->comboBox2->TabIndex = 74;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &grade_reportSet::comboBox2_SelectedIndexChanged_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(152, 268);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 20);
			this->label3->TabIndex = 73;
			this->label3->Text = L"social_security_number :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(256, 162);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(195, 25);
			this->textBox3->TabIndex = 72;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &grade_reportSet::textBox3_TextChanged_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(152, 167);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 20);
			this->label13->TabIndex = 71;
			this->label13->Text = L"Ename :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(319, 110);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 20);
			this->label12->TabIndex = 70;
			this->label12->Text = L"EX : A";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(256, 105);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(27, 25);
			this->maskedTextBox2->TabIndex = 69;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &grade_reportSet::maskedTextBox2_MaskInputRejected_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(152, 217);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 68;
			this->label7->Text = L"name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(152, 110);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 20);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Elevel :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(497, 406);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 68);
			this->button2->TabIndex = 66;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &grade_reportSet::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(232, 406);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 68);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &grade_reportSet::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(344, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 64;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &grade_reportSet::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(152, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 63;
			this->label1->Text = L"numeric_grade :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(433, 263);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(160, 25);
			this->textBox2->TabIndex = 75;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &grade_reportSet::textBox2_TextChanged_1);
			// 
			// grade_reportSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(833, 536);
			this->ControlBox = false;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"grade_reportSet";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"grade_reportSet";
			this->Load += gcnew System::EventHandler(this, &grade_reportSet::grade_reportSet_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void grade_reportSet_Load(System::Object^  sender, System::EventArgs^  e) {
			using namespace Runtime::InteropServices;
			funtion_DB MyDB;
			string k1 = "Examinee";
			string k2 = "number";
			string k3 = "NULL";
			int i = 1;
			while (true)
			{
				if (MyDB.selectSQL("Examinee", "name", "number", to_string(i)) == "")
					break;
				else
				{
	
					String^ str = gcnew String(MyDB.selectSQL("Examinee", "name", "number", to_string(i)).c_str());
		
					this->comboBox2->Items->Add(str);
					
					i++;
				}
			}
			
			
	  
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	using namespace Runtime::InteropServices;
	funtion_DB MyDB;
	string k1 = "Examinee";
	string k2 = "number";
	string k3 = "NULL";
	const char* name = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox2->Text)).ToPointer();
	string lG;
	if (MyDB.selectSQL(MyDB.getText(), "name", "name", MyDB.selectSQL(k1, "name", "name", name)) == "")
	{

		using namespace Runtime::InteropServices;
		const char* MG = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
		int s = atoi(MG);
		switch (s / 10)
		{
		case 10:
			lG = "A+";
			break;
		case 9:
			lG = "A";
			break;
		case 8:
			lG = "B";
			break;
		case 7:
			lG = "C";
			break;
		case 6:
			lG = "D";
			break;
		default:
			lG = "F";
			break;
		}
		k1 = "grade_report";
		const char* Elevel = (const char*)(Marshal::StringToHGlobalAnsi(this->maskedTextBox2->Text)).ToPointer();
		const char* Ename = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox3->Text)).ToPointer();
		const char* Ssn = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox2->Text)).ToPointer();
		if (MyDB.insertSQL(k1, lG, MG, Elevel, Ename, name, Ssn, "NULL", "NULL", "NULL", "NULL") == false)
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
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox2_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	using namespace Runtime::InteropServices;
	funtion_DB MyDB;
	const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox2->Text)).ToPointer();
	String^ str = gcnew String(MyDB.selectSQL("examinee", "social_security_number", "name", in).c_str());
	this->textBox2->Text = str;
}

private: System::Void textBox2_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
