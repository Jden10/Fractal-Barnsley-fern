#pragma once

namespace FractalBarnsleyfern {

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


	private: System::Windows::Forms::Label^ label_color;
	private: System::Windows::Forms::TextBox^ textBox_iteration;
	private: System::Windows::Forms::Label^ label_iteration;
	private: System::Windows::Forms::Label^ label_params;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;


	private: System::Windows::Forms::Button^ button_chose_color;

		   // для использования по всему коду
	private:
		int side_square;
		int x_0;
		int y_0;



	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::TrackBar^ trackBar_percent;
	private: System::Windows::Forms::Label^ label_plus;
	private: System::Windows::Forms::Label^ label_neg;
	private: System::Windows::Forms::Label^ label_percent;
	private: System::Windows::Forms::CheckBox^ checkBox_ver;
	private: System::Windows::Forms::CheckBox^ checkBox_hor;
	private: System::Windows::Forms::ToolTip^ toolTip_size;
	private: System::Windows::Forms::Label^ label_p1;
	private: System::Windows::Forms::Label^ label_p2;
	private: System::Windows::Forms::Label^ label_p3;
	private: System::Windows::Forms::Label^ label_p4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolTip^ toolTip_params;
	private: System::Windows::Forms::ToolTip^ toolTip_p1;
	private: System::Windows::Forms::ToolTip^ toolTip_p2;
	private: System::Windows::Forms::ToolTip^ toolTip_p3;
	private: System::Windows::Forms::ToolTip^ toolTip_p4;
	private: System::Windows::Forms::Button^ button_save;


