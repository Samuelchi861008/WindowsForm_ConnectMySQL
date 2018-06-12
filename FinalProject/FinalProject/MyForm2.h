#ifndef MYFORM2_H
#define MYFORM2_H
#include "MyForm1.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm7.h"
#include <Windows.h>
#include <mysql.h>
#include <string>
#include <iostream>
#include "funtion.h"
using namespace std;

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm2 的摘要
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
		
			funtion_DB MyDB;
			string k1 = "examination";
			string k2 = "Enumber";
			string k3 = "NULL";
			string k4 = "NULL";
			string Catch;
			int i = 1;
			if (MyDB.selectSQL_Max(k1, k2, k3, k4) == "")
				Catch = "1";
			else
			{
				cout << MyDB.getRow() << endl;
				int i2 = atoi(MyDB.selectSQL_Max(k1, k2, k3, k4).c_str());
				while (i <= i2)
				{
					string Counter = to_string(i);
					this->comboBox1->Items->Add(i);
					i++;
				}
			}
			//下拉選單數字設定
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(309, 268);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(142, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Question number :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(444, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(121, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(348, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Add the Question";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(121, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(348, 57);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Rewrite the Question";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(121, 483);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(348, 57);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Delete the Question";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(485, 12);
			this->label2->TabIndex = 6;
			this->label2->Text = L"---------------------------------------------------------------------------------"
				L"---------------------------------------";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(121, 317);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(348, 57);
			this->button5->TabIndex = 7;
			this->button5->Text = L"View the Question";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->ControlBox = false;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Java SE7 OCA Simulation Test";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
		int En = atoi(in);
		funtion_DB MyDB;
		string k1 = "examination";
		string k2 = "Equestion";
		string k3 = "Enumber";
		MyDB.setCounter(En);
		MyDB.setText(MyDB.selectSQL_Counter(k1, k2, k3));
		FinalProject::MyForm4^sp = gcnew FinalProject::MyForm4;
		sp->ShowDialog();;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
		int En = atoi(in);
		funtion_DB MyDB;
		MyDB.setCounter(En);
		FinalProject::MyForm5^sp = gcnew FinalProject::MyForm5;
		sp->ShowDialog();;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	FinalProject::MyForm7^sp = gcnew FinalProject::MyForm7;
	sp->ShowDialog();;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace Runtime::InteropServices;
	const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
	funtion_DB MyDB;
	string k1 = "examination";
	string k2 = "Enumber";
	string k3 = in;
	MyDB.deleteSQL(k1, k2, in);
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

#endif
