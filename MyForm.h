#pragma once
#include <cmath>

namespace Laba01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TextBox^  textBox_H;
	private: System::Windows::Forms::TextBox^  textBox_X0;








	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox_L;
	private: System::Windows::Forms::TextBox^  textBox_R;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::TextBox^  textBox_E0;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox_w;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox_I0;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_n;







	private: System::Windows::Forms::TextBox^  textBox_E;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox_err;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox_b;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  double_I;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Accurate_I;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mark_LP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Global_P;












	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox_H = (gcnew System::Windows::Forms::TextBox());
			this->textBox_X0 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->double_I = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Accurate_I = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mark_LP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_P = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_L = (gcnew System::Windows::Forms::TextBox());
			this->textBox_R = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_E0 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_w = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_I0 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_E = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox_err = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(13, 13);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 500;
			this->zedGraphControl1->ScrollMaxY = 50;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(868, 890);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// textBox_H
			// 
			this->textBox_H->Location = System::Drawing::Point(1558, 640);
			this->textBox_H->Name = L"textBox_H";
			this->textBox_H->Size = System::Drawing::Size(100, 22);
			this->textBox_H->TabIndex = 4;
			this->textBox_H->Text = L"0,01";
			// 
			// textBox_X0
			// 
			this->textBox_X0->Location = System::Drawing::Point(1558, 668);
			this->textBox_X0->Name = L"textBox_X0";
			this->textBox_X0->Size = System::Drawing::Size(100, 22);
			this->textBox_X0->TabIndex = 6;
			this->textBox_X0->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1518, 641);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"h = ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1513, 669);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 21);
			this->label6->TabIndex = 11;
			this->label6->Text = L"xₒ = ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->n, this->X,
					this->F_X, this->double_I, this->Accurate_I, this->mark_LP, this->h_col, this->Global_P
			});
			this->dataGridView1->Location = System::Drawing::Point(888, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(565, 891);
			this->dataGridView1->TabIndex = 12;
			// 
			// n
			// 
			this->n->FillWeight = 50;
			this->n->HeaderText = L"n";
			this->n->Name = L"n";
			this->n->Width = 30;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->Width = 50;
			// 
			// F_X
			// 
			this->F_X->FillWeight = 200;
			this->F_X->HeaderText = L"I(x)";
			this->F_X->Name = L"F_X";
			this->F_X->Width = 80;
			// 
			// double_I
			// 
			this->double_I->HeaderText = L"Double I>>";
			this->double_I->Name = L"double_I";
			this->double_I->Width = 80;
			// 
			// Accurate_I
			// 
			this->Accurate_I->HeaderText = L"Accurate I(x)";
			this->Accurate_I->Name = L"Accurate_I";
			this->Accurate_I->Width = 80;
			// 
			// mark_LP
			// 
			this->mark_LP->HeaderText = L"mark LP";
			this->mark_LP->Name = L"mark_LP";
			this->mark_LP->Width = 80;
			// 
			// h_col
			// 
			this->h_col->HeaderText = L"h";
			this->h_col->Name = L"h_col";
			this->h_col->Width = 50;
			// 
			// Global_P
			// 
			this->Global_P->HeaderText = L"Global fault";
			this->Global_P->Name = L"Global_P";
			this->Global_P->Width = 70;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1524, 803);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(333, 64);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Plot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1554, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(276, 96);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Постановка задачи\r\nУравнение переменного тока:\r\n L*dI/dx + R*I = Eₒ*sin(ꙍ*x)\r\nI(0"
				L") = Iₒ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1519, 363);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 21);
			this->label8->TabIndex = 15;
			this->label8->Text = L"L = ";
			// 
			// textBox_L
			// 
			this->textBox_L->Location = System::Drawing::Point(1558, 362);
			this->textBox_L->Name = L"textBox_L";
			this->textBox_L->Size = System::Drawing::Size(100, 22);
			this->textBox_L->TabIndex = 16;
			this->textBox_L->Text = L"2";
			// 
			// textBox_R
			// 
			this->textBox_R->Location = System::Drawing::Point(1558, 411);
			this->textBox_R->Name = L"textBox_R";
			this->textBox_R->Size = System::Drawing::Size(100, 22);
			this->textBox_R->TabIndex = 18;
			this->textBox_R->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1519, 412);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 21);
			this->label9->TabIndex = 17;
			this->label9->Text = L"R = ";
			// 
			// textBox_E0
			// 
			this->textBox_E0->Location = System::Drawing::Point(1558, 452);
			this->textBox_E0->Name = L"textBox_E0";
			this->textBox_E0->Size = System::Drawing::Size(100, 22);
			this->textBox_E0->TabIndex = 22;
			this->textBox_E0->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1519, 454);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 21);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Eₒ = ";
			// 
			// textBox_w
			// 
			this->textBox_w->Location = System::Drawing::Point(1558, 480);
			this->textBox_w->Name = L"textBox_w";
			this->textBox_w->Size = System::Drawing::Size(100, 22);
			this->textBox_w->TabIndex = 24;
			this->textBox_w->Text = L"0,1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1518, 481);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 21);
			this->label12->TabIndex = 23;
			this->label12->Text = L"ꙍ = ";
			// 
			// textBox_I0
			// 
			this->textBox_I0->Location = System::Drawing::Point(1558, 612);
			this->textBox_I0->Name = L"textBox_I0";
			this->textBox_I0->Size = System::Drawing::Size(100, 22);
			this->textBox_I0->TabIndex = 26;
			this->textBox_I0->Text = L"5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1518, 613);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 21);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Iₒ = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1518, 338);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 21);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Коэффициент самоиндукции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1520, 583);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 21);
			this->label2->TabIndex = 28;
			this->label2->Text = L"n = ";
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(1558, 582);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(100, 22);
			this->textBox_n->TabIndex = 29;
			this->textBox_n->Text = L"100";
			// 
			// textBox_E
			// 
			this->textBox_E->Location = System::Drawing::Point(1558, 554);
			this->textBox_E->Name = L"textBox_E";
			this->textBox_E->Size = System::Drawing::Size(100, 22);
			this->textBox_E->TabIndex = 30;
			this->textBox_E->Text = L"0,000007";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1519, 555);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 21);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Ɛ = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1541, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(316, 120);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Eₒsin(ꙍ*x) - электродвижущая сила\r\nR - сопротивление\r\nL - коэффициент самоиндукци"
				L"и\r\nI(x) - сила тока\r\nх - время";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1518, 387);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 21);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Сопротивление";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(1519, 433);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 21);
			this->label14->TabIndex = 34;
			this->label14->Text = L"ЭДС";
			// 
			// checkBox_err
			// 
			this->checkBox_err->AutoSize = true;
			this->checkBox_err->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_err->Location = System::Drawing::Point(1558, 751);
			this->checkBox_err->Name = L"checkBox_err";
			this->checkBox_err->Size = System::Drawing::Size(276, 46);
			this->checkBox_err->TabIndex = 35;
			this->checkBox_err->Text = L"Включить контроль погрешности\r\n с переменным шагом";
			this->checkBox_err->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1501, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(236, 25);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Параметры системы:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1501, 526);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(223, 25);
			this->label16->TabIndex = 37;
			this->label16->Text = L"Параметры метода:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1642, 886);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(106, 17);
			this->label17->TabIndex = 38;
			this->label17->Text = L"max global fault";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(1513, 697);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(35, 21);
			this->label18->TabIndex = 40;
			this->label18->Text = L"b = ";
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(1558, 696);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 22);
			this->textBox_b->TabIndex = 39;
			this->textBox_b->Text = L"15";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1914, 933);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->checkBox_err);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_E);
			this->Controls->Add(this->textBox_n);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_I0);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox_w);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox_E0);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_R);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_L);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_X0);
			this->Controls->Add(this->textBox_H);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	double F(double x, double I, double L, double R, double W, double E0)
	{
		return (E0*sin(W*x)/L-R*I/L);
	}

	double Accurate_decision(double x, double L,double R, double E0, double w, double i0, double x0)
	{
		double A = R * E0 * sin(w*x) / (L*L*w*w + R * R);
		double B = L * E0 * w * cos(w*x) / (L*L*w*w + R * R);
		double A0 = R * E0 * sin(w*x0) / (L*L*w*w + R * R);
		double B0 = L * E0 * w * cos(w*x0) / (L*L*w*w + R * R);
		double constanta = (i0 - A0 + B0)*exp(R*x0 / L);
		return (constanta*exp(-R*x / L) + A - B);
	}

	double RK4_I(double x, double I, double h, double L, double R, double E0, double w)
	{
		double k1 = F(x, I, L, R, w, E0);
		double k2 = F(x + h / 4, I + h / 4 * k1, L, R, w, E0);
		double k3 = F(x + h / 2, I + h / 2 * k2, L, R, w, E0);
		double k4 = F(x + h, I + h * (k1 - 2 * k2 + 2 * k3), L, R, w, E0);
		double res = I + h / 6 * (k1 + 4 * k3 + k4);
		return res;
	}



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//try
		//{
			dataGridView1->Rows->Clear();

			GraphPane^ panel = zedGraphControl1->GraphPane; // получение панели дл рисования
			panel->CurveList->Clear(); // очищение панели для рисования
			PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();// объявление парного списка для записи туда точек

			//double xmin = Convert::ToDouble(textBox_X0->Text);
			//double xmax = Convert::ToDouble(textBoxB->Text);
			double h = Convert::ToDouble(textBox_H->Text);
			double i0 = Convert::ToDouble(textBox_I0->Text);
			double x0 = Convert::ToDouble(textBox_X0->Text);
			double L = Convert::ToDouble(textBox_L->Text);
			double R = Convert::ToDouble(textBox_R->Text);
			double E0 = Convert::ToDouble(textBox_E0->Text);
			double W = Convert::ToDouble(textBox_w->Text);
			int	   N = Convert::ToDouble(textBox_n->Text);
			double E = Convert::ToDouble(textBox_E->Text);
			double b = Convert::ToDouble(textBox_b->Text);
			int p = 2; // порядок системы

			if (h == NULL || i0 == NULL || x0 == NULL || L == NULL || R == NULL || E0 == NULL || W == NULL || N == NULL || E == NULL)
				throw 100;

			point_list_numeric->Add(x0, i0);
			point_list_accurate->Add(x0, i0);

			int j = 0;

			// добавление в таблицу начальных значений
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = 0; // iteration
			dataGridView1->Rows[j]->Cells[1]->Value = x0;  //  x
			dataGridView1->Rows[j]->Cells[2]->Value = i0;  //  I numeric
			dataGridView1->Rows[j]->Cells[4]->Value = i0;  //  I accurate
			dataGridView1->Rows[j]->Cells[6]->Value = h;  //  I accurate
			j++;

			double count_iter = 0; // для отслеживания зацикливания, если ЛП слишком большая
			double S; //оценка ЛП
			double half_h = h / 2; //половинный шаг
			double half_I; // I для первого полушага на итерации
			double half_x; // х для полушага на итерации
			double I_double_accur; // I c двумя крышками (двойной точности)
			//double x_accur = x0; //точное значение х
			double I_accur = i0; //точное значение I(x)
			double x_curr = x0;  //текущий х
			double I_curr = i0; // текущий I
			//double h_curr = h; // шаг
			double xprev = x0; // значения предыдущего шага
			double Iprev = i0; // ---------//----------
			double temp; // вспомогательная переменная
			double GP = 0;
			double max_GP = 0;
			if (!checkBox_err->Checked)
			{
				for (; j <= N && x_curr + h <= b;)
				{
					x_curr = x_curr + h;
					I_curr = RK4_I(xprev, Iprev, h, L, R, E0, W);
					I_accur = Accurate_decision(x_curr, L, R, E0, W, i0, x0);

					GP = fabs(I_accur - I_curr);
					if (GP > max_GP) max_GP = GP;

					point_list_numeric->Add(x_curr, I_curr);
					point_list_accurate->Add(x_curr, I_accur);

					dataGridView1->Rows->Add();
					dataGridView1->Rows[j]->Cells[0]->Value = j;
					dataGridView1->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView1->Rows[j]->Cells[2]->Value = I_curr;
					dataGridView1->Rows[j]->Cells[6]->Value = h;   //
					dataGridView1->Rows[j]->Cells[4]->Value = I_accur; //  I точного решения

					Iprev = I_curr;
					xprev = x_curr;

					j++;
				}
			}
			else
			{
				dataGridView1->Rows[j]->Cells[3]->Value = i0;  
				double h_curr = h; // шаг
				for (; j <= N;)
				{
					x_curr = x_curr + h_curr;
					I_curr = RK4_I(xprev, Iprev, h_curr, L, R, E0, W);


					half_x = x_curr + half_h;
					half_I = RK4_I(xprev, Iprev, half_h, L, R, E0, W);

					I_double_accur = RK4_I(half_x, half_I, half_h, L, R, E0, W);

					S = fabs((I_double_accur - I_curr) / (pow(2, p) - 1.0)); // оценка ЛП

					if (S < E / pow(2, p + 1))
					{
						dataGridView1->Rows->Add();
						dataGridView1->Rows[j]->Cells[6]->Value = h_curr;
						h_curr = h_curr * 2.0;
						half_h = h_curr / 2.0;
					}
					else
						if (S > E)
						{
							x_curr = xprev;
							I_curr = Iprev;
							h_curr = h_curr / 2.0;
							half_h = h_curr / 2.0;
							if (++count_iter == 30000) break;
							continue;
						}
						else
						{
							dataGridView1->Rows->Add();
							dataGridView1->Rows[j]->Cells[6]->Value = h_curr;
						}
					count_iter = 0;



					I_accur = Accurate_decision(x_curr, L, R, E0, W, i0, x0);
					point_list_numeric->Add(x_curr, I_curr);
					point_list_accurate->Add(x_curr, I_accur);

					GP = fabs(I_accur-I_curr);
					if (GP > max_GP) max_GP = GP;

					dataGridView1->Rows[j]->Cells[0]->Value = j;
					dataGridView1->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView1->Rows[j]->Cells[2]->Value = I_curr;
					dataGridView1->Rows[j]->Cells[3]->Value = I_double_accur;
					dataGridView1->Rows[j]->Cells[4]->Value = I_accur;  //  I accurate
					dataGridView1->Rows[j]->Cells[5]->Value = S;

					Iprev = I_curr;
					xprev = x_curr;

					j++;
					//label3->Text = Convert::ToString(h_curr);
				}

			}

			label17->Text = Convert::ToString(max_GP);

			LineItem Curve1 = panel->AddCurve("численная траектория", point_list_numeric, Color::Red, SymbolType::VDash);
			LineItem Curve2 = panel->AddCurve("точная траектория", point_list_accurate, Color::Black, SymbolType::Default);

			zedGraphControl1->AxisChange();
			// Обновляем график
			zedGraphControl1->Invalidate();
	/*	}
		catch (int i)
		{
			MessageBox::Show("CLR MessageBox", "MessageBox Test",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		catch (System->FormatException) {}
	*/
		
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