	public:
		Form1(void)
		{

			InitializeComponent();

			side_square = Width * 8.5 / 10; // Длина стороны квадрата (85% ширины формы)
			x_0 = (Width - side_square) / 2; // Отступ по горизонтали (координата левого верхнего угла квадрата)
			y_0 = x_0 / 2; // Отступ по вертикали (координата левого верхнего угла квадрата)


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
	private: System::Windows::Forms::Button^ button_relize;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;



	protected:

	protected:

	protected:



	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button_relize = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label_color = (gcnew System::Windows::Forms::Label());
			this->button_chose_color = (gcnew System::Windows::Forms::Button());
			this->textBox_iteration = (gcnew System::Windows::Forms::TextBox());
			this->label_iteration = (gcnew System::Windows::Forms::Label());
			this->label_params = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar_percent = (gcnew System::Windows::Forms::TrackBar());
			this->label_plus = (gcnew System::Windows::Forms::Label());
			this->label_neg = (gcnew System::Windows::Forms::Label());
			this->label_percent = (gcnew System::Windows::Forms::Label());
			this->checkBox_ver = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_hor = (gcnew System::Windows::Forms::CheckBox());
			this->toolTip_size = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label_p1 = (gcnew System::Windows::Forms::Label());
			this->label_p2 = (gcnew System::Windows::Forms::Label());
			this->label_p3 = (gcnew System::Windows::Forms::Label());
			this->label_p4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->toolTip_params = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_p1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_p2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_p3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_p4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button_save = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_percent))->BeginInit();
			this->SuspendLayout();
			// 
			// button_relize
			// 
			this->button_relize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button_relize->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_relize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_relize->ForeColor = System::Drawing::Color::Black;
			this->button_relize->Location = System::Drawing::Point(481, 746);
			this->button_relize->Name = L"button_relize";
			this->button_relize->Size = System::Drawing::Size(107, 42);
			this->button_relize->TabIndex = 0;
			this->button_relize->Text = L"Построить";
			this->button_relize->UseVisualStyleBackColor = false;
			this->button_relize->Click += gcnew System::EventHandler(this, &Form1::button_relize_Click);
			// 
			// label_color
			// 
			this->label_color->AutoSize = true;
			this->label_color->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_color->Location = System::Drawing::Point(60, 748);
			this->label_color->Name = L"label_color";
			this->label_color->Size = System::Drawing::Size(44, 18);
			this->label_color->TabIndex = 1;
			this->label_color->Text = L"Цвет";
			// 
			// button_chose_color
			// 
			this->button_chose_color->BackColor = System::Drawing::Color::LimeGreen;
			this->button_chose_color->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_chose_color->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_chose_color->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_chose_color->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->button_chose_color->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_chose_color->Location = System::Drawing::Point(19, 740);
			this->button_chose_color->Name = L"button_chose_color";
			this->button_chose_color->Size = System::Drawing::Size(35, 34);
			this->button_chose_color->TabIndex = 3;
			this->button_chose_color->UseVisualStyleBackColor = false;
			this->button_chose_color->Click += gcnew System::EventHandler(this, &Form1::button_chose_color_Click);
			// 
			// textBox_iteration
			// 
			this->textBox_iteration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox_iteration->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_iteration->Location = System::Drawing::Point(19, 696);
			this->textBox_iteration->Name = L"textBox_iteration";
			this->textBox_iteration->Size = System::Drawing::Size(76, 26);
			this->textBox_iteration->TabIndex = 4;
			this->textBox_iteration->Text = L"10000";
			this->textBox_iteration->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_iteration
			// 
			this->label_iteration->AutoSize = true;
			this->label_iteration->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_iteration->Location = System::Drawing::Point(101, 698);
			this->label_iteration->Name = L"label_iteration";
			this->label_iteration->Size = System::Drawing::Size(163, 18);
			this->label_iteration->TabIndex = 5;
			this->label_iteration->Text = L"Количество итераций";
			// 
			// label_params
			// 
			this->label_params->AutoSize = true;
			this->label_params->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_params->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_params->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label_params->Location = System::Drawing::Point(420, 571);
			this->label_params->Name = L"label_params";
			this->label_params->Size = System::Drawing::Size(168, 18);
			this->label_params->TabIndex = 6;
			this->label_params->Text = L"Параметры фрактала";
			this->label_params->MouseLeave += gcnew System::EventHandler(this, &Form1::label_params_MouseLeave);
			this->label_params->MouseHover += gcnew System::EventHandler(this, &Form1::label_params_MouseHover);
			this->label_params->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::label_params_MouseMove);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->Location = System::Drawing::Point(479, 608);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 22);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown2->Location = System::Drawing::Point(479, 636);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 22);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown3->Location = System::Drawing::Point(479, 664);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(60, 22);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->numericUpDown4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown4->Location = System::Drawing::Point(479, 692);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 22);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown_ValueChanged);
			// 
			// trackBar_percent
			// 
			this->trackBar_percent->LargeChange = 10;
			this->trackBar_percent->Location = System::Drawing::Point(39, 570);
			this->trackBar_percent->Maximum = 200;
			this->trackBar_percent->Minimum = 10;
			this->trackBar_percent->Name = L"trackBar_percent";
			this->trackBar_percent->Size = System::Drawing::Size(104, 45);
			this->trackBar_percent->SmallChange = 10;
			this->trackBar_percent->TabIndex = 8;
			this->trackBar_percent->TickFrequency = 0;
			this->trackBar_percent->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar_percent->Value = 100;
			this->trackBar_percent->Scroll += gcnew System::EventHandler(this, &Form1::trackBar_percent_Scroll);
			this->trackBar_percent->MouseLeave += gcnew System::EventHandler(this, &Form1::trackBar_percent_MouseLeave);
			this->trackBar_percent->MouseHover += gcnew System::EventHandler(this, &Form1::trackBar_percent_MouseHover);
			// 
			// label_plus
			// 
			this->label_plus->AutoSize = true;
			this->label_plus->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_plus->Location = System::Drawing::Point(137, 571);
			this->label_plus->Name = L"label_plus";
			this->label_plus->Size = System::Drawing::Size(17, 18);
			this->label_plus->TabIndex = 9;
			this->label_plus->Text = L"+";
			// 
			// label_neg
			// 
			this->label_neg->AutoSize = true;
			this->label_neg->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_neg->Location = System::Drawing::Point(27, 568);
			this->label_neg->Name = L"label_neg";
			this->label_neg->Size = System::Drawing::Size(13, 18);
			this->label_neg->TabIndex = 9;
			this->label_neg->Text = L"-";
			// 
			// label_percent
			// 
			this->label_percent->AutoSize = true;
			this->label_percent->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_percent->Location = System::Drawing::Point(160, 571);
			this->label_percent->Name = L"label_percent";
			this->label_percent->Size = System::Drawing::Size(53, 18);
			this->label_percent->TabIndex = 10;
			this->label_percent->Text = L"100 %";
			// 
			// checkBox_ver
			// 
			this->checkBox_ver->AutoSize = true;
			this->checkBox_ver->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->checkBox_ver->Location = System::Drawing::Point(19, 612);
			this->checkBox_ver->Name = L"checkBox_ver";
			this->checkBox_ver->Size = System::Drawing::Size(194, 22);
			this->checkBox_ver->TabIndex = 11;
			this->checkBox_ver->Text = L"Отразить по вертикали";
			this->checkBox_ver->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->checkBox_ver->UseVisualStyleBackColor = true;
			// 
			// checkBox_hor
			// 
			this->checkBox_hor->AutoSize = true;
			this->checkBox_hor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->checkBox_hor->Location = System::Drawing::Point(19, 640);
			this->checkBox_hor->Name = L"checkBox_hor";
			this->checkBox_hor->Size = System::Drawing::Size(208, 22);
			this->checkBox_hor->TabIndex = 11;
			this->checkBox_hor->Text = L"Отразить по горизонтали";
			this->checkBox_hor->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->checkBox_hor->UseVisualStyleBackColor = true;
			// 
			// toolTip_size
			// 
			this->toolTip_size->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			// 
			// label_p1
			// 
			this->label_p1->AutoSize = true;
			this->label_p1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_p1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_p1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label_p1->Location = System::Drawing::Point(446, 609);
			this->label_p1->Name = L"label_p1";
			this->label_p1->Size = System::Drawing::Size(28, 18);
			this->label_p1->TabIndex = 12;
			this->label_p1->Text = L"P1";
			this->label_p1->MouseLeave += gcnew System::EventHandler(this, &Form1::label_p1_MouseLeave);
			this->label_p1->MouseHover += gcnew System::EventHandler(this, &Form1::label_p1_MouseHover);
			// 
			// label_p2
			// 
			this->label_p2->AutoSize = true;
			this->label_p2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_p2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_p2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label_p2->Location = System::Drawing::Point(445, 640);
			this->label_p2->Name = L"label_p2";
			this->label_p2->Size = System::Drawing::Size(28, 18);
			this->label_p2->TabIndex = 12;
			this->label_p2->Text = L"P2";
			this->label_p2->MouseLeave += gcnew System::EventHandler(this, &Form1::label_p2_MouseLeave);
			this->label_p2->MouseHover += gcnew System::EventHandler(this, &Form1::label_p2_MouseHover);
			// 
			// label_p3
			// 
			this->label_p3->AutoSize = true;
			this->label_p3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_p3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_p3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label_p3->Location = System::Drawing::Point(445, 668);
			this->label_p3->Name = L"label_p3";
			this->label_p3->Size = System::Drawing::Size(28, 18);
			this->label_p3->TabIndex = 12;
			this->label_p3->Text = L"P3";
			this->label_p3->MouseLeave += gcnew System::EventHandler(this, &Form1::label_p3_MouseLeave);
			this->label_p3->MouseHover += gcnew System::EventHandler(this, &Form1::label_p3_MouseHover);
			// 
			// label_p4
			// 
			this->label_p4->AutoSize = true;
			this->label_p4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_p4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_p4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label_p4->Location = System::Drawing::Point(445, 696);
			this->label_p4->Name = L"label_p4";
			this->label_p4->Size = System::Drawing::Size(28, 18);
			this->label_p4->TabIndex = 12;
			this->label_p4->Text = L"P4";
			this->label_p4->MouseLeave += gcnew System::EventHandler(this, &Form1::label_p4_MouseLeave);
			this->label_p4->MouseHover += gcnew System::EventHandler(this, &Form1::label_p4_MouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(542, 610);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(542, 636);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 18);
			this->label3->TabIndex = 13;
			this->label3->Text = L"%";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(542, 667);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 18);
			this->label4->TabIndex = 13;
			this->label4->Text = L"%";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(542, 692);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"%";
			// 
			// button_save
			// 
			this->button_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button_save->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_save.BackgroundImage")));
			this->button_save->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_save->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_save->Font = (gcnew System::Drawing::Font(L"Arial", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save->Location = System::Drawing::Point(6, 5);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(34, 34);
			this->button_save->TabIndex = 14;
			this->button_save->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_save->UseVisualStyleBackColor = false;
			this->button_save->Click += gcnew System::EventHandler(this, &Form1::button_save_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(600, 800);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_p4);
			this->Controls->Add(this->label_p3);
			this->Controls->Add(this->label_p2);
			this->Controls->Add(this->label_p1);
			this->Controls->Add(this->checkBox_hor);
			this->Controls->Add(this->checkBox_ver);
			this->Controls->Add(this->label_percent);
			this->Controls->Add(this->label_neg);
			this->Controls->Add(this->label_plus);
			this->Controls->Add(this->trackBar_percent);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label_params);
			this->Controls->Add(this->label_iteration);
			this->Controls->Add(this->textBox_iteration);
			this->Controls->Add(this->button_chose_color);
			this->Controls->Add(this->label_color);
			this->Controls->Add(this->button_relize);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fractal Barnsley fern";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_percent))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// отображение формы (рисую оси и область отображения)
	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ graph = e->Graphics;  // Получение объекта Graphics для PictureBox
		Pen^ pen = gcnew Pen(Color::WhiteSmoke, 1);  // Создание объекта карандаша

		graph->DrawRectangle(pen, x_0, y_0, side_square, side_square); // Рисование квадрата

		// Рисование осей координат
		graph->DrawLine(pen, x_0, y_0 + side_square / 2, x_0 + side_square, y_0 + side_square / 2);  // Горизонтальная ось
		graph->DrawLine(pen, x_0 + side_square / 2, y_0, x_0 + side_square / 2, y_0 + side_square);  // Вертикальная ось


		// Размер шрифта для подписей осей
		int font_size = Width / 55;
		// Подпись горизонтальной оси
		String^ signature_x = "x";
		int x0_sign_x = x_0 + side_square - font_size; // Координата X для подписи
		int y0_sign_x = y_0 + side_square / 2; // Координата Y для подписи
		graph->DrawString(signature_x, gcnew System::Drawing::Font("Arial", font_size), pen->Brush, x0_sign_x, y0_sign_x);

		// Подпись вертикальной оси
		String^ signature_y = "y";
		int x0_sign_y = x_0 + side_square / 2 - font_size; // Координата X для подписи 
		int y0_sign_y = y_0; // Координата Y для подписи
		graph->DrawString(signature_y, gcnew System::Drawing::Font("Arial", font_size), pen->Brush, x0_sign_y, y0_sign_y);

		//Освобождение ресурсов
		delete pen;

	}

		// Ввод пользователем вероятностей и их обработка 
	private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		// Получаем значения из всех NumericUpDown
		int a = System::Convert::ToDouble(numericUpDown1->Value);
		int b = System::Convert::ToDouble(numericUpDown2->Value);
		int c = System::Convert::ToDouble(numericUpDown3->Value);
		int d = System::Convert::ToDouble(numericUpDown4->Value);

		int totalProbability = a + b + c + d;

		// Выполняем проверку на превышение суммы вероятностей
		if (totalProbability > 100) {
			if (sender == numericUpDown1) numericUpDown1->Value = a - (totalProbability - 100);
			if (sender == numericUpDown2) numericUpDown2->Value = b - (totalProbability - 100);
			if (sender == numericUpDown3) numericUpDown3->Value = c - (totalProbability - 100);
			if (sender == numericUpDown4) numericUpDown4->Value = d - (totalProbability - 100);
		}

	}

		// выбор цвета
	private: System::Void button_chose_color_Click(System::Object^ sender, System::EventArgs^ e) {
		Color new_color = Color::LimeGreen;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			new_color = colorDialog1->Color;
		}
		button_chose_color->BackColor = new_color;
		button_chose_color->FlatAppearance->MouseOverBackColor = ControlPaint::Light(new_color);
		button_chose_color->FlatAppearance->MouseDownBackColor = ControlPaint::LightLight(new_color);
	}

		// скролл маштаба
	private: System::Void trackBar_percent_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label_percent->Text = System::Convert::ToString(trackBar_percent->Value) + " %";
	}
		// подсказка при наведении на ползунок
	private: System::Void trackBar_percent_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip_size->Show("Масштаб", trackBar_percent, trackBar_percent->Width/2.5, -20);
	}
	private: System::Void trackBar_percent_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		toolTip_size->Hide(trackBar_percent);
	}

		// подсказка по параметрам
	private: System::Void label_params_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Фрактал папоротник Барнсли строится\nс помощью четырех функций, каждая\nиз которых имеет свою вероятность\nприменения.Cумма всех вероятностей\nдолжна быть равна 100 % .Эти вероятности\nопределяют, какую функцию использовать для\nвычисления следующей точки фрактала.";
		toolTip_params->Show(str, label_params, label_params->Width/2.5, -110);
	}



	private: System::Void label_params_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		label_params->ForeColor = Color::FromArgb(0x80CBC4);
	}
	private: System::Void label_params_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label_params->ForeColor = Color::FromArgb(0x4DB6AC);
		toolTip_params->Hide(label_params);
	}


	private: System::Void label_p1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Вероятность, отвечающая за создание стебля (обычно минимальна)";
		toolTip_p1->Show(str, label_p1, 0, 25);
	}
	private: System::Void label_p2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Вероятность, отвечающая за создание последовательно\nменьших папоротников, движущихся вверх и вправо";
		toolTip_p2->Show(str, label_p2, 0, 25);
	}

	private: System::Void label_p3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Вероятность, отвечающая за создание листьев слева";
		toolTip_p3->Show(str, label_p3, 0, 25);
	}
	private: System::Void label_p4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Вероятность, отвечающая за создание листьев справа";
		toolTip_p4->Show(str, label_p4, 0, 25);
	}



	private: System::Void label_p1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		toolTip_p1->Hide(label_p1);
	}
	private: System::Void label_p2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		toolTip_p2->Hide(label_p2);
	}
	private: System::Void label_p3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		toolTip_p3->Hide(label_p3);
	}
	private: System::Void label_p4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		toolTip_p4->Hide(label_p4);
	}















	double map(double value, double inputMin, double inputMax, double outputMin, double outputMax) {
		// Проверка на деление на ноль, чтобы избежать ошибки
		if (inputMin == inputMax) {
			return outputMin; // или outputMax
		}

		// Вычисление нормализованного значения
		double normalizedValue = (value - inputMin) / (inputMax - inputMin);

		// Преобразование нормализованного значения в новый диапазон
		double mapValue = outputMin + (normalizedValue * (outputMax - outputMin));

	 return mapValue;
	}




		   // основная часть
	private: System::Void button_relize_Click(System::Object^ sender, System::EventArgs^ e) {

		// Получаем и обрабатываем данные с формы
			//1.Иттерации
		int itt;
		try {
			itt = System::Convert::ToInt32(textBox_iteration->Text);
			if (itt <= 0) {
				itt = 10000;
				textBox_iteration->Text = "10000";
			}
		}
		catch (System::FormatException^) { // Защита от дурака
			int itt = 10000;
			textBox_iteration->Text = "10000";
		}
		//2.Вероятности
		int p1 = System::Convert::ToInt32(numericUpDown1->Value);
		int p2 = System::Convert::ToInt32(numericUpDown2->Value);
		int p3 = System::Convert::ToInt32(numericUpDown3->Value);
		int p4 = System::Convert::ToInt32(numericUpDown4->Value);
		if (p1 + p2 + p3 + p4 != 100) { // проверка условий вероятностей
			MessageBox::Show("Сумма вероятностей должна быть равна 100%", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}		
	
		//3 Параметры фрактала
		double size = trackBar_percent->Value / 100.0; // масштаб
		int rev_ver = 1;
		if (checkBox_ver->Checked) rev_ver = -1;
		bool rev_hor = checkBox_hor->Checked;


	//Отрисовка фрактала
		Refresh(); //или Invalidate()
		Graphics^ fract = this->CreateGraphics();  // Создание объекта Graphics для текущей формы

		Pen^ pen = gcnew Pen(button_chose_color->BackColor, 1);  // Создание объекта карандаша - Забираем цвет из панели


		Random^ rand = gcnew Random(); // Создание объекта класса Random
		int rand_num; // Генерация случайного числа от 0 до 100
			
		double x = 0;
		double y = 0;
		double next_x, next_y;
		double px, py;
		double side_x_l, side_x_r, side_y_l, side_y_r; 

		side_x_l = -2.182 / size * rev_ver; // значения из википедии
		side_x_r = 2.6558 / size * rev_ver;
		side_y_l = 0;
		side_y_r = 9.9983 / size;
		
		if (rev_hor) {
			side_y_l = 9.9983 / size;
			side_y_r = 0;
		}


		for (int i = 0; i < itt; i++) {
			if (i != 0) {
				rand_num = rand->Next(101);

				if (rand_num <= p1) {
					next_x = 0;
					next_y = 0.16 * y;
				}
				else if (rand_num <= p1 + p2) {
					next_x = 0.85 * x + 0.04 * y;
					next_y = -0.04 * x + 0.85 * y + 1.6;

				}
				else if (rand_num <= p1 + p2 + p3) {
					next_x = 0.2 * x + -0.26 * y;
					next_y = 0.23 * x + 0.22 * y + 1.6;

				}
				else if (rand_num <= p1 + p2 + p3 + p4) {
					next_x = -0.15 * x + 0.28 * y;
					next_y = 0.26 * x + 0.24 * y + 0.44;

				}

				x = next_x;
				y = next_y;
			}
			

			px = map(x, side_x_l, side_x_r, x_0, x_0 + side_square); // промежуток с википедии - полный папоротник находится в диапазоне -2,1820 <  x  <2,6558 и 0 ≤  y  <9,9983.
			py = map(y, side_y_l, side_y_r, y_0 + side_square , y_0);
		
			
			if (px > x_0+1 && px < x_0 + side_square -1 && py > y_0+1 && py < y_0 + side_square-1) {
				//fract->DrawEllipse(pen, px, py, 1, 1);
				fract->FillRectangle(pen->Brush, px, py, 1, 1);

			}


		}

		



		delete pen;
	}







private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {

	// Создание битового изображения с размерами формы под фрактал
	Bitmap^ bitmap = gcnew Bitmap(ClientSize.Width, ClientSize.Height); // форма создаётся с запасом?

	// Создание объекта Graphics на основе битового изображения
	Graphics^ save = Graphics::FromImage(bitmap);


	// Копирование содержимого формы в битовое изображение
	Point coord = this->PointToScreen(System::Drawing::Point(0, 0)); // начальная точка

	save->CopyFromScreen(coord, System::Drawing::Point(0, 0), this->Size);


	// Сохранение битового изображения в файл
	String^ name = "fractal.png";
	int counter = 1;
	while (System::IO::File::Exists(name))
	{
		// Файл с таким именем уже существует, добавляем счетчик к имени
		name = "fractal" + "_" + System::Convert::ToString(counter) + ".png";
		counter++;
	}

	bitmap->Save(name, System::Drawing::Imaging::ImageFormat::Png);

	// Освобождение ресурсов
	delete bitmap;
	delete save;

}





};
}