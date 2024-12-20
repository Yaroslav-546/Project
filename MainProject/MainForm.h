#pragma once
#include <string>
#include <list>
namespace MainProject {

	#include <stdlib.h>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: bool _open = false;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    protected:

	protected:

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->label1->Location = System::Drawing::Point(44, 24);
            this->label1->Margin = System::Windows::Forms::Padding(0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(206, 16);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Удаление ненужных программ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->label2->Location = System::Drawing::Point(62, 45);
            this->label2->Margin = System::Windows::Forms::Padding(0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(177, 16);
            this->label2->TabIndex = 3;
            this->label2->Text = L"И Оключение телеметрии";
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->checkedListBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
                L"Yandex.Music", L"ZuneMusic", L"XboxApp",
                    L"XboxGameOverlay", L"XboxGamingOverlay", L"Xbox.TCUI", L"XboxSpeechToTextOverlay", L"XboxGameCallableUI", L"People", L"SkypeApp",
                    L"GetHelp", L"StickyNotes", L"MixedReality.Portal", L"BingWeather", L"WindowsMaps", L"MSPaint", L"MicrosoftOneNote", L"Cortana",
                    L"ParentalControl", L"PeopleExperienceHost", L"OneNote", L"FeedBackHub", L"SolitaireCollection", L"Test"
            });
            this->checkedListBox1->Location = System::Drawing::Point(39, 96);
            this->checkedListBox1->Margin = System::Windows::Forms::Padding(0);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(201, 90);
            this->checkedListBox1->TabIndex = 5;
            this->checkedListBox1->Visible = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->ForeColor = System::Drawing::Color::Black;
            this->button1->Location = System::Drawing::Point(218, 73);
            this->button1->Margin = System::Windows::Forms::Padding(0);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(22, 23);
            this->button1->TabIndex = 6;
            this->button1->Text = L"V";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->label3);
            this->panel1->Location = System::Drawing::Point(40, 73);
            this->panel1->Margin = System::Windows::Forms::Padding(0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(178, 23);
            this->panel1->TabIndex = 7;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(3, 2);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(57, 16);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Список:";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->button3->Location = System::Drawing::Point(9, 195);
            this->button3->Margin = System::Windows::Forms::Padding(0);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(266, 34);
            this->button3->TabIndex = 8;
            this->button3->Text = L"Выполнить";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Location = System::Drawing::Point(0, 1);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(287, 282);
            this->panel2->TabIndex = 9;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->Location = System::Drawing::Point(53, 154);
            this->button5->Margin = System::Windows::Forms::Padding(10);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(179, 39);
            this->button5->TabIndex = 3;
            this->button5->Text = L"Отключить";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
            // 
            // label4
            // 
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(38, 25);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(206, 53);
            this->label4->TabIndex = 1;
            this->label4->Text = L"Передь тем как продолжить необходимо включить запуск powershell скриптов ";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(53, 213);
            this->button4->Margin = System::Windows::Forms::Padding(10);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(179, 39);
            this->button4->TabIndex = 2;
            this->button4->Text = L"Уже стоит";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(53, 95);
            this->button2->Margin = System::Windows::Forms::Padding(10);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(179, 39);
            this->button2->TabIndex = 0;
            this->button2->Text = L"Включить";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button6->Location = System::Drawing::Point(9, 239);
            this->button6->Margin = System::Windows::Forms::Padding(0);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(266, 34);
            this->button6->TabIndex = 10;
            this->button6->Text = L"Вернуться к выбору ";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->ClientSize = System::Drawing::Size(284, 282);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button6);
            this->Cursor = System::Windows::Forms::Cursors::Default;
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximumSize = System::Drawing::Size(300, 321);
            this->MinimumSize = System::Drawing::Size(300, 321);
            this->Name = L"MainForm";
            this->Text = L"Programm";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{

			if (!_open) 
			{
				this->checkedListBox1->Visible = true;
				_open = true;
			}

			else
			{
				this->checkedListBox1->Visible = false;
				_open = false;
			}
		}

		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
		{
            for (int i = 0; i < this->checkedListBox1->Items->Count; i++)
            {
                if (this->checkedListBox1->GetItemChecked(i))
                {
                    System::String^ text = this->checkedListBox1->Items[i]->ToString();
                    String^ stringpath = "start powershell.exe -f ..\\MainProject\\Delete" + text + ".ps1";
                    std::string res = "";
                    for (int i = 0; i < stringpath->Length; i++)
                        res += (char)stringpath[i];

                    const char* constpath = res.c_str();
                    system(constpath);
                }
            }
		}

        private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            system("start powershell.exe Set-ExecutionPolicy RemoteSigned –Force");
            this->panel2->Visible = false;
            this->label4->Visible = false;
            this->button2->Visible = false;
            this->button4->Visible = false;
            this->button5->Visible = false;
        }
        private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            this->panel2->Visible = false;
            this->label4->Visible = false;
            this->button2->Visible = false;
            this->button4->Visible = false;
            this->button5->Visible = false;
        }
        private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            system("start powershell.exe Set-ExecutionPolicy Default –Force");
            this->panel2->Visible = false;
            this->label4->Visible = false;
            this->button2->Visible = false;
            this->button4->Visible = false;
            this->button5->Visible = false;
        }
        private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            this->panel2->Visible = true;
            this->label4->Visible = true;
            this->button2->Visible = true;
            this->button4->Visible = true;
            this->button5->Visible = true;
        }
};
} 
