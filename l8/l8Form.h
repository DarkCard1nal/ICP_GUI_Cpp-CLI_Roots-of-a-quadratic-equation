#pragma once
#include <cmath>
#include <exception>

namespace l8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для l8Form
	/// </summary>
	public ref class l8Form : public System::Windows::Forms::Form
	{
	public:
		l8Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~l8Form()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button ^button1;
    protected:
    private: System::Windows::Forms::Label ^label1;
	private: System::Windows::Forms::TextBox ^textBox1;
	private: System::Windows::Forms::TextBox ^textBox2;
	private: System::Windows::Forms::Label ^label2;
	private: System::Windows::Forms::TextBox ^textBox3;
	private: System::Windows::Forms::Label ^label3;
	private: System::Windows::Forms::GroupBox ^groupBox1;

	private: System::Windows::Forms::Label ^label4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 154);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Розв\'язати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &l8Form::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(162, 60);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x² +";
			this->label1->Click += gcnew System::EventHandler(this, &l8Form::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 32);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(216, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 32);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(323, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"x +";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(370, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 32);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(477, 60);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"= 0";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(216, 114);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(301, 113);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Розв\'язок";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 40);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 8;
			this->label4->Click += gcnew System::EventHandler(this, &l8Form::label4_Click);
			// 
			// l8Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 257);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"l8Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"l8Form";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void label1_Click(System::Object ^sender, System::EventArgs ^e)
    {
    }
	private: System::Void label4_Click(System::Object ^sender, System::EventArgs ^e)
	{
	}
private: System::Void button1_Click(System::Object ^sender, System::EventArgs ^e)
{
	double a = 1, b, c, d = -1, parsedValue;
	if (Double::TryParse(textBox1->Text, parsedValue))
	{
		a = 2 * parsedValue;
		
		if (Double::TryParse(textBox2->Text, parsedValue))
		{
			b = parsedValue;

			if (Double::TryParse(textBox3->Text, parsedValue))
			{
				c = parsedValue;
				d = b * b - 2 * a * c;
			}
		}
	}

	if (a == 0)
	{
		label4->Text = L"x = " + Convert::ToString(-c / b);
	}
	else if (d > 0)
	{
		label4->Text = L"x₁ = " + Convert::ToString((-b + sqrt(d)) / a) + L"\nx₂ = " + Convert::ToString((-b - sqrt(d)) / a);
	}
	else if (d == 0)
	{
		label4->Text = L"x = " + Convert::ToString(-b / a);
	}
	else
	{
		label4->Text = L"Корені не знайдено!";
	}
}
};
}
