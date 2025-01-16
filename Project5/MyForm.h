#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ urok1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maxToolStripMenuItem;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->urok1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Visible = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripDropDownButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(381, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->urok1ToolStripMenuItem,
					this->maxToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(44, 22);
			this->toolStripDropDownButton1->Text = L"Sum";
			// 
			// urok1ToolStripMenuItem
			// 
			this->urok1ToolStripMenuItem->Name = L"urok1ToolStripMenuItem";
			this->urok1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->urok1ToolStripMenuItem->Text = L"Sum";
			this->urok1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::urok1ToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(43, 22);
			this->toolStripDropDownButton2->Text = L"Testi";
			// 
			// toolStripDropDownButton3
			// 
			this->toolStripDropDownButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton3.Image")));
			this->toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton3->Name = L"toolStripDropDownButton3";
			this->toolStripDropDownButton3->Size = System::Drawing::Size(45, 22);
			this->toolStripDropDownButton3->Text = L"Help";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(106, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 50);
			this->button1->TabIndex = 4;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(77, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"¬ведите числа";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(77, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"—умма равна";
			this->label2->Visible = false;
			// 
			// maxToolStripMenuItem
			// 
			this->maxToolStripMenuItem->Name = L"maxToolStripMenuItem";
			this->maxToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->maxToolStripMenuItem->Text = L"Max";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 345);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void urok1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
		label2->Visible = true;
		button1->Visible = true;
		textBox1->Visible = true;
		textBox2->Visible = true;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int num1, num2, sum;
	num1 = Convert::ToInt32(textBox1->Text);
	num2 = Convert::ToInt32(textBox2->Text);
	sum = num1 + num2;
	label2->Text = L"—умма равна " + sum;
}
};
}