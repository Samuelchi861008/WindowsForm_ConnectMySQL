#pragma once
#include "funtion.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// grade_reportView 的摘要
	/// </summary>
	public ref class grade_reportView : public System::Windows::Forms::Form
	{
	public:
		grade_reportView(void)
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
		~grade_reportView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(127, 286);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 20);
			this->label3->TabIndex = 73;
			this->label3->Text = L"social_security_number :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 180);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(195, 25);
			this->textBox3->TabIndex = 72;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &grade_reportView::textBox3_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(127, 185);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 20);
			this->label13->TabIndex = 71;
			this->label13->Text = L"Ename :";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(231, 122);
			this->maskedTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->ReadOnly = true;
			this->maskedTextBox2->Size = System::Drawing::Size(27, 25);
			this->maskedTextBox2->TabIndex = 69;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &grade_reportView::maskedTextBox2_MaskInputRejected);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(127, 235);
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
			this->label6->Location = System::Drawing::Point(127, 128);
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
			this->button2->Location = System::Drawing::Point(307, 425);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 68);
			this->button2->TabIndex = 66;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &grade_reportView::button2_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(319, 80);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 64;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &grade_reportView::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(127, 80);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 63;
			this->label1->Text = L"numeric_grade :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(319, 28);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(33, 25);
			this->textBox2->TabIndex = 77;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &grade_reportView::textBox2_TextChanged_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(127, 28);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 20);
			this->label2->TabIndex = 76;
			this->label2->Text = L"letter_grade :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 236);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(195, 25);
			this->textBox4->TabIndex = 78;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &grade_reportView::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(408, 288);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(195, 25);
			this->textBox5->TabIndex = 79;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &grade_reportView::textBox5_TextChanged);
			// 
			// grade_reportView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(835, 532);
			this->ControlBox = false;
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"grade_reportView";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"grade_reportView";
			this->Load += gcnew System::EventHandler(this, &grade_reportView::grade_reportView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void grade_reportView_Load(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "Examinee";
		string k2 = "number";
		string k3 = "NULL";
		string k4 = to_string(MyDB.getCounter());
		string k5 = "letter_grade";
		string k6;
		if (MyDB.selectSQL(MyDB.getText(), "name", "name", MyDB.selectSQL(k1, "name", k2, k4)) != "")
		{

			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->textBox2->Text = gcnew String(k6.c_str());
			k5 = "numeric_grade";
			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->textBox1->Text = gcnew String(k6.c_str());
			k5 = "Elevel";
			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->maskedTextBox2->Text = gcnew String(k6.c_str());
			k5 = "Ename";
			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->textBox3->Text = gcnew String(k6.c_str());
			k5 = "name";
			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->textBox4->Text = gcnew String(k6.c_str());
			k5 = "social_security_number";
			k6 = MyDB.selectSQL(MyDB.getText(), k5, "name", MyDB.selectSQL(k1, "name", k2, k4));
			this->textBox5->Text = gcnew String(k6.c_str());
			
		}
		/*using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "grade_report";
		string k2 = "Rphone";
		string k3 = "Rnumber";
		string k4 = to_string(MyDB.getCounter());
		using namespace Runtime::InteropServices;
		this->textBox2->Text = gcnew String(k4.c_str());
		this->textBox1->Text = gcnew String(MyDB.getText().c_str());
		maskedTextBox2(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "Rcity";
		this->textBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "Raddress";
		this->maskedTextBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());*/
		

		
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
