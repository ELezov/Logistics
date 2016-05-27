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






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hELPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  avtorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tASKToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;







	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hELPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->avtorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tASKToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nodes =";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(88, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"5";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(181, 68);
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
			this->button2->Location = System::Drawing::Point(1336, 636);
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
			this->menuStrip1->Size = System::Drawing::Size(1462, 24);
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
			this->tASKToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tASKToolStripMenuItem.BackgroundImage")));
			this->tASKToolStripMenuItem->Name = L"tASKToolStripMenuItem";
			this->tASKToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->tASKToolStripMenuItem->Text = L"TASK";
			this->tASKToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tASKToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(523, 80);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(927, 248);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 250);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(469, 551);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(523, 385);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView2->Size = System::Drawing::Size(927, 244);
			this->dataGridView2->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Edges =";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(88, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 26);
			this->textBox2->TabIndex = 22;
			this->textBox2->Text = L"5";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1462, 669);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
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
			 extern int MAS[NN][NN];
			 
			 //------------PARAMETERS ----------------
			  String  ^st, ^st1;
			   int fl;
              st = this -> textBox1 ->Text;
			  n  = Convert::ToInt32(st);
			  st = this -> textBox2 ->Text;
			  fl  = Convert::ToInt32(st);

			  int nodes[NN][NN];
			  int in[NN][NN];
			  
			  int ed=0;
			  
			  for(int i = 0; i < n; i++)
				  for (int j = 0; j < n; j++)
					  MAS[i][j] = 0;
				
			  
			  while(ed<fl){
				  int i,j;
				  i = (rand() % n);
				  j = (rand() % n);
				  if (i != j && !MAS[i][j] && !MAS[j][i]){ 
					  MAS[i][j] = (rand() % n)+1;
				      ed++;
				  }
			  }

			//for(int i = 0; i < n; i++)
				//  for (int j = 0; j < n; j++)
					//	 if (MAS[i][j]!=0) fl++;
			//fl=fl/2;
			st="STEP";
			this -> dataGridView1 -> RowCount = n;
			this -> dataGridView1 -> ColumnCount = n;
			this -> dataGridView2 -> RowCount = n;
			this -> dataGridView2 -> ColumnCount = fl+1;
			// Columns  Numbers
			for (int i = 0; i < n; i++)
				this ->dataGridView1->Columns[i]->HeaderText = "  " + (i + 1).ToString() + "  ";
				  //  Row Numbers
            for (int i = 0; i < n; i++)
                 this ->dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();						
				// Value [i][j]
			for (int i = 0; i < fl; i++)
				this ->dataGridView2->Columns[i]->HeaderText = "  " + (i + 1).ToString() + "  ";
				  //  Row Numbers
            for (int i = 0; i < n; i++)
                 this ->dataGridView2->Rows[i]->HeaderCell->Value = (i + 1).ToString();	

			this ->dataGridView2->Columns[fl]->HeaderText = st;	

				for(int i = 0; i< n; i++)
							 for(int j = 0; j< n; j++){								
								 double r = MAS[i][j];
								 String^ st =  Convert::ToString(r);
								 // Clear Cell
                this -> dataGridView1 ->Rows[i]->Cells[j] -> Style -> BackColor = 
														System::Drawing::Color::White;
				this -> dataGridView1 ->Rows[i]->Cells[j]-> Value = st;
							 }
				float x,y,prir,prir0;
				Graphics ^gr = this -> pictureBox1 -> CreateGraphics(); 
				Color ^col = gcnew Color(); 
				Brush ^ zal = gcnew SolidBrush(Color::Black);
				pictureBox1 -> Refresh();
				prir0=2*3.14/(n);
				prir=prir0;
				int rad=150;
			    for (int i = 0; i < n; i++) {

					nodes[0][i]=rad*sin(prir)+200;
					nodes[1][i]=rad*cos(prir)+200;
					prir+=prir0;
					gr->TextRenderingHint=System::Drawing::Text::TextRenderingHint::AntiAlias;
					Brush ^ zal = gcnew SolidBrush(Color::Black);
					gr->FillEllipse(zal, nodes[0][i]-15, nodes[1][i]-15, 30, 30);

				}
				Pen ^mypen = gcnew Pen (col -> Red,2);
			    //gr->DrawLine(mypen, nodes[0][1],nodes[1][1], nodes[0][2],nodes[1][2]);


				  for(int i = 0; i < n; i++)
				  for (int j = 0; j <= fl; j++)
					  in[i][j]=0;

				  StringFormat^ drawFormat = gcnew StringFormat();
				  zal = gcnew SolidBrush(Color::White);
				  System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 18);   
				 
				  int k=0;
				  prir0=2*3.14/(n);
				  prir=prir0;
				  rad=5;
				  for(int i = 0; i < n; i++)
					for (int j = 0; j < n; j++)
					  if (MAS[i][j] != 0) 
					  
					  {
						  				st = Convert::ToString(MAS[i][j]); 
										String^ drawString = st;
										zal = gcnew SolidBrush(Color::White);
										System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);   
										gr->DrawLine(mypen, nodes[0][i],nodes[1][i], nodes[0][j],nodes[1][j]);
										
										
										int sx=nodes[0][j];
										int sy=nodes[1][j];

										sx=(nodes[0][i]+(sx-nodes[0][i])*cos(3.14/12)-(sy-nodes[1][i])*sin(3.14/12));
										sy=(nodes[1][i]+(sx-nodes[0][i])*sin(3.14/12)+(sy-nodes[1][i])*cos(3.14/12));

										sx=abs(sx+nodes[0][i])/2;
										sy=abs(sy+nodes[1][i])/2;

										sx=abs(sx+nodes[0][i])/2;
										sy=abs(sy+nodes[1][i])/2;
										
										gr->DrawLine(mypen, nodes[0][i],nodes[1][i], sx, sy);
										
										sx=nodes[0][j];
									    sy=nodes[1][j];

										sx=(nodes[0][i]+(sx-nodes[0][i])*cos(-3.14/12)-(sy-nodes[1][i])*sin(-3.14/12));
										sy=(nodes[1][i]+(sx-nodes[0][i])*sin(-3.14/12)+(sy-nodes[1][i])*cos(-3.14/12));

										sx=abs(sx+nodes[0][i])/2;
										sy=abs(sy+nodes[1][i])/2;

										sx=abs(sx+nodes[0][i])/2;
										sy=abs(sy+nodes[1][i])/2;
										
										gr->DrawLine(mypen, nodes[0][i],nodes[1][i], sx, sy);




										int cA=abs(nodes[0][j]+nodes[0][i])/2;
										int cB=abs(nodes[1][j]+nodes[1][i])/2;

										gr->FillEllipse(zal, cA-15, cB-15, 20, 20);
										zal = gcnew SolidBrush(Color::Red);
										gr->DrawString(drawString, drawFont, zal, cA-10, cB-10, drawFormat);

										in[i][k]=1;	
										in[j][k]=-1;	
										k++;
										prir+=prir0;
					  }

				for(int i = 0; i < n; i++)
					 for (int j = 0; j < fl; j++)						 
						 in[i][fl]=in[i][fl]+abs(in[i][j]);	

				for(int i = 0; i< n; i++)
							 for(int j = 0; j<fl+1; j++){								
								 double r = in[i][j];
								 String^ st =  Convert::ToString(r);
								 // Clear Cell
                this -> dataGridView2 ->Rows[i]->Cells[j] -> Style -> BackColor = 
														System::Drawing::Color::White;
				this -> dataGridView2 ->Rows[i]->Cells[j]-> Value = st;
							 }


				 for(int i = 0; i < n; i++){
				StringFormat^ drawFormat = gcnew StringFormat();
					st = Convert::ToString(i+1); 
					String^ drawString = st;
					zal = gcnew SolidBrush(Color::White);
					System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 18);   
					gr->DrawString(drawString, drawFont, zal, nodes[0][i]-10, nodes[1][i]-15, drawFormat);}





}	

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			}
//}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}

