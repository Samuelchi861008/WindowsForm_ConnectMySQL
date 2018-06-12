#pragma once
#include "funtion.h"
#include "MyForm1.h"


namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// UserSet 的摘要
	/// </summary>
	public ref class UserSet : public System::Windows::Forms::Form
	{
	public:
		UserSet(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			funtion_DB MyDB;
			string k1 = "examinee";
			string k2 = "number";
			string k3 = "NULL";
			string k4 = "NULL";
			string Catch;
			string A;
			int i = 1; 
			if (MyDB.selectSQL_Max(k1, k2, k3, k4) == "")
				Catch = "1";
			else
			{
				cout << MyDB.getRow() << endl;
				int i2 = atoi(MyDB.selectSQL_Max(k1, k2, k3, k4).c_str());
				while (i <= i2)
				{
					MyDB.setCounter(i);
					if (MyDB.selectSQL_Counter(k1, k2, k2) == "" || MyDB.selectSQL("grade_report", "name", "name", MyDB.selectSQL(k1, "name", k2, to_string(i))) != "")
					{
						i++;
					}
					else
					{
						A = MyDB.selectSQL_Counter(k1, k2, k2);
						cout << A << endl;
						String^ A2 = gcnew String(A.c_str());
						this->comboBox1->Items->Add(A2);
						cout << "ADD" << endl;
						i++;
					}
					
				}
				
			}
			
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~UserSet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(92, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 54);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Start !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserSet::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(24, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 23;
			this->label1->Text = L"UserNumber :";
			this->label1->Click += gcnew System::EventHandler(this, &UserSet::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(24, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"UserName :";
			this->label2->Click += gcnew System::EventHandler(this, &UserSet::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(178, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 30;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserSet::comboBox1_SelectedIndexChanged_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 124);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 31;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UserSet::textBox1_TextChanged_1);
			// 
			// UserSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 310);
			this->ControlBox = false;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserSet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserSet";
			this->Load += gcnew System::EventHandler(this, &UserSet::UserSet_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	funtion_DB MyDB;
	int En = 1;
	string k1 = "examination";
	string k2 = "Equestion";
	string k3 = "Enumber";
	MyDB.setCounter(En);
	MyDB.setText(MyDB.selectSQL_Counter(k1, k2, k3));
	using namespace Runtime::InteropServices;
	const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
	const char* in2 = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
	int n = atoi(in);
	MyDB.setEnumber(n);
	MyDB.setName(in2);
	FinalProject::MyForm1^sp = gcnew FinalProject::MyForm1;
	sp->ShowDialog();;
	this->Close();
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
private: System::Void UserSet_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	funtion_DB MyDB;
	using namespace Runtime::InteropServices;
	const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
	int n = atoi(in);
	MyDB.setCounter(n);
	String^ A = gcnew String(MyDB.selectSQL_Counter("examinee", "name", "number").c_str());
	this->textBox1->Text = A;
}
};
}
