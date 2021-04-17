#pragma once
int k;
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  black;
	protected:

	private: System::Windows::Forms::PictureBox^  red1;






	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stopToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  red2;
	private: System::Windows::Forms::PictureBox^  red;
	private: System::Windows::Forms::PictureBox^  red3;
	private: System::Windows::Forms::PictureBox^  black_main;






	private: System::Windows::Forms::PictureBox^  app8;
	private: System::Windows::Forms::PictureBox^  app7;
	private: System::Windows::Forms::PictureBox^  app6;
	private: System::Windows::Forms::PictureBox^  app5;
	private: System::Windows::Forms::PictureBox^  app4;
	private: System::Windows::Forms::PictureBox^  app3;
	private: System::Windows::Forms::PictureBox^  app2;
	private: System::Windows::Forms::PictureBox^  app1;
	private: System::Windows::Forms::PictureBox^  run2;
	private: System::Windows::Forms::PictureBox^  run1;
	private: System::Windows::Forms::PictureBox^  app9;
	private: System::Windows::Forms::PictureBox^  kn;
	private: System::Windows::Forms::PictureBox^  kn_walk2;
	private: System::Windows::Forms::PictureBox^  kn_walk1;
	private: System::Windows::Forms::PictureBox^  kn_stay;
	private: System::Windows::Forms::PictureBox^  kn_talk;
	private: System::Windows::Forms::PictureBox^  bh;
	private: System::Windows::Forms::PictureBox^  fire;
	private: System::Windows::Forms::PictureBox^  fire4;


	private: System::Windows::Forms::PictureBox^  fire3;

	private: System::Windows::Forms::PictureBox^  fire2;

	private: System::Windows::Forms::PictureBox^  fire1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  kn_run2;
	private: System::Windows::Forms::PictureBox^  kn_run1;
	private: System::Windows::Forms::PictureBox^  b_run2;
	private: System::Windows::Forms::PictureBox^  b_run1;
	private: System::Windows::Forms::PictureBox^  jump4;
	private: System::Windows::Forms::PictureBox^  jump3;
	private: System::Windows::Forms::PictureBox^  jump2;
	private: System::Windows::Forms::PictureBox^  jump1;
	private: System::Windows::Forms::PictureBox^  black0;
	private: System::Windows::Forms::PictureBox^  burn;
	private: System::Windows::Forms::PictureBox^  atack;
	private: System::Windows::Forms::PictureBox^  fun2;
	private: System::Windows::Forms::PictureBox^  fun1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;




	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->black = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->fire = (gcnew System::Windows::Forms::PictureBox());
			this->kn = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->fun2 = (gcnew System::Windows::Forms::PictureBox());
			this->fun1 = (gcnew System::Windows::Forms::PictureBox());
			this->burn = (gcnew System::Windows::Forms::PictureBox());
			this->atack = (gcnew System::Windows::Forms::PictureBox());
			this->black0 = (gcnew System::Windows::Forms::PictureBox());
			this->jump4 = (gcnew System::Windows::Forms::PictureBox());
			this->jump3 = (gcnew System::Windows::Forms::PictureBox());
			this->jump2 = (gcnew System::Windows::Forms::PictureBox());
			this->jump1 = (gcnew System::Windows::Forms::PictureBox());
			this->b_run2 = (gcnew System::Windows::Forms::PictureBox());
			this->b_run1 = (gcnew System::Windows::Forms::PictureBox());
			this->kn_run2 = (gcnew System::Windows::Forms::PictureBox());
			this->kn_run1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->fire4 = (gcnew System::Windows::Forms::PictureBox());
			this->fire3 = (gcnew System::Windows::Forms::PictureBox());
			this->fire2 = (gcnew System::Windows::Forms::PictureBox());
			this->fire1 = (gcnew System::Windows::Forms::PictureBox());
			this->bh = (gcnew System::Windows::Forms::PictureBox());
			this->kn_talk = (gcnew System::Windows::Forms::PictureBox());
			this->kn_walk2 = (gcnew System::Windows::Forms::PictureBox());
			this->kn_walk1 = (gcnew System::Windows::Forms::PictureBox());
			this->kn_stay = (gcnew System::Windows::Forms::PictureBox());
			this->red1 = (gcnew System::Windows::Forms::PictureBox());
			this->app9 = (gcnew System::Windows::Forms::PictureBox());
			this->run2 = (gcnew System::Windows::Forms::PictureBox());
			this->run1 = (gcnew System::Windows::Forms::PictureBox());
			this->app8 = (gcnew System::Windows::Forms::PictureBox());
			this->app7 = (gcnew System::Windows::Forms::PictureBox());
			this->app6 = (gcnew System::Windows::Forms::PictureBox());
			this->app5 = (gcnew System::Windows::Forms::PictureBox());
			this->app4 = (gcnew System::Windows::Forms::PictureBox());
			this->app3 = (gcnew System::Windows::Forms::PictureBox());
			this->app2 = (gcnew System::Windows::Forms::PictureBox());
			this->app1 = (gcnew System::Windows::Forms::PictureBox());
			this->black_main = (gcnew System::Windows::Forms::PictureBox());
			this->red3 = (gcnew System::Windows::Forms::PictureBox());
			this->red = (gcnew System::Windows::Forms::PictureBox());
			this->red2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->black->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fun2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fun1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->burn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->atack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->black0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b_run2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b_run1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_run2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_run1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_talk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_walk2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_walk1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_stay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->run2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->run1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->black_main))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// black
			// 
			this->black->Controls->Add(this->pictureBox7);
			this->black->Controls->Add(this->pictureBox6);
			this->black->Controls->Add(this->pictureBox5);
			this->black->Controls->Add(this->pictureBox4);
			this->black->Controls->Add(this->fire);
			this->black->Controls->Add(this->kn);
			this->black->Controls->Add(this->pictureBox3);
			this->black->Controls->Add(this->fun2);
			this->black->Controls->Add(this->fun1);
			this->black->Controls->Add(this->burn);
			this->black->Controls->Add(this->atack);
			this->black->Controls->Add(this->black0);
			this->black->Controls->Add(this->jump4);
			this->black->Controls->Add(this->jump3);
			this->black->Controls->Add(this->jump2);
			this->black->Controls->Add(this->jump1);
			this->black->Controls->Add(this->b_run2);
			this->black->Controls->Add(this->b_run1);
			this->black->Controls->Add(this->kn_run2);
			this->black->Controls->Add(this->kn_run1);
			this->black->Controls->Add(this->pictureBox2);
			this->black->Controls->Add(this->pictureBox1);
			this->black->Controls->Add(this->fire4);
			this->black->Controls->Add(this->fire3);
			this->black->Controls->Add(this->fire2);
			this->black->Controls->Add(this->fire1);
			this->black->Controls->Add(this->bh);
			this->black->Controls->Add(this->kn_talk);
			this->black->Controls->Add(this->kn_walk2);
			this->black->Controls->Add(this->kn_walk1);
			this->black->Controls->Add(this->kn_stay);
			this->black->Controls->Add(this->red1);
			this->black->Controls->Add(this->app9);
			this->black->Controls->Add(this->run2);
			this->black->Controls->Add(this->run1);
			this->black->Controls->Add(this->app8);
			this->black->Controls->Add(this->app7);
			this->black->Controls->Add(this->app6);
			this->black->Controls->Add(this->app5);
			this->black->Controls->Add(this->app4);
			this->black->Controls->Add(this->app3);
			this->black->Controls->Add(this->app2);
			this->black->Controls->Add(this->app1);
			this->black->Controls->Add(this->black_main);
			this->black->Controls->Add(this->red3);
			this->black->Controls->Add(this->red);
			this->black->Controls->Add(this->red2);
			this->black->Controls->Add(this->menuStrip1);
			this->black->Location = System::Drawing::Point(0, -19);
			this->black->Name = L"black";
			this->black->Size = System::Drawing::Size(618, 359);
			this->black->TabIndex = 0;
			this->black->TabStop = false;
			this->black->Text = L"groupBox1";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(311, 43);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(17, 22);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 48;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(513, 100);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(99, 92);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 47;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(501, 48);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(29, 27);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 46;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(433, 102);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(51, 53);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 45;
			this->pictureBox4->TabStop = false;
			// 
			// fire
			// 
			this->fire->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire.BackgroundImage")));
			this->fire->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire.Image")));
			this->fire->Location = System::Drawing::Point(350, 114);
			this->fire->Name = L"fire";
			this->fire->Size = System::Drawing::Size(77, 78);
			this->fire->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fire->TabIndex = 24;
			this->fire->TabStop = false;
			// 
			// kn
			// 
			this->kn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn.Image")));
			this->kn->Location = System::Drawing::Point(-54, 211);
			this->kn->Name = L"kn";
			this->kn->Size = System::Drawing::Size(59, 148);
			this->kn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kn->TabIndex = 18;
			this->kn->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(58, 64);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(554, 88);
			this->pictureBox3->TabIndex = 44;
			this->pictureBox3->TabStop = false;
			// 
			// fun2
			// 
			this->fun2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fun2.Image")));
			this->fun2->Location = System::Drawing::Point(523, 114);
			this->fun2->Name = L"fun2";
			this->fun2->Size = System::Drawing::Size(16, 25);
			this->fun2->TabIndex = 43;
			this->fun2->TabStop = false;
			// 
			// fun1
			// 
			this->fun1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fun1.Image")));
			this->fun1->Location = System::Drawing::Point(501, 115);
			this->fun1->Name = L"fun1";
			this->fun1->Size = System::Drawing::Size(16, 25);
			this->fun1->TabIndex = 42;
			this->fun1->TabStop = false;
			// 
			// burn
			// 
			this->burn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burn.Image")));
			this->burn->Location = System::Drawing::Point(98, 32);
			this->burn->Name = L"burn";
			this->burn->Size = System::Drawing::Size(37, 34);
			this->burn->TabIndex = 41;
			this->burn->TabStop = false;
			// 
			// atack
			// 
			this->atack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"atack.Image")));
			this->atack->Location = System::Drawing::Point(65, 37);
			this->atack->Name = L"atack";
			this->atack->Size = System::Drawing::Size(28, 28);
			this->atack->TabIndex = 40;
			this->atack->TabStop = false;
			// 
			// black0
			// 
			this->black0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"black0.Image")));
			this->black0->Location = System::Drawing::Point(457, 43);
			this->black0->Name = L"black0";
			this->black0->Size = System::Drawing::Size(21, 22);
			this->black0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->black0->TabIndex = 39;
			this->black0->TabStop = false;
			// 
			// jump4
			// 
			this->jump4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jump4.Image")));
			this->jump4->Location = System::Drawing::Point(581, 114);
			this->jump4->Name = L"jump4";
			this->jump4->Size = System::Drawing::Size(28, 27);
			this->jump4->TabIndex = 38;
			this->jump4->TabStop = false;
			// 
			// jump3
			// 
			this->jump3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jump3.Image")));
			this->jump3->Location = System::Drawing::Point(581, 81);
			this->jump3->Name = L"jump3";
			this->jump3->Size = System::Drawing::Size(28, 27);
			this->jump3->TabIndex = 37;
			this->jump3->TabStop = false;
			// 
			// jump2
			// 
			this->jump2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jump2.Image")));
			this->jump2->Location = System::Drawing::Point(547, 81);
			this->jump2->Name = L"jump2";
			this->jump2->Size = System::Drawing::Size(28, 27);
			this->jump2->TabIndex = 36;
			this->jump2->TabStop = false;
			// 
			// jump1
			// 
			this->jump1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jump1.Image")));
			this->jump1->Location = System::Drawing::Point(513, 81);
			this->jump1->Name = L"jump1";
			this->jump1->Size = System::Drawing::Size(28, 27);
			this->jump1->TabIndex = 35;
			this->jump1->TabStop = false;
			// 
			// b_run2
			// 
			this->b_run2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_run2.Image")));
			this->b_run2->Location = System::Drawing::Point(389, 31);
			this->b_run2->Name = L"b_run2";
			this->b_run2->Size = System::Drawing::Size(33, 23);
			this->b_run2->TabIndex = 34;
			this->b_run2->TabStop = false;
			// 
			// b_run1
			// 
			this->b_run1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_run1.Image")));
			this->b_run1->Location = System::Drawing::Point(350, 31);
			this->b_run1->Name = L"b_run1";
			this->b_run1->Size = System::Drawing::Size(33, 23);
			this->b_run1->TabIndex = 33;
			this->b_run1->TabStop = false;
			// 
			// kn_run2
			// 
			this->kn_run2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_run2.Image")));
			this->kn_run2->Location = System::Drawing::Point(276, 115);
			this->kn_run2->Name = L"kn_run2";
			this->kn_run2->Size = System::Drawing::Size(32, 29);
			this->kn_run2->TabIndex = 32;
			this->kn_run2->TabStop = false;
			// 
			// kn_run1
			// 
			this->kn_run1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_run1.Image")));
			this->kn_run1->Location = System::Drawing::Point(238, 115);
			this->kn_run1->Name = L"kn_run1";
			this->kn_run1->Size = System::Drawing::Size(32, 29);
			this->kn_run1->TabIndex = 31;
			this->kn_run1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(264, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 18);
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(238, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(20, 18);
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// fire4
			// 
			this->fire4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire4.BackgroundImage")));
			this->fire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire4.Image")));
			this->fire4->Location = System::Drawing::Point(457, 137);
			this->fire4->Name = L"fire4";
			this->fire4->Size = System::Drawing::Size(33, 29);
			this->fire4->TabIndex = 28;
			this->fire4->TabStop = false;
			// 
			// fire3
			// 
			this->fire3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire3.BackgroundImage")));
			this->fire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire3.Image")));
			this->fire3->Location = System::Drawing::Point(411, 137);
			this->fire3->Name = L"fire3";
			this->fire3->Size = System::Drawing::Size(33, 29);
			this->fire3->TabIndex = 27;
			this->fire3->TabStop = false;
			// 
			// fire2
			// 
			this->fire2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire2.BackgroundImage")));
			this->fire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire2.Image")));
			this->fire2->Location = System::Drawing::Point(371, 137);
			this->fire2->Name = L"fire2";
			this->fire2->Size = System::Drawing::Size(33, 29);
			this->fire2->TabIndex = 26;
			this->fire2->TabStop = false;
			// 
			// fire1
			// 
			this->fire1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire1.BackgroundImage")));
			this->fire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fire1.Image")));
			this->fire1->Location = System::Drawing::Point(328, 137);
			this->fire1->Name = L"fire1";
			this->fire1->Size = System::Drawing::Size(33, 29);
			this->fire1->TabIndex = 25;
			this->fire1->TabStop = false;
			// 
			// bh
			// 
			this->bh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bh.Image")));
			this->bh->Location = System::Drawing::Point(458, 93);
			this->bh->Name = L"bh";
			this->bh->Size = System::Drawing::Size(36, 38);
			this->bh->TabIndex = 23;
			this->bh->TabStop = false;
			// 
			// kn_talk
			// 
			this->kn_talk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_talk.Image")));
			this->kn_talk->Location = System::Drawing::Point(195, 114);
			this->kn_talk->Name = L"kn_talk";
			this->kn_talk->Size = System::Drawing::Size(37, 38);
			this->kn_talk->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kn_talk->TabIndex = 22;
			this->kn_talk->TabStop = false;
			// 
			// kn_walk2
			// 
			this->kn_walk2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_walk2.Image")));
			this->kn_walk2->Location = System::Drawing::Point(170, 102);
			this->kn_walk2->Name = L"kn_walk2";
			this->kn_walk2->Size = System::Drawing::Size(19, 42);
			this->kn_walk2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kn_walk2->TabIndex = 21;
			this->kn_walk2->TabStop = false;
			// 
			// kn_walk1
			// 
			this->kn_walk1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_walk1.Image")));
			this->kn_walk1->Location = System::Drawing::Point(111, 102);
			this->kn_walk1->Name = L"kn_walk1";
			this->kn_walk1->Size = System::Drawing::Size(38, 42);
			this->kn_walk1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kn_walk1->TabIndex = 20;
			this->kn_walk1->TabStop = false;
			// 
			// kn_stay
			// 
			this->kn_stay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kn_stay.Image")));
			this->kn_stay->Location = System::Drawing::Point(65, 102);
			this->kn_stay->Name = L"kn_stay";
			this->kn_stay->Size = System::Drawing::Size(40, 40);
			this->kn_stay->TabIndex = 19;
			this->kn_stay->TabStop = false;
			// 
			// red1
			// 
			this->red1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red1.Image")));
			this->red1->Location = System::Drawing::Point(65, 213);
			this->red1->Name = L"red1";
			this->red1->Size = System::Drawing::Size(210, 220);
			this->red1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->red1->TabIndex = 0;
			this->red1->TabStop = false;
			this->red1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// app9
			// 
			this->app9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app9.Image")));
			this->app9->Location = System::Drawing::Point(411, 91);
			this->app9->Name = L"app9";
			this->app9->Size = System::Drawing::Size(40, 40);
			this->app9->TabIndex = 17;
			this->app9->TabStop = false;
			// 
			// run2
			// 
			this->run2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"run2.BackgroundImage")));
			this->run2->Location = System::Drawing::Point(524, 32);
			this->run2->Name = L"run2";
			this->run2->Size = System::Drawing::Size(33, 29);
			this->run2->TabIndex = 16;
			this->run2->TabStop = false;
			// 
			// run1
			// 
			this->run1->BackColor = System::Drawing::Color::White;
			this->run1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"run1.Image")));
			this->run1->Location = System::Drawing::Point(484, 32);
			this->run1->Name = L"run1";
			this->run1->Size = System::Drawing::Size(33, 29);
			this->run1->TabIndex = 15;
			this->run1->TabStop = false;
			// 
			// app8
			// 
			this->app8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app8.Image")));
			this->app8->Location = System::Drawing::Point(367, 91);
			this->app8->Name = L"app8";
			this->app8->Size = System::Drawing::Size(37, 41);
			this->app8->TabIndex = 14;
			this->app8->TabStop = false;
			// 
			// app7
			// 
			this->app7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app7.Image")));
			this->app7->Location = System::Drawing::Point(324, 67);
			this->app7->Name = L"app7";
			this->app7->Size = System::Drawing::Size(37, 41);
			this->app7->TabIndex = 13;
			this->app7->TabStop = false;
			// 
			// app6
			// 
			this->app6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app6.Image")));
			this->app6->Location = System::Drawing::Point(281, 67);
			this->app6->Name = L"app6";
			this->app6->Size = System::Drawing::Size(37, 41);
			this->app6->TabIndex = 12;
			this->app6->TabStop = false;
			// 
			// app5
			// 
			this->app5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app5.Image")));
			this->app5->Location = System::Drawing::Point(238, 67);
			this->app5->Name = L"app5";
			this->app5->Size = System::Drawing::Size(37, 41);
			this->app5->TabIndex = 11;
			this->app5->TabStop = false;
			// 
			// app4
			// 
			this->app4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app4.Image")));
			this->app4->Location = System::Drawing::Point(195, 67);
			this->app4->Name = L"app4";
			this->app4->Size = System::Drawing::Size(37, 41);
			this->app4->TabIndex = 10;
			this->app4->TabStop = false;
			// 
			// app3
			// 
			this->app3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app3.Image")));
			this->app3->Location = System::Drawing::Point(141, 67);
			this->app3->Name = L"app3";
			this->app3->Size = System::Drawing::Size(37, 41);
			this->app3->TabIndex = 9;
			this->app3->TabStop = false;
			// 
			// app2
			// 
			this->app2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app2.Image")));
			this->app2->Location = System::Drawing::Point(98, 67);
			this->app2->Name = L"app2";
			this->app2->Size = System::Drawing::Size(37, 41);
			this->app2->TabIndex = 8;
			this->app2->TabStop = false;
			// 
			// app1
			// 
			this->app1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"app1.Image")));
			this->app1->Location = System::Drawing::Point(55, 67);
			this->app1->Name = L"app1";
			this->app1->Size = System::Drawing::Size(37, 41);
			this->app1->TabIndex = 7;
			this->app1->TabStop = false;
			// 
			// black_main
			// 
			this->black_main->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"black_main.Image")));
			this->black_main->Location = System::Drawing::Point(329, 189);
			this->black_main->Name = L"black_main";
			this->black_main->Size = System::Drawing::Size(155, 185);
			this->black_main->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->black_main->TabIndex = 6;
			this->black_main->TabStop = false;
			this->black_main->Click += gcnew System::EventHandler(this, &Form1::black_main_Click);
			// 
			// red3
			// 
			this->red3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red3.Image")));
			this->red3->Location = System::Drawing::Point(370, 67);
			this->red3->Name = L"red3";
			this->red3->Size = System::Drawing::Size(46, 18);
			this->red3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->red3->TabIndex = 5;
			this->red3->TabStop = false;
			// 
			// red
			// 
			this->red->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red.Image")));
			this->red->Location = System::Drawing::Point(422, 67);
			this->red->Name = L"red";
			this->red->Size = System::Drawing::Size(29, 18);
			this->red->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->red->TabIndex = 4;
			this->red->TabStop = false;
			// 
			// red2
			// 
			this->red2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red2.Image")));
			this->red2->Location = System::Drawing::Point(457, 67);
			this->red2->Name = L"red2";
			this->red2->Size = System::Drawing::Size(27, 18);
			this->red2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->red2->TabIndex = 3;
			this->red2->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->startToolStripMenuItem,
					this->stopToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 16);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(612, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->startToolStripMenuItem->Text = L"start";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::startToolStripMenuItem_Click);
			// 
			// stopToolStripMenuItem
			// 
			this->stopToolStripMenuItem->Enabled = false;
			this->stopToolStripMenuItem->Name = L"stopToolStripMenuItem";
			this->stopToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->stopToolStripMenuItem->Text = L"stop";
			this->stopToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::stopToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(611, 334);
			this->Controls->Add(this->black);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->black->ResumeLayout(false);
			this->black->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fun2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fun1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->burn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->atack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->black0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jump1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b_run2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b_run1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_run2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_run1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_talk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_walk2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_walk1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kn_stay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->run2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->run1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->app1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->black_main))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Media::SoundPlayer ^Pleer;// îïèñàíèå ýêçåìïëÿðà îáúåêòà
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		k = 0;
		Pleer = gcnew System::Media::SoundPlayer(); //ñîçäàíèåîáúåêòà
	}
