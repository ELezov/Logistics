#pragma once
#include "Form2.h"
#include "Form3.h"
namespace _03_DataGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hELPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  avtorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tASKToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox5;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hELPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->avtorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tASKToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mstr =";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(84, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"11";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(84, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"7";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ncol =";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(249, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(70, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"-10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(172, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"a_left =";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(249, 63);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 26);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(172, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"b_right =";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(348, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 27);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Process";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Gold;
			this->button2->Location = System::Drawing::Point(818, 460);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ÇÀÊÐÛÒÜ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->hELPToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(944, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// hELPToolStripMenuItem
			// 
			this->hELPToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->avtorToolStripMenuItem, 
				this->tASKToolStripMenuItem});
			this->hELPToolStripMenuItem->Name = L"hELPToolStripMenuItem";
			this->hELPToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->hELPToolStripMenuItem->Text = L"HELP";
			// 
			// avtorToolStripMenuItem
			// 
			this->avtorToolStripMenuItem->Name = L"avtorToolStripMenuItem";
			this->avtorToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->avtorToolStripMenuItem->Text = L"Avtor";
			this->avtorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::avtorToolStripMenuItem_Click);
			// 
			// tASKToolStripMenuItem
			// 
			this->tASKToolStripMenuItem->Name = L"tASKToolStripMenuItem";
			this->tASKToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->tASKToolStripMenuItem->Text = L"TASK";
			this->tASKToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tASKToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(16, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(686, 241);
			this->dataGridView1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Navy;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(467, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 27);
			this->button3->TabIndex = 12;
			this->button3->Text = L"PATH";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(423, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Application.ExeName";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(423, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Path";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(839, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(839, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(825, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"MAX";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(825, 184);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Õîòÿ áû îäèí íîëü";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(31, 420);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(145, 20);
			this->textBox5->TabIndex = 19;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(944, 493);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"MENU  DataGridView";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this -> Close();
			 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
                 this -> Close();
		 }
private: System::Void avtorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //AVTOR  Form2
			 Form2 ^fA = gcnew Form2();
			 fA->Show();
		 }
private: System::Void tASKToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TASK  Form3
			 Form3 ^fF = gcnew Form3();
			 fF->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Process
			 
			 extern int m;
			 extern int n;
			 extern int a;
			 extern int b;
			 extern int MAS[MM][NN];
			 //------------PARAMETERS ----------------
			  String  ^st;
              st = this -> textBox1 ->Text;
			  m  = Convert::ToInt32(st);
              st = this -> textBox2 ->Text;
			  n  = Convert::ToInt32(st);
			  st = this -> textBox3 ->Text;
			  a  = Convert::ToInt32(st);
              st = this -> textBox4 ->Text;
			  b  = Convert::ToInt32(st);
			  // --------------------------------------
			 //----------- Fill MAS[m,n] --------------
			  int fl=0;
			  for(int i = 0; i < m; i++)
				  for (int j = 0; j < n; j++){
					  int m = a + rand() % (b - a);
					  MAS[i][j] = m;
				  }
				for (int j = 0; j < n; j++)
				  for(int i = 0; i < m; i++){
					  if (MAS[i][j] == 0){
						  fl+=1; 
						  break;}
					  
				  } 
				  int stmax=-1;
				  int max=-1;
				  int tmax=0;
				  for(int i = 0; i < m; i++){
						for (int j = 0; j < n; j++){
							if (MAS[i][j] == MAS[i][j+1]) tmax+=1;
							if (MAS[i][j] != MAS[i][j+1]) {
								if (tmax>=max) {max=tmax; stmax=i+1;} 
								tmax=0;
							}
						}
						
						if (tmax>max) {max=tmax; stmax=i;} 
								tmax=0;
								this -> textBox5 -> Text+= max.ToString();
				  }
			//String  ^maxst, flst;
			//max  = IntToStr(maxst);
			//fl  = IntToStr(flst);
			this -> label7 -> Text = stmax.ToString();
			this -> label8 -> Text = fl.ToString();
			this -> dataGridView1 -> RowCount = m;
			this -> dataGridView1 -> ColumnCount = n;
			// Columns  Numbers
      for (int i = 0; i < n; i++)
				this ->dataGridView1->Columns[i]->HeaderText = "  " + (i + 1).ToString() + "  ";
				  //  Row Numbers
            for (int i = 0; i < m; i++)
                 this ->dataGridView1->Rows[i]->HeaderCell->Value
                                       = (i + 1).ToString();						
				// Value [i][j]
				for(int i = 0; i< m; i++)
							 for(int j = 0; j< n; j++){								
								 double r = MAS[i][j];
								 String^ st =  Convert::ToString(r);
								 // Clear Cell
                this -> dataGridView1 ->Rows[i]->Cells[j] -> Style -> BackColor = 
														System::Drawing::Color::White;
				this -> dataGridView1 ->Rows[i]->Cells[j]-> Value = st;
							 }
							 //DIAGONALES
			/*if(m==n){
				for (int i = 0; i < m; i++)
					this -> dataGridView1 ->Rows[i]->Cells[i] -> Style -> BackColor = 
														System::Drawing::Color::Aqua;
				for (int j = 0; j < n; j++)
					this -> dataGridView1 ->Rows[j]->Cells[n -1 - j] -> Style -> BackColor = 
														System::Drawing::Color::Aqua;
			}*/
			 
				

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^st;
			 st = Application :: ExecutablePath;
			 this -> label5 -> Text = st;
			 
			 st = System :: IO ::Path::GetDirectoryName(st);
			 this -> label6 -> Text = st;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

