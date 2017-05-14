#pragma once
#include <cstdlib>
#include <ctime>

namespace MyMediaPlayer {

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
	private: AxWMPLib::AxWindowsMediaPlayer^  MediaPlayer;
	protected:
	private: System::Windows::Forms::OpenFileDialog^  oFileDialog;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::TrackBar^  trackBarMedia;
	private: System::Windows::Forms::Timer^  timerPlay;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Button^  btnStop;
	private: System::Windows::Forms::Button^  btpPrevious;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBackward;
	private: System::Windows::Forms::Button^  btnForward;
	private: System::Windows::Forms::TrackBar^  trackBarVolume;
	private: System::Windows::Forms::PictureBox^  pictureBoxVolume;
	private: System::Windows::Forms::ImageList^  imageListVolume;
	private: System::Windows::Forms::Button^  btnAddFile;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnDeleteAll;
	private: System::Windows::Forms::ListView^  PlayList;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;

	private: System::Windows::Forms::Button^  btnMinimize;
	private: System::Windows::Forms::Button^  btnMaximize;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Panel^  panelTop;
	private: System::Windows::Forms::CheckBox^  cbShuffle;
	private: System::Windows::Forms::PictureBox^  pictureBoxIcon;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MediaPlayer = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->oFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->trackBarMedia = (gcnew System::Windows::Forms::TrackBar());
			this->timerPlay = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btpPrevious = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBackward = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->trackBarVolume = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBoxVolume = (gcnew System::Windows::Forms::PictureBox());
			this->imageListVolume = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnAddFile = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnDeleteAll = (gcnew System::Windows::Forms::Button());
			this->PlayList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxIcon = (gcnew System::Windows::Forms::PictureBox());
			this->cbShuffle = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MediaPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarMedia))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVolume))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVolume))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// MediaPlayer
			// 
			this->MediaPlayer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MediaPlayer->Enabled = true;
			this->MediaPlayer->Location = System::Drawing::Point(0, 27);
			this->MediaPlayer->Name = L"MediaPlayer";
			this->MediaPlayer->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"MediaPlayer.OcxState")));
			this->MediaPlayer->Size = System::Drawing::Size(504, 367);
			this->MediaPlayer->TabIndex = 0;
			// 
			// oFileDialog
			// 
			this->oFileDialog->Filter = L"Audio files|*.mp3; *.wav;|Video Files|*.mp4;*.mkv;*.flv;|All files|*.*";
			this->oFileDialog->Multiselect = true;
			this->oFileDialog->Title = L"Chose Files";
			// 
			// btnPlay
			// 
			this->btnPlay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnPlay->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnPlay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlay.BackgroundImage")));
			this->btnPlay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPlay->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPlay->FlatAppearance->BorderSize = 0;
			this->btnPlay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlay->Location = System::Drawing::Point(88, 428);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(32, 32);
			this->btnPlay->TabIndex = 3;
			this->btnPlay->UseVisualStyleBackColor = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MyForm::btnPlay_Click);
			// 
			// trackBarMedia
			// 
			this->trackBarMedia->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMedia->LargeChange = 1;
			this->trackBarMedia->Location = System::Drawing::Point(2, 400);
			this->trackBarMedia->Maximum = 0;
			this->trackBarMedia->Name = L"trackBarMedia";
			this->trackBarMedia->Size = System::Drawing::Size(506, 45);
			this->trackBarMedia->TabIndex = 4;
			this->trackBarMedia->TickFrequency = 0;
			this->trackBarMedia->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBarMedia->Scroll += gcnew System::EventHandler(this, &MyForm::trackBarMedia_Scroll);
			// 
			// timerPlay
			// 
			this->timerPlay->Tick += gcnew System::EventHandler(this, &MyForm::timerPlay_Tick);
			// 
			// btnPause
			// 
			this->btnPause->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnPause->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnPause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPause.BackgroundImage")));
			this->btnPause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPause->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPause->FlatAppearance->BorderSize = 0;
			this->btnPause->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPause->Location = System::Drawing::Point(126, 428);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(32, 32);
			this->btnPause->TabIndex = 5;
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &MyForm::btnPause_Click);
			// 
			// btnStop
			// 
			this->btnStop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnStop->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnStop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStop.BackgroundImage")));
			this->btnStop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnStop->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnStop->FlatAppearance->BorderSize = 0;
			this->btnStop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStop->Location = System::Drawing::Point(164, 428);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(32, 32);
			this->btnStop->TabIndex = 6;
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &MyForm::btnStop_Click);
			// 
			// btpPrevious
			// 
			this->btpPrevious->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btpPrevious->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btpPrevious->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btpPrevious.BackgroundImage")));
			this->btpPrevious->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btpPrevious->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btpPrevious->FlatAppearance->BorderSize = 0;
			this->btpPrevious->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btpPrevious->Location = System::Drawing::Point(12, 428);
			this->btpPrevious->Name = L"btpPrevious";
			this->btpPrevious->Size = System::Drawing::Size(32, 32);
			this->btpPrevious->TabIndex = 7;
			this->btpPrevious->UseVisualStyleBackColor = false;
			this->btpPrevious->Click += gcnew System::EventHandler(this, &MyForm::btpPrevious_Click);
			// 
			// btnNext
			// 
			this->btnNext->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnNext->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnNext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.BackgroundImage")));
			this->btnNext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnNext->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Location = System::Drawing::Point(240, 428);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(32, 32);
			this->btnNext->TabIndex = 8;
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
			// 
			// btnBackward
			// 
			this->btnBackward->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBackward->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnBackward->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackward.BackgroundImage")));
			this->btnBackward->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBackward->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnBackward->FlatAppearance->BorderSize = 0;
			this->btnBackward->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackward->Location = System::Drawing::Point(50, 428);
			this->btnBackward->Name = L"btnBackward";
			this->btnBackward->Size = System::Drawing::Size(32, 32);
			this->btnBackward->TabIndex = 9;
			this->btnBackward->UseVisualStyleBackColor = false;
			this->btnBackward->Click += gcnew System::EventHandler(this, &MyForm::btnBackward_Click);
			// 
			// btnForward
			// 
			this->btnForward->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnForward->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnForward->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnForward.BackgroundImage")));
			this->btnForward->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnForward->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnForward->FlatAppearance->BorderSize = 0;
			this->btnForward->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnForward->Location = System::Drawing::Point(202, 428);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(32, 32);
			this->btnForward->TabIndex = 10;
			this->btnForward->UseVisualStyleBackColor = false;
			this->btnForward->Click += gcnew System::EventHandler(this, &MyForm::btnForward_Click);
			// 
			// trackBarVolume
			// 
			this->trackBarVolume->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->trackBarVolume->Location = System::Drawing::Point(420, 422);
			this->trackBarVolume->Maximum = 100;
			this->trackBarVolume->Name = L"trackBarVolume";
			this->trackBarVolume->Size = System::Drawing::Size(86, 45);
			this->trackBarVolume->TabIndex = 11;
			this->trackBarVolume->TickFrequency = 0;
			this->trackBarVolume->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarVolume->Value = 50;
			this->trackBarVolume->Scroll += gcnew System::EventHandler(this, &MyForm::trackBarVolume_Scroll);
			// 
			// pictureBoxVolume
			// 
			this->pictureBoxVolume->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxVolume->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxVolume->Location = System::Drawing::Point(396, 432);
			this->pictureBoxVolume->Name = L"pictureBoxVolume";
			this->pictureBoxVolume->Padding = System::Windows::Forms::Padding(2);
			this->pictureBoxVolume->Size = System::Drawing::Size(28, 28);
			this->pictureBoxVolume->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxVolume->TabIndex = 12;
			this->pictureBoxVolume->TabStop = false;
			this->pictureBoxVolume->Click += gcnew System::EventHandler(this, &MyForm::pictureBoxVolume_Click);
			// 
			// imageListVolume
			// 
			this->imageListVolume->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListVolume.ImageStream")));
			this->imageListVolume->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListVolume->Images->SetKeyName(0, L"Mute.ico");
			this->imageListVolume->Images->SetKeyName(1, L"Low-Volume.ico");
			this->imageListVolume->Images->SetKeyName(2, L"Medium-Volume.ico");
			this->imageListVolume->Images->SetKeyName(3, L"High-Volume.ico");
			// 
			// btnAddFile
			// 
			this->btnAddFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnAddFile->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnAddFile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddFile.BackgroundImage")));
			this->btnAddFile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAddFile->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnAddFile->FlatAppearance->BorderSize = 0;
			this->btnAddFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddFile->Location = System::Drawing::Point(598, 422);
			this->btnAddFile->Name = L"btnAddFile";
			this->btnAddFile->Size = System::Drawing::Size(24, 24);
			this->btnAddFile->TabIndex = 13;
			this->btnAddFile->Tag = L"";
			this->btnAddFile->UseVisualStyleBackColor = false;
			this->btnAddFile->Click += gcnew System::EventHandler(this, &MyForm::btnAddFile_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDelete->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.BackgroundImage")));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDelete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Location = System::Drawing::Point(628, 422);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(24, 24);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnDeleteAll
			// 
			this->btnDeleteAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteAll->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnDeleteAll->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteAll.BackgroundImage")));
			this->btnDeleteAll->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDeleteAll->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnDeleteAll->FlatAppearance->BorderSize = 0;
			this->btnDeleteAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteAll->Location = System::Drawing::Point(658, 422);
			this->btnDeleteAll->Name = L"btnDeleteAll";
			this->btnDeleteAll->Size = System::Drawing::Size(24, 24);
			this->btnDeleteAll->TabIndex = 16;
			this->btnDeleteAll->UseVisualStyleBackColor = false;
			this->btnDeleteAll->Click += gcnew System::EventHandler(this, &MyForm::btnDeleteAll_Click);
			// 
			// PlayList
			// 
			this->PlayList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PlayList->BackColor = System::Drawing::Color::LightSteelBlue;
			this->PlayList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PlayList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->PlayList->FullRowSelect = true;
			this->PlayList->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->PlayList->HideSelection = false;
			this->PlayList->Location = System::Drawing::Point(504, 27);
			this->PlayList->MultiSelect = false;
			this->PlayList->Name = L"PlayList";
			this->PlayList->ShowGroups = false;
			this->PlayList->Size = System::Drawing::Size(189, 367);
			this->PlayList->TabIndex = 17;
			this->PlayList->UseCompatibleStateImageBehavior = false;
			this->PlayList->View = System::Windows::Forms::View::Details;
			this->PlayList->DoubleClick += gcnew System::EventHandler(this, &MyForm::PlayList_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Title";
			this->columnHeader1->Width = 143;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Source";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->columnHeader2->Width = 46;
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnMinimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.BackgroundImage")));
			this->btnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnMinimize->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Location = System::Drawing::Point(606, 0);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(28, 28);
			this->btnMinimize->TabIndex = 18;
			this->btnMinimize->UseVisualStyleBackColor = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &MyForm::btnMinimize_Click);
			// 
			// btnMaximize
			// 
			this->btnMaximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaximize->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnMaximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.BackgroundImage")));
			this->btnMaximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnMaximize->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnMaximize->FlatAppearance->BorderSize = 0;
			this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximize->Location = System::Drawing::Point(636, 0);
			this->btnMaximize->Name = L"btnMaximize";
			this->btnMaximize->Size = System::Drawing::Size(28, 28);
			this->btnMaximize->TabIndex = 19;
			this->btnMaximize->UseVisualStyleBackColor = false;
			this->btnMaximize->Click += gcnew System::EventHandler(this, &MyForm::btnMaximize_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.BackgroundImage")));
			this->btnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(665, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(28, 28);
			this->btnClose->TabIndex = 20;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// panelTop
			// 
			this->panelTop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelTop->Controls->Add(this->pictureBoxIcon);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(693, 27);
			this->panelTop->TabIndex = 21;
			this->panelTop->DoubleClick += gcnew System::EventHandler(this, &MyForm::panelTop_DoubleClick);
			this->panelTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelTop_MouseDown);
			this->panelTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelTop_MouseMove);
			// 
			// pictureBoxIcon
			// 
			this->pictureBoxIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxIcon.BackgroundImage")));
			this->pictureBoxIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxIcon->Enabled = false;
			this->pictureBoxIcon->Location = System::Drawing::Point(3, 0);
			this->pictureBoxIcon->Name = L"pictureBoxIcon";
			this->pictureBoxIcon->Size = System::Drawing::Size(28, 28);
			this->pictureBoxIcon->TabIndex = 0;
			this->pictureBoxIcon->TabStop = false;
			// 
			// cbShuffle
			// 
			this->cbShuffle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cbShuffle->Appearance = System::Windows::Forms::Appearance::Button;
			this->cbShuffle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cbShuffle.BackgroundImage")));
			this->cbShuffle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cbShuffle->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbShuffle->FlatAppearance->BorderColor = System::Drawing::Color::LightSteelBlue;
			this->cbShuffle->FlatAppearance->BorderSize = 0;
			this->cbShuffle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbShuffle->Location = System::Drawing::Point(514, 420);
			this->cbShuffle->Name = L"cbShuffle";
			this->cbShuffle->Size = System::Drawing::Size(32, 29);
			this->cbShuffle->TabIndex = 22;
			this->cbShuffle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbShuffle->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->cbShuffle->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(694, 472);
			this->ControlBox = false;
			this->Controls->Add(this->cbShuffle);
			this->Controls->Add(this->PlayList);
			this->Controls->Add(this->btnDeleteAll);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAddFile);
			this->Controls->Add(this->pictureBoxVolume);
			this->Controls->Add(this->trackBarVolume);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnBackward);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btpPrevious);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->MediaPlayer);
			this->Controls->Add(this->trackBarMedia);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnMaximize);
			this->Controls->Add(this->btnMinimize);
			this->Controls->Add(this->panelTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(694, 472);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Media Player";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MediaPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarMedia))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVolume))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVolume))->EndInit();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: array<String^>^ path;
			 array<String^>^ filename;
			 Point lastCursor;
			 unsigned int currentMediaItemIndex = 0;
			 
	private: System::Void timerPlay_Tick(System::Object^  sender, System::EventArgs^  e) {
		try {
				trackBarMedia->Maximum = int(MediaPlayer->currentMedia->duration);
				if (trackBarMedia->Maximum > 0) {
					trackBarMedia->Value = MediaPlayer->Ctlcontrols->currentPosition;
					if (trackBarMedia->Maximum == trackBarMedia->Value) {
						if (PlayList->Items->Count > 1) {
							if (cbShuffle->Checked) {
								while (true)
								{
									int randIndex = rand() % PlayList->Items->Count;
									if (currentMediaItemIndex != randIndex) { currentMediaItemIndex = randIndex; break; }
								}
							}
							else {
								if (PlayList->Items->Count - 1 > currentMediaItemIndex) {
									currentMediaItemIndex++;
								}
								else {
									currentMediaItemIndex = 0;
								}
							}
							MediaPlayer->URL = PlayList->Items[currentMediaItemIndex]->SubItems[1]->Text;
						}
					}
				}
		}
		catch (Exception^ ex) {}
	}
	private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!timerPlay->Enabled) timerPlay->Enabled = true;
		if (MediaPlayer->URL->Length == 0) 
			if (PlayList->Items->Count > 0)
				MediaPlayer->URL = PlayList->Items[0]->SubItems[1]->Text;
		MediaPlayer->Ctlcontrols->play();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBoxVolume->Image = imageListVolume->Images[2];
	}
	private: System::Void trackBarVolume_Scroll(System::Object^  sender, System::EventArgs^  e) {
		MediaPlayer->settings->volume = trackBarVolume->Value;
		if (MediaPlayer->settings->volume == 0)
			pictureBoxVolume->Image = imageListVolume->Images[0];
		if (MediaPlayer->settings->volume > 0 && MediaPlayer->settings->volume <= 30)
			pictureBoxVolume->Image = imageListVolume->Images[1];
		if (MediaPlayer->settings->volume > 30 && MediaPlayer->settings->volume <= 70)
			pictureBoxVolume->Image = imageListVolume->Images[2];
		if (MediaPlayer->settings->volume > 70)
			pictureBoxVolume->Image = imageListVolume->Images[3];
	}
	private: System::Void btnAddFile_Click(System::Object^  sender, System::EventArgs^  e) {
		int addIndex = PlayList->Items->Count;
		if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			filename = oFileDialog->SafeFileNames;
			path = oFileDialog->FileNames;
			for (int i = 0; i < filename->Length; i++) {
				PlayList->Items->Add(filename[i]->ToString());
				PlayList->Items[addIndex]->SubItems->Add(path[i]->ToString());
				addIndex++;
			}
		}
	}
	private: System::Void btnDeleteAll_Click(System::Object^  sender, System::EventArgs^  e) {
		PlayList->Items->Clear();
	}
	private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PlayList->Items->Count > 0)
			if (PlayList->FocusedItem->Index > -1)
				PlayList->Items[PlayList->FocusedItem->Index]->Remove();
	}
	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
		if (timerPlay->Enabled) timerPlay->Enabled = false;
		MediaPlayer->Ctlcontrols->pause();
	}
	private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
		if (timerPlay->Enabled) timerPlay->Enabled = false;
		MediaPlayer->Ctlcontrols->stop();
		trackBarMedia->Value = 0;
	}
	private: System::Void PlayList_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		currentMediaItemIndex = PlayList->FocusedItem->Index;
		MediaPlayer->URL = PlayList->Items[currentMediaItemIndex]->SubItems[1]->Text;
		trackBarMedia->Value = 0;
		if (!timerPlay->Enabled) timerPlay->Enabled = true;

	}
	private: System::Void trackBarMedia_Scroll(System::Object^  sender, System::EventArgs^  e) {
		MediaPlayer->Ctlcontrols->currentPosition = trackBarMedia->Value;
	}
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void btnMaximize_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->WindowState == FormWindowState::Normal) {
			this->WindowState = FormWindowState::Maximized;
		}
		else
		{
			this->WindowState = FormWindowState::Normal;
		}
	}
	private: System::Void btnMinimize_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void panelTop_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		lastCursor = e->Location;
	}
	private: System::Void panelTop_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Left = this->Left + (e->X - lastCursor.X);
			this->Top = this->Top + (e->Y - lastCursor.Y);
		}
	}
	private: System::Void panelTop_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (this->WindowState == FormWindowState::Normal) {
			this->WindowState = FormWindowState::Maximized;
		}
		else
		{
			this->WindowState = FormWindowState::Normal;
		}
	}
	private: System::Void btnForward_Click(System::Object^  sender, System::EventArgs^  e) {
		MediaPlayer->Ctlcontrols->currentPosition += 10;
	}
	private: System::Void btnBackward_Click(System::Object^  sender, System::EventArgs^  e) {
		MediaPlayer->Ctlcontrols->currentPosition -= 10;
	}
	private: System::Void pictureBoxVolume_Click(System::Object^  sender, System::EventArgs^  e) {
		MediaPlayer->settings->mute = true;
		if(MediaPlayer->settings->mute) pictureBoxVolume->Image = imageListVolume->Images[0];
	}
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
//		srand(time(NULL));
		if (PlayList->Items->Count > 1) {
			if (cbShuffle->Checked) {
				while (true)
				{
					int randIndex = rand() % PlayList->Items->Count;
					if (currentMediaItemIndex != randIndex) { currentMediaItemIndex = randIndex; break; }
				}
			}
			else {
				if (PlayList->Items->Count - 1 > currentMediaItemIndex) {
					currentMediaItemIndex++;
				}
				else {
					currentMediaItemIndex = 0;
				}
			}
				MediaPlayer->URL = PlayList->Items[currentMediaItemIndex]->SubItems[1]->Text;
				if (!timerPlay->Enabled) timerPlay->Enabled = true;
		}
	}
	private: System::Void btpPrevious_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PlayList->Items->Count > 0) {
			if (currentMediaItemIndex > 0) {
				if (MediaPlayer->Ctlcontrols->currentPosition < 2)
					currentMediaItemIndex--;
			}
			else {
				currentMediaItemIndex = 0;
			}
			MediaPlayer->URL = PlayList->Items[currentMediaItemIndex]->SubItems[1]->Text;
			if (!timerPlay->Enabled) timerPlay->Enabled = true;
		}
	}
};
}