private: System::Void startToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	timer1->Interval = 1;
	startToolStripMenuItem->Enabled = false;
	stopToolStripMenuItem->Enabled = true;
	Pleer->SoundLocation = "C:\\\sound.wav";
	
}
private: System::Void stopToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	timer1->Interval = 1;
	startToolStripMenuItem->Enabled = true;
	stopToolStripMenuItem->Enabled = false;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	k++;
	
	if (k==150) red1->Image = red2->Image, Pleer->Play();
	if (k == 430) red1->Image = red->Image;
	if (k==450) red1->Image = red3->Image;
	if (k == 790) red1->Image = red->Image;
	if (k == 810) red1->Image = red2->Image;
	if (k == 1300) red1->Image = red->Image;
	if (k == 1320) red1->Image = red3->Image;
	if (k == 1600) red1->Image = red->Image;
	if (k == 1610)   red1->Image = red2->Image;
	if (k==1800)   red1->Image = red->Image;
	if (k == 1830) black_main->Image = app1->Image;
	if (k == 1860) black_main->Image = app2->Image;
	if (k == 1890) black_main->Image = app3->Image;
	if (k == 1920) black_main->Image = app4->Image;
	if (k == 1950) black_main->Image = app5->Image;
	if (k == 1980) black_main->Image = app6->Image;
	if (k == 2010) black_main->Image = app7->Image;
	if (k == 2040) black_main->Image = app8->Image;
	if (k == 2200)red1->Image = run1->Image;
	if (k > 2200) red1->Left = red1->Left - 10; 
	if (k > 2250&&k<2500)   kn->Left = kn->Left + 1; 
	if (k == 2280) kn->Image = kn_walk1->Image;
	if (k == 2310) kn->Image = kn_walk2->Image;
	if (k == 2340) kn->Image = kn_walk1->Image;
	if (k == 2370) kn->Image = kn_walk2->Image;
	if (k == 2400) kn->Image = kn_walk1->Image;
	if (k == 2430) kn->Image = kn_walk2->Image;
	if (k == 2470) kn->Image = kn_walk1->Image;
	if (k == 2500) kn->Image = kn_stay->Image;


	if (k==2350) black_main->Image = app9->Image;
	if (k == 2380) black_main->Image = app8->Image;
	if (k == 2410) black_main->Image = app9->Image;
	if (k == 2430) black_main->Image = app8->Image;
	if (k == 2460) black_main->Image = app9->Image;
	if (k == 2490) black_main->Image = app8->Image;
	if (k == 2650) kn->Image = kn_talk->Image;
	if (k == 2890) kn->Image = kn_stay->Image;
	if (k == 2920) black_main->Image = bh->Image;
	if (k == 2940) black_main->Image = app8->Image;
	if (k == 2960) black_main->Image = bh->Image;
	if (k == 2980) black_main->Image = app8->Image;
	if (k == 3000) black_main->Image = bh->Image;
	if (k == 3020) black_main->Image = app8->Image;
	if (k == 3040) black_main->Image = bh->Image;
	//fire
	if (k == 2980) fire->Image = fire1->Image;
	if (k == 3000) fire->Image= fire2->Image;
	if (k == 3020) fire->Image = fire3->Image;
	if (k == 3040) fire->Image = fire4->Image;
	if (k > 3060 && k < 3400)   fire->Left = fire->Left - 2, fire->Top = fire->Top + 2;
	//run away
	if (k == 3060) kn->Image = kn_run1->Image;
	if (kn->Image==kn_run1->Image&&k%20==0) kn->Image = kn_run2->Image,k++;
	if (kn->Image == kn_run2->Image&&k % 20 == 0) kn->Image = kn_run1->Image,k++;
	if (k > 3060&&k<3170) kn->Left = kn->Left-2;
	//black run
	if (k == 3122) black_main->Image = b_run1->Image;
	if (black_main->Image == b_run1->Image&& k % 25 == 0) black_main->Image = b_run2->Image, k++;
	if (black_main->Image == b_run2->Image&& k % 25 == 0) black_main->Image = b_run1->Image, k++;
	if (k > 3120 && k < 3230) black_main->Left = black_main->Left - 2;
	if (k == 3230) black_main->Image = app8->Image;
	//jump
	if (k == 3170) kn->Image = jump1->Image;
	if (k == 3231) kn->Image = jump2->Image;
	if (k > 3231&&k<3280) kn->Top = kn->Top -3;
	if (k>3281&&k<3400) kn->Left= kn->Left + 3;
	if (k == 3331) kn->Image = jump3->Image;
	if (k > 3400 && k < 3450) kn->Top = kn->Top + 3;
	if (k == 3425) kn->Image = jump2->Image;
	if (k == 3460) kn->Image = jump4->Image;
	if (k == 3500) kn->Image = kn_stay->Image;
	if (k == 3530) kn->Image = atack->Image;
	if (k == 3560) black_main->Image = burn->Image;
	if (k == 3590) black_main->Image = black0->Image;

	if (k == 3630) kn->Image = fun1->Image;
	if (kn->Image == fun1->Image&&k % 20 == 0) kn->Image = fun2->Image, k++;
	if (kn->Image == fun2->Image&&k % 20 == 0) kn->Image = fun1->Image, k++;
	
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void black_main_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
