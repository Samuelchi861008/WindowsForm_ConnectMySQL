#pragma once
#include "funtion.h"
#include "SaveError.h"
#include "MyForm3.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// grade_reportRe 的摘要
	/// </summary>
	public ref class grade_reportRe : public System::Windows::Forms::Form
	{
	public:
		grade_reportRe(void)
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
		~grade_reportRe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox3;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;


	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox2;




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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 142);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(195, 25);
			this->textBox3->TabIndex = 57;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &grade_reportRe::textBox3_TextChanged_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(95, 147);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 20);
			this->label13->TabIndex = 56;
			this->label13->Text = L"Ename :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(262, 90);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 20);
			this->label12->TabIndex = 55;
			this->label12->Text = L"EX : A";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(199, 85);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(27, 25);
			this->maskedTextBox2->TabIndex = 52;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &grade_reportRe::maskedTextBox2_MaskInputRejected_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(95, 197);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 51;
			this->label7->Text = L"name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(95, 90);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 20);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Elevel :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(440, 386);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 68);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &grade_reportRe::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(175, 386);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 68);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &grade_reportRe::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(287, 42);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 47;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &grade_reportRe::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(95, 42);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 46;
			this->label1->Text = L"numeric_grade :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(95, 248);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 20);
			this->label3->TabIndex = 58;
			this->label3->Text = L"social_security_number :";
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(198, 198);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 23);
			this->comboBox2->TabIndex = 61;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &grade_reportRe::comboBox2_SelectedIndexChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(389, 248);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 25);
			this->textBox2->TabIndex = 62;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &grade_reportRe::textBox2_TextChanged_1);
			// 
			// grade_reportRe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(834, 772);
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
			this->Name = L"grade_reportRe";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"grade_reportRe";
			this->Load += gcnew System::EventHandler(this, &grade_reportRe::grade_reportRe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void grade_reportRe_Load(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "Examinee";
		string k2 = "number";
		string k3 = "NULL";
		string k4 = "NULL";
		string k5 = MyDB.selectSQL(k1, "name", k2, to_string(MyDB.getCounter()));
		int i = 1;
		while (i == MyDB.getCounter())
		{
			if (MyDB.selectSQL("grade_report", "name", "name", k5 )== "")
				break;
			else
			{

				String^ str = gcnew String(MyDB.selectSQL("Examinee", "name", "number", to_string(MyDB.getCounter())).c_str());

				this->comboBox2->Items->Add(str);
				i = MyDB.getCounter() + 1;
			}
		}

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

	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "Examinee";
		string k2 = "number";
		string k3 = "NULL";
		string k4 = to_string(MyDB.getCounter());
		string lG ;
		if (MyDB.selectSQL(MyDB.getText(), "name", "name", MyDB.selectSQL(k1, "name", k2, k4)) != "")
		{
			
			k4 = MyDB.selectSQL(MyDB.getText(), "name", "name", MyDB.selectSQL(k1, "name", k2, k4));
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
			k2 = "letter_grade";
			k3 = "name";
			if (MyDB.updateSQL_NotCounter(k1, k2, lG, k3, k4) == false)
			{
				FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
				sp2->ShowDialog();
			}
			else
			{
				k2 = "numeric_grade";
				if (MyDB.updateSQL_NotCounter(k1, k2, MG, k3, k4) == false)
				{
					FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
					sp2->ShowDialog();
				}
				else
				{
					const char* Elevel = (const char*)(Marshal::StringToHGlobalAnsi(this->maskedTextBox2->Text)).ToPointer();
					k2 = "Elevel";
					if (MyDB.updateSQL_NotCounter(k1, k2, Elevel, k3, k4) == false)
					{
						FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
						sp2->ShowDialog();
					}
					else
					{
						const char* Ename = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox3->Text)).ToPointer();
						k2 = "Ename";
						if (MyDB.updateSQL_NotCounter(k1, k2, Ename, k3, k4) == false)
						{
							FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
							sp2->ShowDialog();
						}
						else
						{
							const char* name = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox2->Text)).ToPointer();
							k2 = "name";
							if (MyDB.updateSQL_NotCounter(k1, k2, name, k3, k4) == false)
							{
								FinalProject::SaveError^sp2 = gcnew FinalProject::SaveError;
								sp2->ShowDialog();
							}
							else
							{
								const char* Ssn = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox2->Text)).ToPointer();
								k2 = "social_security_number";
								if (MyDB.updateSQL_NotCounter(k1, k2, Ssn, k3, k4) == false)
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
		
	
		this->Close();





	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void maskedTextBox2_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void maskedTextBox3_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
	private: System::Void maskedTextBox1_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
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
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
	}

