#pragma once
#include <ctime>
#include <iostream>
#include <windows.h> 
#include <chrono>
#include <ctime> 
#include "MyForm1.h"
#include "MyForm2.h"

namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//матрица чисел
	int py[4][4];

	int py1[4][4] = {{1,2,3,4},
					   {5,6,7,8},
						{9,10,11,0},
						{13,14,15,12} };

	//размерность
	int n = 4;
	int m = 4;
	/*
	int py[4][4] = { {1,2,3,4},
				{5,6,7,8},
						{9,10,11,12},
						{13,14,0,15} };
						*/

	//https://ru.wikipedia.org/wiki/%D0%98%D0%B3%D1%80%D0%B0_%D0%B2_15 победные комбинации
	int victiry1[4][4] = { {1,2,3,4},
						   {5,6,7,8},
							{9,10,11,12},
							{13,14,15,0} };

	int victiry2[4][4] = { {0,1,2,3},
						   {4,5,6,7},
							{8,9,10,11},
							{12,13,14,15} };

	int victiry3[4][4] = { {13,9,5,1},
						 {	14,10,6,2},
						 {	15,11,7,3},
						 {	 0,12,8,4} };

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		DateTime date_start;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ правилаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ простаяToolStripMenuItem;

		   DateTime date_end;
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекордыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::ToolStripMenuItem^ новаяToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::ComponentModel::IContainer^ components;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекордыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правилаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->простаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(646, 38);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->простаяToolStripMenuItem,
					this->новаяToolStripMenuItem, this->рекордыToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(78, 34);
			this->файлToolStripMenuItem->Text = L"Игра";
			// 
			// новаяToolStripMenuItem
			// 
			this->новаяToolStripMenuItem->Name = L"новаяToolStripMenuItem";
			this->новаяToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->новаяToolStripMenuItem->Text = L"Сложная";
			this->новаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::новаяToolStripMenuItem_Click);
			// 
			// рекордыToolStripMenuItem
			// 
			this->рекордыToolStripMenuItem->Name = L"рекордыToolStripMenuItem";
			this->рекордыToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->рекордыToolStripMenuItem->Text = L"Рекорды";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->выходToolStripMenuItem->Text = L"Выход";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->правилаToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(111, 34);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// правилаToolStripMenuItem
			// 
			this->правилаToolStripMenuItem->Name = L"правилаToolStripMenuItem";
			this->правилаToolStripMenuItem->Size = System::Drawing::Size(214, 40);
			this->правилаToolStripMenuItem->Text = L"Правила";
			this->правилаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::правилаToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(21, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(172, 52);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(323, 52);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(474, 52);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 150);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(21, 203);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 150);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(172, 203);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 150);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(323, 203);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 150);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(474, 203);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 150);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(21, 354);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(150, 150);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(172, 354);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(150, 150);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 11;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(323, 354);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(150, 150);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 12;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(474, 354);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(150, 150);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 13;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(21, 505);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(150, 150);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 14;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(172, 505);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(150, 150);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 15;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(323, 505);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(150, 150);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 16;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(474, 505);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(150, 150);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 17;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 676);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(646, 71);
			this->panel1->TabIndex = 18;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Время:";
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// простаяToolStripMenuItem
			// 
			this->простаяToolStripMenuItem->Name = L"простаяToolStripMenuItem";
			this->простаяToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->простаяToolStripMenuItem->Text = L"Простая";
			this->простаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::простаяToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 747);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Пятнашка";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//старт игры - простая
		void start1()
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					py[i][j] = py1[i][j];
				}
			}


			refresh();
			date_start = DateTime::Now;
			timer1->Enabled = true;
		}



		//старт игры - Сложная
		void start()
		{
			//убираем предыдущую матрицу
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					py[i][j] = -1;
				}
			}
			//случайныйм образом генерируем матрицу игры
			srand((unsigned)time(NULL));
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					while(1)
					{
						int fl = 0;
						int num = rand() % 16; // Каждый элемент случайному числу от 0 до 15
						//MessageBox::Show(Convert::ToString(num));
						//проверяем чтобы не было повторений
						for (int q = 0; q < n; q++)
						{
							for (int w = 0; w < m; w++)
							{
								if (py[q][w] == num)
								{
									fl = 1;
									break;
								}
							}
							if(fl == 1)
								break;
						}
						if (fl == 0)
						{
							py[i][j] = num;
							break;
						}

					}
				}
			}
			refresh();
			date_start = DateTime::Now;
			timer1->Enabled = true;
		}

		//обновляем содержимое картинок согласно матрице
		void refresh()
		{
			pictureBox1->ImageLocation = "picture/" + py[0][0] + ".png";
			pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
			//загружает изображение, адрес которого указан в свойстве 
			//ImageLocation: 
			pictureBox1->Load();

			pictureBox2->ImageLocation = "picture/" + py[0][1] + ".png";
			pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox2->Load();

			pictureBox3->ImageLocation = "picture/" + py[0][2] + ".png";
			pictureBox3->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox3->Load();

			pictureBox4->ImageLocation = "picture/" + py[0][3] + ".png";
			pictureBox4->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox4->Load();

			pictureBox5->ImageLocation = "picture/" + py[1][0] + ".png";
			pictureBox5->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox5->Load();

			pictureBox6->ImageLocation = "picture/" + py[1][1] + ".png";
			pictureBox6->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox6->Load();

			pictureBox7->ImageLocation = "picture/" + py[1][2] + ".png";
			pictureBox7->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox7->Load();

			pictureBox8->ImageLocation = "picture/" + py[1][3] + ".png";
			pictureBox8->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox8->Load();

			pictureBox9->ImageLocation = "picture/" + py[2][0] + ".png";
			pictureBox9->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox9->Load();

			pictureBox10->ImageLocation = "picture/" + py[2][1] + ".png";
			pictureBox10->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox10->Load();

			pictureBox11->ImageLocation = "picture/" + py[2][2] + ".png";
			pictureBox11->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox11->Load();

			pictureBox12->ImageLocation = "picture/" + py[2][3] + ".png";
			pictureBox12->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox12->Load();

			pictureBox13->ImageLocation = "picture/" + py[3][0] + ".png";
			pictureBox13->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox13->Load();

			pictureBox14->ImageLocation = "picture/" + py[3][1] + ".png";
			pictureBox14->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox14->Load();

			pictureBox15->ImageLocation = "picture/" + py[3][2] + ".png";
			pictureBox15->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox15->Load();

			pictureBox16->ImageLocation = "picture/" + py[3][3] + ".png";
			pictureBox16->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox16->Load();
			victory();
		}

		//сравнение массивов (в нашем случае текущего и победных комбинаций)
		bool mas_compare(int a[4][4], int b[4][4])
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if (a[i][j] != b[i][j])
						return false;
				}
			}
			return true;
		}

		void victory()
		{

			//Convert::ToString(mas_compare(py, victiry2))
			if (mas_compare(py, victiry1))
			{
				MyForm2^ f3 = gcnew MyForm2();
				f3->Show();
				f3->label2->Text = label2->Text;
			}

			if (mas_compare(py, victiry2))
			{
				MyForm2^ f3 = gcnew MyForm2();
				f3->Show();
				f3->label2->Text = label2->Text;;
			}


			if (mas_compare(py, victiry3))
			{
				MyForm2^ f3 = gcnew MyForm2();
				f3->Show();
				f3->label2->Text = label2->Text;
			}



		}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		


		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		


	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void новаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	start();	 
	

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	int x = 0;
	int y = 0;
	if (py[x-1][y] == 0 && x - 1>=0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x -1][y] = t;

	}
	if (py[x + 1][y] == 0 && x +1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x +1][y] = t;

	}
	if (py[x][y-1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y-1];
		py[x][y-1] = t;

	}
	if (py[x][y+1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y+1];
		py[x][y+1] = t;

	}
	refresh();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 0;
	int y = 1;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 0;
	int y = 2;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 0;
	int y = 3;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 1;
	int y = 0;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 1;
	int y = 1;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 1;
	int y = 2;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 1;
	int y = 3;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 2;
	int y = 0;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 2;
	int y = 1;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 2;
	int y = 2;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 2;
	int y = 3;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 3;
	int y = 0;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 3;
	int y = 1;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 3;
	int y = 2;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = 3;
	int y = 3;
	if (py[x - 1][y] == 0 && x - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x - 1][y];
		py[x - 1][y] = t;

	}
	if (py[x + 1][y] == 0 && x + 1 < m)
	{
		int t = py[x][y];
		py[x][y] = py[x + 1][y];
		py[x + 1][y] = t;

	}
	if (py[x][y - 1] == 0 && y - 1 >= 0)
	{
		int t = py[x][y];
		py[x][y] = py[x][y - 1];
		py[x][y - 1] = t;

	}
	if (py[x][y + 1] == 0 && y + 1 < n)
	{
		int t = py[x][y];
		py[x][y] = py[x][y + 1];
		py[x][y + 1] = t;

	}
	refresh();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//https://stackoverflow.com/questions/10963448/subtracting-two-datetime-objects-in-c-cli
	date_end = DateTime::Now;
	TimeSpan span = date_end.Subtract(date_start);
	String^ str= Convert::ToString(span);
	str = str->Substring(0, 8);
	label2->Text = str;
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void правилаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//cоздание и показ формы
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void простаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	start1();
}
};
}
