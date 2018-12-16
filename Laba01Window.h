#pragma once
#include <cmath>


namespace TVLaba01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для Laba01Window
	/// </summary>
	public ref class Laba01Window : public System::Windows::Forms::Form
	{
	public:
		Laba01Window(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			GraphPane^ pane1 = zedGraphControl1->GraphPane;
			pane1->XAxis->Title->Text = "Ось x";
			pane1->YAxis->Title->Text = "Ось u";
			pane1->Title->Text = "графическая интерпретация";

			GraphPane^ pane2 = zedGraphControl2->GraphPane;
			pane2->XAxis->Title->Text = "Ось x";
			pane2->YAxis->Title->Text = "Ось u";
			pane2->Title->Text = "графическая интерпретация";

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Laba01Window()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1_x0;
	private: System::Windows::Forms::TextBox^  textBox1_u0;
	private: System::Windows::Forms::TextBox^  textBox1_E;
	private: System::Windows::Forms::TextBox^  textBox1_b;
	private: System::Windows::Forms::TextBox^  textBox1_n;

	private: System::Windows::Forms::TextBox^  textBox1_h;









	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TextBox^  textBox2_h;
	private: System::Windows::Forms::TextBox^  textBox2_n;
	private: System::Windows::Forms::TextBox^  textBox2_b;
	private: System::Windows::Forms::TextBox^  textBox2_E;
	private: System::Windows::Forms::TextBox^  textBox2_u0;
	private: System::Windows::Forms::TextBox^  textBox2_x0;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V_V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  H;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  U;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  U_V;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  I2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V2_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V_V2_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OLP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2_col;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;










private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::TextBox^  textBox3_h;

private: System::Windows::Forms::TextBox^  textBox3_N;

private: System::Windows::Forms::TextBox^  textBox3_Xm;

private: System::Windows::Forms::TextBox^  textBox3_E;

private: System::Windows::Forms::TextBox^  textBox3_U0;

private: System::Windows::Forms::TextBox^  textBox3_X0;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox3_b;

private: System::Windows::Forms::TextBox^  textBox3_a;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColZ;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::TextBox^  textBox3_Z0;
private: System::Windows::Forms::Label^  label28;
private: ZedGraph::ZedGraphControl^  zedGraphControl4;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;














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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1_x0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_u0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_E = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_h = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_V2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->H = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U_V = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_E = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_u0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_x0 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->I2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_V2_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox3_Z0 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox3_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_a = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_N = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_Xm = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_E = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_U0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_X0 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColZ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1087, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Plot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Laba01Window::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1071, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Xₒ = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1084, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 51);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Постановка задачи\r\ndu/dx = u\r\nu(x0) = u0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1123, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Вариант 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1069, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"u0 = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1076, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"E = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1076, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"b = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1050, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Nmax = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1076, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"h = ";
			// 
			// textBox1_x0
			// 
			this->textBox1_x0->Location = System::Drawing::Point(1121, 118);
			this->textBox1_x0->Name = L"textBox1_x0";
			this->textBox1_x0->Size = System::Drawing::Size(100, 22);
			this->textBox1_x0->TabIndex = 11;
			this->textBox1_x0->Text = L"0";
			// 
			// textBox1_u0
			// 
			this->textBox1_u0->Location = System::Drawing::Point(1121, 146);
			this->textBox1_u0->Name = L"textBox1_u0";
			this->textBox1_u0->Size = System::Drawing::Size(100, 22);
			this->textBox1_u0->TabIndex = 12;
			this->textBox1_u0->Text = L"1";
			// 
			// textBox1_E
			// 
			this->textBox1_E->Location = System::Drawing::Point(1121, 174);
			this->textBox1_E->Name = L"textBox1_E";
			this->textBox1_E->Size = System::Drawing::Size(100, 22);
			this->textBox1_E->TabIndex = 13;
			this->textBox1_E->Text = L"0,00001";
			// 
			// textBox1_b
			// 
			this->textBox1_b->Location = System::Drawing::Point(1121, 202);
			this->textBox1_b->Name = L"textBox1_b";
			this->textBox1_b->Size = System::Drawing::Size(100, 22);
			this->textBox1_b->TabIndex = 14;
			this->textBox1_b->Text = L"6";
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(1121, 230);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(100, 22);
			this->textBox1_n->TabIndex = 15;
			this->textBox1_n->Text = L"1000";
			// 
			// textBox1_h
			// 
			this->textBox1_h->Location = System::Drawing::Point(1121, 258);
			this->textBox1_h->Name = L"textBox1_h";
			this->textBox1_h->Size = System::Drawing::Size(100, 22);
			this->textBox1_h->TabIndex = 16;
			this->textBox1_h->Text = L"0,1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1315, 630);
			this->tabControl1->TabIndex = 18;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label52);
			this->tabPage1->Controls->Add(this->label51);
			this->tabPage1->Controls->Add(this->label50);
			this->tabPage1->Controls->Add(this->label49);
			this->tabPage1->Controls->Add(this->label48);
			this->tabPage1->Controls->Add(this->label47);
			this->tabPage1->Controls->Add(this->label46);
			this->tabPage1->Controls->Add(this->label40);
			this->tabPage1->Controls->Add(this->label41);
			this->tabPage1->Controls->Add(this->label42);
			this->tabPage1->Controls->Add(this->label43);
			this->tabPage1->Controls->Add(this->label44);
			this->tabPage1->Controls->Add(this->label45);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->textBox1_h);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1_b);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox1_E);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1_u0);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1_x0);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1307, 601);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test Task";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(1136, 441);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(54, 17);
			this->label52->TabIndex = 41;
			this->label52->Text = L"label52";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(1137, 420);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(54, 17);
			this->label51->TabIndex = 40;
			this->label51->Text = L"label51";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(1138, 399);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(54, 17);
			this->label50->TabIndex = 39;
			this->label50->Text = L"label50";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(1138, 381);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(54, 17);
			this->label49->TabIndex = 38;
			this->label49->Text = L"label49";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(1138, 364);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(54, 17);
			this->label48->TabIndex = 37;
			this->label48->Text = L"label48";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(1138, 340);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(54, 17);
			this->label47->TabIndex = 36;
			this->label47->Text = L"label47";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(1138, 320);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(54, 17);
			this->label46->TabIndex = 35;
			this->label46->Text = L"label46";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(1072, 441);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(58, 17);
			this->label40->TabIndex = 34;
			this->label40->Text = L"Min h = ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(1069, 420);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(61, 17);
			this->label41->TabIndex = 33;
			this->label41->Text = L"Max h = ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(1090, 399);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 17);
			this->label42->TabIndex = 32;
			this->label42->Text = L"C2 = ";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(1090, 382);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(41, 17);
			this->label43->TabIndex = 31;
			this->label43->Text = L"C1 = ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(1068, 365);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(62, 17);
			this->label44->TabIndex = 30;
			this->label44->Text = L"b - Xn = ";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(1042, 340);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(89, 17);
			this->label45->TabIndex = 29;
			this->label45->Text = L"MAX_OLP = ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1050, 320);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 17);
			this->label18->TabIndex = 20;
			this->label18->Text = L"MAX_GP = ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(1099, 494);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 21);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->X,
					this->V, this->V2, this->V_V2, this->OLP, this->H, this->C1, this->C2, this->U, this->U_V
			});
			this->dataGridView1->Location = System::Drawing::Point(522, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(500, 591);
			this->dataGridView1->TabIndex = 18;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 30;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->Width = 50;
			// 
			// V
			// 
			this->V->HeaderText = L"V";
			this->V->Name = L"V";
			this->V->Width = 80;
			// 
			// V2
			// 
			this->V2->HeaderText = L"V2";
			this->V2->Name = L"V2";
			this->V2->Width = 80;
			// 
			// V_V2
			// 
			this->V_V2->HeaderText = L"V - V2";
			this->V_V2->Name = L"V_V2";
			this->V_V2->Width = 80;
			// 
			// OLP
			// 
			this->OLP->HeaderText = L"ОЛП";
			this->OLP->Name = L"OLP";
			this->OLP->Width = 80;
			// 
			// H
			// 
			this->H->HeaderText = L"h";
			this->H->Name = L"H";
			this->H->Width = 50;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			this->C1->Width = 50;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			this->C2->Width = 50;
			// 
			// U
			// 
			this->U->HeaderText = L"u";
			this->U->Name = L"U";
			this->U->Width = 80;
			// 
			// U_V
			// 
			this->U_V->HeaderText = L"|u-v|";
			this->U_V->Name = L"U_V";
			this->U_V->Width = 80;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(4, 7);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(511, 590);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label39);
			this->tabPage2->Controls->Add(this->label38);
			this->tabPage2->Controls->Add(this->label37);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->textBox2_h);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->textBox2_b);
			this->tabPage2->Controls->Add(this->textBox2_E);
			this->tabPage2->Controls->Add(this->textBox2_u0);
			this->tabPage2->Controls->Add(this->textBox2_x0);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1307, 601);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(1129, 422);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(12, 17);
			this->label39->TabIndex = 29;
			this->label39->Text = L".";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(1053, 422);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(58, 17);
			this->label38->TabIndex = 28;
			this->label38->Text = L"Min h = ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(1129, 401);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(12, 17);
			this->label37->TabIndex = 27;
			this->label37->Text = L".";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(1050, 401);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(61, 17);
			this->label36->TabIndex = 26;
			this->label36->Text = L"Max h = ";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1129, 380);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(12, 17);
			this->label35->TabIndex = 25;
			this->label35->Text = L".";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(1071, 380);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 17);
			this->label34->TabIndex = 24;
			this->label34->Text = L"C2 = ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(1129, 359);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(12, 17);
			this->label33->TabIndex = 23;
			this->label33->Text = L".";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(1071, 363);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 17);
			this->label32->TabIndex = 22;
			this->label32->Text = L"C1 = ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(1129, 338);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(12, 17);
			this->label31->TabIndex = 21;
			this->label31->Text = L".";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1050, 338);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(62, 17);
			this->label30->TabIndex = 20;
			this->label30->Text = L"b - Xn = ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1129, 321);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 17);
			this->label29->TabIndex = 19;
			this->label29->Text = L".";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1023, 321);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(89, 17);
			this->label17->TabIndex = 18;
			this->label17->Text = L"MAX_OLP = ";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(1071, 471);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(129, 21);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Контроль шага";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox2_h
			// 
			this->textBox2_h->Location = System::Drawing::Point(1107, 252);
			this->textBox2_h->Name = L"textBox2_h";
			this->textBox2_h->Size = System::Drawing::Size(100, 22);
			this->textBox2_h->TabIndex = 16;
			this->textBox2_h->Text = L"0,1";
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(1107, 224);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(100, 22);
			this->textBox2_n->TabIndex = 15;
			this->textBox2_n->Text = L"1000";
			// 
			// textBox2_b
			// 
			this->textBox2_b->Location = System::Drawing::Point(1107, 196);
			this->textBox2_b->Name = L"textBox2_b";
			this->textBox2_b->Size = System::Drawing::Size(100, 22);
			this->textBox2_b->TabIndex = 14;
			this->textBox2_b->Text = L"4";
			// 
			// textBox2_E
			// 
			this->textBox2_E->Location = System::Drawing::Point(1107, 168);
			this->textBox2_E->Name = L"textBox2_E";
			this->textBox2_E->Size = System::Drawing::Size(100, 22);
			this->textBox2_E->TabIndex = 13;
			this->textBox2_E->Text = L"0,00001";
			// 
			// textBox2_u0
			// 
			this->textBox2_u0->Location = System::Drawing::Point(1107, 143);
			this->textBox2_u0->Name = L"textBox2_u0";
			this->textBox2_u0->Size = System::Drawing::Size(100, 22);
			this->textBox2_u0->TabIndex = 12;
			this->textBox2_u0->Text = L"1";
			// 
			// textBox2_x0
			// 
			this->textBox2_x0->Location = System::Drawing::Point(1107, 118);
			this->textBox2_x0->Name = L"textBox2_x0";
			this->textBox2_x0->Size = System::Drawing::Size(100, 22);
			this->textBox2_x0->TabIndex = 11;
			this->textBox2_x0->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1111, 7);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(105, 25);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Вариант 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1060, 33);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(221, 68);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Постановка задачи\r\ndu/dx = f(x)*u^2 + u - u^3*sin(10x)\r\nf(x) = \r\nu(x0) = u0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1068, 255);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 17);
			this->label14->TabIndex = 8;
			this->label14->Text = L"h = ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1042, 229);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 17);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Nmax = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1068, 199);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 17);
			this->label12->TabIndex = 6;
			this->label12->Text = L"b = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1068, 171);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 17);
			this->label11->TabIndex = 5;
			this->label11->Text = L"E = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1061, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 17);
			this->label10->TabIndex = 4;
			this->label10->Text = L"u0 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1060, 121);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"X0 = ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1071, 519);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Plot";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Laba01Window::button2_Click_1);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->I2, this->X2,
					this->V_col, this->V2_col, this->V_V2_col, this->OLP2, this->h2, this->C1_col, this->C2_col
			});
			this->dataGridView2->Location = System::Drawing::Point(533, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(484, 591);
			this->dataGridView2->TabIndex = 1;
			// 
			// I2
			// 
			this->I2->HeaderText = L"i";
			this->I2->Name = L"I2";
			this->I2->Width = 50;
			// 
			// X2
			// 
			this->X2->HeaderText = L"x";
			this->X2->Name = L"X2";
			this->X2->Width = 80;
			// 
			// V_col
			// 
			this->V_col->HeaderText = L"V";
			this->V_col->Name = L"V_col";
			this->V_col->Width = 80;
			// 
			// V2_col
			// 
			this->V2_col->HeaderText = L"V2";
			this->V2_col->Name = L"V2_col";
			this->V2_col->Width = 80;
			// 
			// V_V2_col
			// 
			this->V_V2_col->HeaderText = L"V-V2";
			this->V_V2_col->Name = L"V_V2_col";
			this->V_V2_col->Width = 80;
			// 
			// OLP2
			// 
			this->OLP2->HeaderText = L"ОЛП";
			this->OLP2->Name = L"OLP2";
			this->OLP2->Width = 80;
			// 
			// h2
			// 
			this->h2->HeaderText = L"h";
			this->h2->Name = L"h2";
			this->h2->Width = 80;
			// 
			// C1_col
			// 
			this->C1_col->HeaderText = L"C1";
			this->C1_col->Name = L"C1_col";
			this->C1_col->Width = 80;
			// 
			// C2_col
			// 
			this->C2_col->HeaderText = L"C2";
			this->C2_col->Name = L"C2_col";
			this->C2_col->Width = 80;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(7, 4);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(519, 590);
			this->zedGraphControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label54);
			this->tabPage3->Controls->Add(this->label53);
			this->tabPage3->Controls->Add(this->zedGraphControl4);
			this->tabPage3->Controls->Add(this->textBox3_Z0);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->textBox3_b);
			this->tabPage3->Controls->Add(this->textBox3_a);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->checkBox3);
			this->tabPage3->Controls->Add(this->textBox3_h);
			this->tabPage3->Controls->Add(this->textBox3_N);
			this->tabPage3->Controls->Add(this->textBox3_Xm);
			this->tabPage3->Controls->Add(this->textBox3_E);
			this->tabPage3->Controls->Add(this->textBox3_U0);
			this->tabPage3->Controls->Add(this->textBox3_X0);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1307, 601);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Основная задача 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(1038, 42);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(263, 18);
			this->label53->TabIndex = 40;
			this->label53->Text = L"d^2u/dx^2 +a^2*sin(u)+bsin(x) = 0\r\n";
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(7, 304);
			this->zedGraphControl4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(513, 297);
			this->zedGraphControl4->TabIndex = 39;
			// 
			// textBox3_Z0
			// 
			this->textBox3_Z0->Location = System::Drawing::Point(1127, 301);
			this->textBox3_Z0->Name = L"textBox3_Z0";
			this->textBox3_Z0->Size = System::Drawing::Size(100, 22);
			this->textBox3_Z0->TabIndex = 38;
			this->textBox3_Z0->Text = L"1";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1080, 304);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 17);
			this->label28->TabIndex = 37;
			this->label28->Text = L"Z0 = ";
			// 
			// textBox3_b
			// 
			this->textBox3_b->Location = System::Drawing::Point(1127, 273);
			this->textBox3_b->Name = L"textBox3_b";
			this->textBox3_b->Size = System::Drawing::Size(100, 22);
			this->textBox3_b->TabIndex = 36;
			this->textBox3_b->Text = L"1";
			// 
			// textBox3_a
			// 
			this->textBox3_a->Location = System::Drawing::Point(1127, 248);
			this->textBox3_a->Name = L"textBox3_a";
			this->textBox3_a->Size = System::Drawing::Size(100, 22);
			this->textBox3_a->TabIndex = 35;
			this->textBox3_a->Text = L"1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1088, 278);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 17);
			this->label20->TabIndex = 34;
			this->label20->Text = L"b = ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(1087, 253);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 17);
			this->label27->TabIndex = 33;
			this->label27->Text = L"a = ";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(1118, 504);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(129, 21);
			this->checkBox3->TabIndex = 32;
			this->checkBox3->Text = L"Контроль шага";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox3_h
			// 
			this->textBox3_h->Location = System::Drawing::Point(1127, 459);
			this->textBox3_h->Name = L"textBox3_h";
			this->textBox3_h->Size = System::Drawing::Size(100, 22);
			this->textBox3_h->TabIndex = 31;
			this->textBox3_h->Text = L"0,01";
			// 
			// textBox3_N
			// 
			this->textBox3_N->Location = System::Drawing::Point(1127, 431);
			this->textBox3_N->Name = L"textBox3_N";
			this->textBox3_N->Size = System::Drawing::Size(100, 22);
			this->textBox3_N->TabIndex = 30;
			this->textBox3_N->Text = L"10000";
			// 
			// textBox3_Xm
			// 
			this->textBox3_Xm->Location = System::Drawing::Point(1127, 403);
			this->textBox3_Xm->Name = L"textBox3_Xm";
			this->textBox3_Xm->Size = System::Drawing::Size(100, 22);
			this->textBox3_Xm->TabIndex = 29;
			this->textBox3_Xm->Text = L"1";
			// 
			// textBox3_E
			// 
			this->textBox3_E->Location = System::Drawing::Point(1127, 375);
			this->textBox3_E->Name = L"textBox3_E";
			this->textBox3_E->Size = System::Drawing::Size(100, 22);
			this->textBox3_E->TabIndex = 28;
			this->textBox3_E->Text = L"0,00001";
			// 
			// textBox3_U0
			// 
			this->textBox3_U0->Location = System::Drawing::Point(1127, 350);
			this->textBox3_U0->Name = L"textBox3_U0";
			this->textBox3_U0->Size = System::Drawing::Size(100, 22);
			this->textBox3_U0->TabIndex = 27;
			this->textBox3_U0->Text = L"1";
			// 
			// textBox3_X0
			// 
			this->textBox3_X0->Location = System::Drawing::Point(1127, 325);
			this->textBox3_X0->Name = L"textBox3_X0";
			this->textBox3_X0->Size = System::Drawing::Size(100, 22);
			this->textBox3_X0->TabIndex = 26;
			this->textBox3_X0->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1088, 462);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 17);
			this->label21->TabIndex = 25;
			this->label21->Text = L"h = ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1062, 436);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 17);
			this->label22->TabIndex = 24;
			this->label22->Text = L"Nmax = ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1062, 406);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(58, 17);
			this->label23->TabIndex = 23;
			this->label23->Text = L"Xmax = ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1088, 378);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(33, 17);
			this->label24->TabIndex = 22;
			this->label24->Text = L"E = ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1081, 353);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 17);
			this->label25->TabIndex = 21;
			this->label25->Text = L"u0 = ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(1080, 328);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 17);
			this->label26->TabIndex = 20;
			this->label26->Text = L"X0 = ";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1093, 531);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 64);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Plot";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Laba01Window::button3_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(1119, 8);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 25);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Вариант 2";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->ColZ, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView3->Location = System::Drawing::Point(540, 8);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(484, 587);
			this->dataGridView3->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"x";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 80;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"V";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 80;
			// 
			// ColZ
			// 
			this->ColZ->HeaderText = L"Z";
			this->ColZ->Name = L"ColZ";
			this->ColZ->Width = 80;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"V2";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 80;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"V-V2";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 80;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 80;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"h";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 80;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 80;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 80;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(7, 7);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(513, 297);
			this->zedGraphControl3->TabIndex = 0;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(1118, 182);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(54, 17);
			this->label54->TabIndex = 41;
			this->label54->Text = L"label54";
			// 
			// Laba01Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1329, 639);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Laba01Window";
			this->Text = L"Laba01Window";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		double F1(double x, double u, double z, double a, double b)
		{
			return z;
		}

		double F2(double x, double u, double z,  double a, double b)
		{
			double res = -a * a*sin(u) - b * sin(x);
			return res;
		}

		double RK2_sys_U(double x, double u, double z,  double h, double a, double b) // V(1)n+1
		{
			double res;
			double f1 = F1(x, u, z, a, b);
			double f2 = F2(x, u, z, a, b);
			res = u + (h / 2)*(f1+F1(x+h, u + h*f1, z + h*f2, a, b));
			return res;
		}

		double RK2_sys_Z(double x, double u, double z,  double h, double a, double b) // V(2)n+1
		{
			double res;
			double f1 = F1(x, u, z, a, b);
			double f2 = F2(x, u, z, a, b);
			res = z + (h / 2) * (f2 + F2(x + h, u + h * f1, z + h * f2, a, b));
			return res;
		}

		double F(double x, double u, int task)
		{
			if (task == 1)
			{
				return u;
			}
			else
				if (task == 2)
				{
					double A = (x / ( x * x + 1.0)) * u * u;
					double B = u;
					double C = sin(10.0*x) * u * u * u;
					return (double)(A + B - C);
				}

		}

		double	RK4_V(double xprev, double vprev, double h, int task)
		{
			double k1 = F(xprev, vprev, task);
			double k2 = F(xprev + h / 4.0, vprev + h / 4.0 * k1, task);
			double k3 = F(xprev + h / 2.0, vprev + h / 2.0 * k2, task);
			double k4 = F(xprev + h, vprev + h * (k1 - 2.0 * k2 + 2.0 * k3), task);
			double res = vprev + h / 6.0 * (k1 + 4.0 * k3 + k4);
			return res;
		}

		double Accurate_decision(double x, double x0, double u0)
		{
			// u' = u
			// u = C*e^x
			double constanta = u0 * exp(-x0);
			return constanta*exp(x);
		}



		private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
		{
			//    ОСНОВНАЯ   ЗАДАЧА

			dataGridView2->Rows->Clear();

			GraphPane^ panel2 = zedGraphControl2->GraphPane; // получение панели дл рисования
			panel2->CurveList->Clear(); // очищение панели для рисования
			PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();

			double h = Convert::ToDouble(textBox2_h->Text);
			double x0 = Convert::ToDouble(textBox2_x0->Text);
			double u0 = Convert::ToDouble(textBox2_u0->Text);
			double E = Convert::ToDouble(textBox2_E->Text);
			double b = Convert::ToDouble(textBox2_b->Text);
			double N = Convert::ToDouble(textBox2_n->Text);
			int p = 4; // порядок системы
			int C1count = 0; // счетчик деления шага
			int C2count = 0; // счетчик удвоения шага

			int j = 0;

			// добавление в таблицу начальных значений
			dataGridView2->Rows->Add();
			dataGridView2->Rows[j]->Cells[0]->Value = 0; // iteration
			dataGridView2->Rows[j]->Cells[1]->Value = x0;  //  x
			dataGridView2->Rows[j]->Cells[2]->Value = u0;  //  U numeric
			dataGridView2->Rows[j]->Cells[3]->Value = u0;  //  U accurate
			dataGridView2->Rows[j]->Cells[6]->Value = h;  //  U accurate
			dataGridView2->Rows[j]->Cells[7]->Value = C1count;  //  C1 счётчик
			dataGridView2->Rows[j]->Cells[8]->Value = C2count;  //  C2 счётчик
			j++;
			point_list_numeric->Add(x0, u0);

			double count_iter = 0; // для отслеживания зацикливания, если ЛП слишком большая
			double S; //оценка ЛП
			double mark_LP;
			double half_h = h / 2; //половинный шаг
			double half_V; // V для первого полушага на итерации
			double half_x; // х для полушага на итерации
			double V_double_accur; // V c двумя крышками (двойной точности)
			double x_curr = x0;  //текущий х
			double V_curr = u0; // текущий U
			double xprev = x0; // значения предыдущего шага
			double Vprev = u0; // ---------//----------
			double temp; // вспомогательная переменная
			double h_curr = h; // шаг
			double V_V2;
			double maxH = 0;
			double minH = 9999;
			double MAX_S = 0;

			if (checkBox2->Checked) // ОСНОВНАЯ ЗАДАЧА С КОНТРОЛЕМ
			{
				for (; j <= N && x_curr + h_curr <= b;)
				{
					x_curr = x_curr + h_curr;
					V_curr = RK4_V(xprev, Vprev, h_curr, 2);


					half_x = x_curr + half_h;
					half_V = RK4_V(xprev, Vprev, half_h, 2);

					V_double_accur = RK4_V(half_x, half_V, half_h, 2);


					V_V2 = V_double_accur - V_curr;
					S = fabs(V_V2 / (pow(2, p) - 1.0)); //  ЛП
					mark_LP = pow(2, p)*S;				// ОЛП

					if (S < E / pow(2, p + 1))
					{
						dataGridView2->Rows->Add();
						dataGridView2->Rows[j]->Cells[6]->Value = h_curr;
						h_curr = h_curr * 2.0;
						half_h = h_curr / 2.0;
						C2count++;

					}
					else
						if (S > E)
						{
							x_curr = xprev;
							V_curr = Vprev;
							h_curr = h_curr / 2.0;
							half_h = h_curr / 2.0;
							C1count++;
							if (++count_iter == 30000) break;
							continue;
						}
						else
						{
							dataGridView2->Rows->Add();
							dataGridView2->Rows[j]->Cells[6]->Value = h_curr;
						}
					count_iter = 0;

					if (S > MAX_S) MAX_S = S;
					if (h_curr > maxH) maxH = h_curr;
					if (h_curr < minH) minH = h_curr;

					point_list_numeric->Add(x_curr, V_curr);

					dataGridView2->Rows[j]->Cells[0]->Value = j;
					dataGridView2->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView2->Rows[j]->Cells[2]->Value = V_curr;
					dataGridView2->Rows[j]->Cells[3]->Value = V_double_accur;
					dataGridView2->Rows[j]->Cells[4]->Value = V_V2;
					dataGridView2->Rows[j]->Cells[5]->Value = mark_LP;
					dataGridView2->Rows[j]->Cells[7]->Value = C1count;
					dataGridView2->Rows[j]->Cells[8]->Value = C2count;


					Vprev = V_curr;
					xprev = x_curr;

					j++;

				}
				label29->Text = Convert::ToString(MAX_S);
			}
			else // ОСНОВНАЯ ЗАДАЧА БЕЗ КОНТРОЛЯ
			{
				for (; j <= N && x_curr + h <= b;)
				{
					x_curr = x_curr + h;
					V_curr = RK4_V(xprev, Vprev, h, 2);

					point_list_numeric->Add(x_curr, V_curr);

					dataGridView2->Rows->Add();
					dataGridView2->Rows[j]->Cells[0]->Value = j;
					dataGridView2->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView2->Rows[j]->Cells[2]->Value = V_curr;
					dataGridView2->Rows[j]->Cells[6]->Value = h;
					dataGridView2->Rows[j]->Cells[7]->Value = C1count;
					dataGridView2->Rows[j]->Cells[8]->Value = C2count;

					Vprev = V_curr;
					xprev = x_curr;

					j++;

				}
				minH = h;
				maxH = h;
			}

			label31->Text = Convert::ToString(b-x_curr);
			label33->Text = Convert::ToString(C1count);
			label35->Text = Convert::ToString(C2count);
			label37->Text = Convert::ToString(maxH);
			label39->Text = Convert::ToString(minH);

			LineItem Curve1 = panel2->AddCurve("численная траектория", point_list_numeric, Color::Red, SymbolType::VDash);

			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();
		}


		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//   TEST  TASK

			dataGridView1->Rows->Clear();

			GraphPane^ panel1 = zedGraphControl1->GraphPane; // получение панели дл рисования
			panel1->CurveList->Clear(); // очищение панели для рисования
			PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();// объявление парного списка для записи туда точек

			double h = Convert::ToDouble(textBox1_h->Text);
			double x0 = Convert::ToDouble(textBox1_x0->Text);
			double u0 = Convert::ToDouble(textBox1_u0->Text);
			double E = Convert::ToDouble(textBox1_E->Text);
			double b = Convert::ToDouble(textBox1_b->Text);
			double N = Convert::ToDouble(textBox1_n->Text);
			int p = 4; // порядок системы
			int C1count = 0; // счетчик деления шага
			int C2count = 0; // счетчик удвоения шага

			int j = 0;

			// добавление в таблицу начальных значений
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = 0; // iteration
			dataGridView1->Rows[j]->Cells[1]->Value = x0;  //  x
			dataGridView1->Rows[j]->Cells[2]->Value = u0;  //  I numeric
			dataGridView1->Rows[j]->Cells[3]->Value = u0;  //  I accurate
			dataGridView1->Rows[j]->Cells[6]->Value = h;  //  I accurate
			dataGridView1->Rows[j]->Cells[7]->Value = C1count;  //  C1 счётчик
			dataGridView1->Rows[j]->Cells[8]->Value = C2count;  //  C2 счётчик
			j++;
			point_list_accurate->Add(x0, u0);
			point_list_numeric->Add(x0, u0);
			double count_iter = 0; // для отслеживания зацикливания, если ЛП слишком большая
			double S; //оценка ЛП
			double mark_LP;
			double half_h = h / 2; //половинный шаг
			double half_V; // V для первого полушага на итерации
			double half_x; // х для полушага на итерации
			double V_double_accur; // V c двумя крышками (двойной точности)
			//double x_accur = x0; //точное значение х
			double u_accur = u0; //точное значение U(x)
			double x_curr = x0;  //текущий х
			double V_curr = u0; // текущий U
			double xprev = x0; // значения предыдущего шага
			double Vprev = u0; // ---------//----------
			double temp; // вспомогательная переменная
			double h_curr = h; // шаг
			double V_V2;
			double Global_P;
			double MAX_GP = 0;
			double MAX_S = 0;
			double maxH = 0;
			double minH = 9999;

			if (checkBox1->Checked)   //ТЕСТОВАЯ ЗАДАЧА С КОНТРОЛЕМ
			{
				for (; j <= N && x_curr + h_curr <= b;)
				{
					x_curr = xprev + h_curr;
					V_curr = RK4_V(xprev, Vprev, h_curr, 1);

					half_x = xprev + half_h;
					half_V = RK4_V(xprev, Vprev, half_h, 1);

					V_double_accur = RK4_V(half_x, half_V, half_h, 1);


					V_V2 = V_double_accur - V_curr;
					S = fabs(V_V2 / (pow(2, p) - 1.0)); //  ЛП
					mark_LP = pow(2, p)*S;

					if (S < E / pow(2, p + 1))
					{
						dataGridView1->Rows->Add();
						dataGridView1->Rows[j]->Cells[6]->Value = h_curr;
						h_curr = h_curr * 2.0;
						half_h = h_curr / 2.0;
						C2count++;

					}
					else
						if (S > E)
						{
							x_curr = xprev;
							V_curr = Vprev;
							h_curr = h_curr / 2.0;
							half_h = h_curr / 2.0;
							C1count++;
							if (++count_iter == 30000) break;
							continue;
						}
						else
						{
							dataGridView1->Rows->Add();
							dataGridView1->Rows[j]->Cells[6]->Value = h_curr;
						}
					count_iter = 0;



					u_accur = Accurate_decision(x_curr, x0, u0);
					point_list_numeric->Add(x_curr, V_curr);
					point_list_accurate->Add(x_curr, u_accur);
					Global_P = fabs(u_accur - V_curr);
					if (Global_P > MAX_GP) MAX_GP = Global_P;
					if (S > MAX_S) MAX_S = S;
					if (h_curr > maxH) maxH = h_curr;
					if (h_curr < minH) minH = h_curr;

					dataGridView1->Rows[j]->Cells[0]->Value = j;
					dataGridView1->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView1->Rows[j]->Cells[2]->Value = V_curr;
					dataGridView1->Rows[j]->Cells[3]->Value = V_double_accur;
					dataGridView1->Rows[j]->Cells[4]->Value = V_V2;
					dataGridView1->Rows[j]->Cells[5]->Value = mark_LP;
					dataGridView1->Rows[j]->Cells[7]->Value = C1count;
					dataGridView1->Rows[j]->Cells[8]->Value = C2count;
					dataGridView1->Rows[j]->Cells[9]->Value = u_accur;  //  U accurate
					dataGridView1->Rows[j]->Cells[10]->Value = Global_P;

					Vprev = V_curr;
					xprev = x_curr;

					j++;

				}
				label47->Text = Convert::ToString(MAX_S);
			}
			else   // ТЕСТОВАЯ ЗАДАЧА БЕЗ КОНТРОЛЯ
			{
				for (; j <= N && x_curr + h <= b;)
				{
					x_curr = x_curr + h;
					V_curr = RK4_V(xprev, Vprev, h, 1);

					u_accur = Accurate_decision(x_curr, x0, u0);
					point_list_numeric->Add(x_curr, V_curr);
					point_list_accurate->Add(x_curr, u_accur);
					Global_P = fabs(u_accur - V_curr);
					if (Global_P > MAX_GP) MAX_GP = Global_P;

					dataGridView1->Rows->Add();
					dataGridView1->Rows[j]->Cells[0]->Value = j;
					dataGridView1->Rows[j]->Cells[1]->Value = x_curr;
					dataGridView1->Rows[j]->Cells[2]->Value = V_curr;
					dataGridView1->Rows[j]->Cells[6]->Value = h;
					dataGridView1->Rows[j]->Cells[7]->Value = C1count;
					dataGridView1->Rows[j]->Cells[8]->Value = C2count;
					dataGridView1->Rows[j]->Cells[9]->Value = u_accur;  //  U accurate
					dataGridView1->Rows[j]->Cells[10]->Value = Global_P;

					Vprev = V_curr;
					xprev = x_curr;

					j++;

				}
				maxH = h;
				minH = h;
			}

			label48->Text = Convert::ToString(b - x_curr);
			label49->Text = Convert::ToString(C1count);
			label50->Text = Convert::ToString(C2count);
			label51->Text = Convert::ToString(maxH);
			label52->Text = Convert::ToString(minH);

			LineItem Curve1 = panel1->AddCurve("численная траектория", point_list_numeric, Color::Red, SymbolType::VDash);
			LineItem Curve2 = panel1->AddCurve("точная траектория", point_list_accurate, Color::Black, SymbolType::XCross);

			label46->Text = Convert::ToString(MAX_GP);

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
		}

	
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// ОСНОВНАЯ ЗАДАЧА 2

			dataGridView3->Rows->Clear();

			GraphPane^ panel1 = zedGraphControl3->GraphPane; // получение панели дл рисования
			//panel1->CurveList->Clear(); // очищение панели для рисования
			GraphPane^ panel2 = zedGraphControl4->GraphPane; // получение панели дл рисования
			//panel2->CurveList->Clear(); // очищение панели для рисования
			PointPairList^ point_list_UZ = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_XZ = gcnew ZedGraph::PointPairList();// объявление парного списка для записи туда точек
			PointPairList^ point_list_XU = gcnew ZedGraph::PointPairList();

			double h = Convert::ToDouble(textBox3_h->Text);
			double x0 = Convert::ToDouble(textBox3_X0->Text);
			double u0 = Convert::ToDouble(textBox3_U0->Text);
			double z0 = Convert::ToDouble(textBox3_Z0->Text);
			double E = Convert::ToDouble(textBox3_E->Text);
			double a = Convert::ToDouble(textBox3_a->Text);
			double b = Convert::ToDouble(textBox3_b->Text);
			double N = Convert::ToDouble(textBox3_N->Text);
			double Xmax = Convert::ToDouble(textBox3_Xm->Text);

			int j = 0;

			// добавление в таблицу начальных значений
			dataGridView3->Rows->Add();
			//dataGridView3->Rows[j]->Cells[0]->Value = 0; // iteration
			//dataGridView3->Rows[j]->Cells[1]->Value = x0;  //  x
			//dataGridView3->Rows[j]->Cells[2]->Value = u0;  //  I numeric
			//dataGridView3->Rows[j]->Cells[6]->Value = h;  
			j++;

			point_list_XU->Add(x0, u0);
			point_list_XZ->Add(x0, z0);
			point_list_UZ->Add(u0, z0);

			double xprev = x0;
			double uprev = u0;
			double zprev = z0;
			double xcurr = 0;
			double ucurr = 0;
			double zcurr = 0;




			// тут j = 1
			for (; j < N && xprev + h <= Xmax;)
			{
				xcurr = xprev + h;
				ucurr = RK2_sys_U(xprev, uprev, zprev, h, a, b);
				zcurr = RK2_sys_Z(xprev, uprev, zprev, h, a, b);

				point_list_UZ->Add(ucurr, zcurr);
				point_list_XU->Add(xcurr, ucurr);
				point_list_XZ->Add(xcurr, zcurr);

				dataGridView3->Rows->Add();
				dataGridView3->Rows[j]->Cells[0]->Value = j;
				dataGridView3->Rows[j]->Cells[1]->Value = xcurr;
				dataGridView3->Rows[j]->Cells[2]->Value = ucurr;
				dataGridView3->Rows[j]->Cells[3]->Value = zcurr;

				xprev = xcurr;
				uprev = ucurr;
				zprev = zcurr;
				j++;
			}

			LineItem Curve1 = panel1->AddCurve("Z(X)", point_list_XZ, Color::Red, SymbolType::None);
			LineItem Curve2 = panel1->AddCurve("U(X)", point_list_XU, Color::Black, SymbolType::None);
			LineItem Curve3 = panel2->AddCurve("Z(U)", point_list_UZ, Color::Blue, SymbolType::None);

			double u = u0-2;
			double z = z0-2;
			double x = x0;
			double up = u0 - 2;
			double zp = z0 - 2;
			double h2 = 0.5;
			double z00 = z0-2, u00 = u0-2;

			int i = 0;

			/*for (;u00 <= u0+2; u00 += h2)
				for (; z00 <= z0 + 2; z00 += h2)
				{
					zp = z00;
					up = u00;
					for (i = 0; i < 20; i++)
					{
						u = RK2_sys_U(x, up, zp, h, a, b);
						z = RK2_sys_Z(x, up, zp, h, a, b);
						point_list_UZ->Add(u, z);
						LineItem Curve = panel2->AddCurve("Z(U)", point_list_UZ, Color::Green, SymbolType::None);
						//zedGraphControl4->AxisChange();
						//zedGraphControl4->Invalidate();
						up = u;
						up = z;
					}
				}*/

	
			label54->Text = Convert::ToString(1+((7-(7/4)*4) > 2));
			
			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();
			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();
		}
	};
}

