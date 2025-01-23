#pragma once
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
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
			this->maxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1000, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(882, 136);
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
			this->toolStrip1->Size = System::Drawing::Size(395, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->urok1ToolStripMenuItem,
					this->maxToolStripMenuItem, this->tableToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(48, 22);
			this->toolStripDropDownButton1->Text = L"Uroki";
			// 
			// urok1ToolStripMenuItem
			// 
			this->urok1ToolStripMenuItem->Name = L"urok1ToolStripMenuItem";
			this->urok1ToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->urok1ToolStripMenuItem->Text = L"Sum";
			this->urok1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::urok1ToolStripMenuItem_Click);
			// 
			// maxToolStripMenuItem
			// 
			this->maxToolStripMenuItem->Name = L"maxToolStripMenuItem";
			this->maxToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->maxToolStripMenuItem->Text = L"Max";
			this->maxToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::maxToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->tableToolStripMenuItem->Text = L"Table";
			this->tableToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tableToolStripMenuItem_Click);
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
			this->button1->Location = System::Drawing::Point(1060, 135);
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
			this->label1->Location = System::Drawing::Point(1077, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите числа";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1077, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Сумма равна";
			this->label2->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1006, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сравнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(75, 136);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(46, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(127, 136);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(46, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(179, 136);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(46, 20);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(231, 136);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(46, 20);
			this->textBox7->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(105, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(102, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"OR";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(143, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"AND";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(184, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"NO";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 403);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
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
		this->label1->Location = System::Drawing::Point(77, 87);
		label2->Visible = true;
		this->label2->Location = System::Drawing::Point(77, 228);
		button1->Visible = true;
		this->button1->Location = System::Drawing::Point(106, 135);
		textBox1->Visible = true;
		textBox2->Visible = true;
		this->textBox1->Location = System::Drawing::Point(0, 147);
		this->textBox2->Location = System::Drawing::Point(220, 147);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int num1, num2, sum;
		num1 = Convert::ToInt32(textBox1->Text);
		num2 = Convert::ToInt32(textBox2->Text);
		sum = num1 + num2;
		label2->Text = L"Сумма равна " + sum;
	}
	private: System::Void maxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Visible = true;
		this->label1->Location = System::Drawing::Point(77, 87);
		label2->Visible = true;
		this->label2->Location = System::Drawing::Point(77, 228);
		button2->Visible = true;
		this->button2->Location = System::Drawing::Point(106, 135);
		textBox1->Visible = true;
		textBox2->Visible = true;
		this->textBox1->Location = System::Drawing::Point(0, 147);
		this->textBox2->Location = System::Drawing::Point(220, 147);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		int num1, num2;
		num1 = Convert::ToInt32(textBox1->Text);
		num2 = Convert::ToInt32(textBox2->Text);

		if (num1 > num2)
		{
			label2->Text = L"Число " + num1 + " больше чем " + num2;
		}
		else { label2->Text = L"Число " + num2 +  "больше чем " + num1; }
	}
private: System::Void tableToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
