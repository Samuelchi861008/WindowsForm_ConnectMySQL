#ifndef MYFORM1_H
#define MYFORM1_H

#include "MyForm3.h"
#include "MyForm6.h"
#include "grade_reportView.h"
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
	/// MyForm1 的摘要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

	private:
		
		/// <summary>
		/// 設計工具所需的變數。
		int counter = 1;
		/// </summary>
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(21, 55);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(745, 312);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(107, 401);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(40, 21);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"A";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(107, 474);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 21);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"B";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->Location = System::Drawing::Point(107, 550);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(40, 21);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"C";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->Location = System::Drawing::Point(107, 622);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(40, 21);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"D";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(648, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 39);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(16, 8);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"End";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(779, 701);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Java SE7 OCA Simulation Test";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		funtion_DB MyDB;

		this->textBox1->Text = gcnew String(MyDB.getText().c_str());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		this->Close();
		int s = 0;
		string l;
		int sc = 100 / atoi(MyDB.selectSQL_Max("examination", "Enumber", "NULL", "NULL").c_str());
		string K2 = to_string(MyDB.getEnumber());
		for (int i = 1; i < (counter - 1); i++)
		{
			MyDB.setCounter(i);
			string K = "number = " + K2 + " AND Enumber ";
			string CA = MyDB.selectSQL_Counter("examination", "CorrectANS", "Enumber");
			string EA = MyDB.selectSQL_Counter("examineeans", "ExamineeANS", K);
			if (EA == CA)
				s += sc;
		}
		cout << endl << endl;
		cout << "sc:" << sc;
		cout << "s:" << s;
		switch (s / 10)
		{
		case 10:
			l = "A+";
			break;
		case 9:
			l = "A";
			break;
		case 8:
			l = "B";
			break;
		case 7:
			l = "C";
			break;
		case 6:
			l = "D";
			break;
		default:
			l = "F";
			break;
		}
		string Ssn = MyDB.selectSQL("Examinee", "social_security_number", "name", MyDB.getName());
		MyDB.insertSQL("grade_report", l, to_string(s), "A", "Oracle Java SE7", MyDB.getName(), Ssn, "NULL", "NULL", "NULL", "NULL");
		if (MyDB.selectSQL("grade_report", "name", "name", MyDB.getName()) != "")
		{
			int n = atoi(MyDB.selectSQL("Examinee", "number", "name", MyDB.selectSQL("grade_report", "name", "name", MyDB.getName())).c_str());
			MyDB.setCounter(n);
			MyDB.setText("grade_report");
			FinalProject::grade_reportView^sp = gcnew FinalProject::grade_reportView;
			sp->ShowDialog();
		}
		Environment::Exit(Environment::ExitCode);
		InitializeComponent();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
			using namespace Runtime::InteropServices;	
			funtion_DB MyDB;
			int s = 0;
			string l;
			string k1 = "examination";
			string k2 = "Equestion";
			string k3 = "Enumber";
		
			if (atoi(MyDB.selectSQL_Max("examination", "Enumber", "NULL", "NULL").c_str())+1 == counter)
			{ 
				this->Close();
				int sc = 100/atoi(MyDB.selectSQL_Max("examination", "Enumber", "NULL", "NULL").c_str());
				string K2 = to_string(MyDB.getEnumber());
				for (int i = 1; i < (counter - 1); i++)
				{
					MyDB.setCounter(i);
					string K = "number = " +K2 + " AND Enumber ";
					string CA=MyDB.selectSQL_Counter("examination", "CorrectANS", "Enumber");
					string EA = MyDB.selectSQL_Counter("examineeans", "ExamineeANS", K);
					if (EA == CA)
						s += sc;
				}
				cout << endl << endl;
				cout << "sc:" << sc;
				cout << "s:" << s;
				switch (s/10)
				{
					case 10:
						l = "A+";
						break;
					case 9:
						l = "A";
						break;
					case 8:
						l = "B";
						break;
					case 7:
						l = "C";
						break;
					case 6:
						l = "D";
						break;
					default:
						l = "F";
						break;
				}
				string Ssn=MyDB.selectSQL("Examinee", "social_security_number", "name", MyDB.getName());
				MyDB.insertSQL("grade_report",l,to_string(s),"A","Oracle Java SE7",MyDB.getName(),Ssn,"NULL", "NULL", "NULL", "NULL");
				if (MyDB.selectSQL("grade_report", "name", "name", MyDB.getName()) != "")
				{
					int n = atoi(MyDB.selectSQL("Examinee", "number", "name", MyDB.selectSQL("grade_report", "name", "name", MyDB.getName())).c_str());
					MyDB.setCounter(n);
					MyDB.setText("grade_report");
					FinalProject::grade_reportView^sp = gcnew FinalProject::grade_reportView;
					sp->ShowDialog();
				}
				Environment::Exit(Environment::ExitCode);
				InitializeComponent();
			}
			else
			{
			MyDB.setCounter(counter);
			this->textBox1->Text = gcnew String(MyDB.selectSQL_Counter(k1,k2,k3).c_str());
			counter++;
			k1 = "examineeans";
			k2 = to_string(MyDB.getEnumber());
	
			if (this->checkBox1->Checked == true)
			{
				k3 = "A";
			}
			else if (this->checkBox2->Checked == true)
			{
				k3 = "B";
			}
			else if (this->checkBox3->Checked == true)
			{
				k3 = "C";
			}
			else if (this->checkBox4->Checked == true)
			{
				k3 = "D";
			}
			const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->checkBox1->Text)).ToPointer();
			MyDB.insertSQL_Counter(k1,k3,k2);
			}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox1->Checked == true)
		{
			this->checkBox2->Enabled = false;
			this->checkBox3->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox2->Enabled = true;
			this->checkBox3->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox2->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox3->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox3->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox3->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox2->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox2->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox4->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox2->Enabled = false;
			this->checkBox3->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox2->Enabled = true;
			this->checkBox3->Enabled = true;
		}
	}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}

#endif