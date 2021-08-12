#pragma once

namespace ElCuerpo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO::Ports;

	/// <summary>
	/// Resumen de Aprendizaje
	/// </summary>
	public ref class Aprendizaje : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer^ Eye = gcnew SoundPlayer("Eye.wav");/////
		SoundPlayer^ Face = gcnew SoundPlayer("Face.wav");////
		SoundPlayer^ Neck = gcnew SoundPlayer("Neck.wav");////
		SoundPlayer^ Chest = gcnew SoundPlayer("Chest.wav");/////
		SoundPlayer^ Arm = gcnew SoundPlayer("Arm.wav");//////
		SoundPlayer^ Hand = gcnew SoundPlayer("Hand.wav");/////
		SoundPlayer^ Leg = gcnew SoundPlayer("Leg.wav");/////
		SoundPlayer^ Foot = gcnew SoundPlayer("Foot.wav");/////
		SoundPlayer^ Ear = gcnew SoundPlayer("Ear.wav");/////
		SoundPlayer^ Nose = gcnew SoundPlayer("Nose.wav");////
		SoundPlayer^ Elbow = gcnew SoundPlayer("Elbow.wav");//////
	private: System::IO::Ports::SerialPort^ serialPort1;
	public:
		SoundPlayer^ Knee = gcnew SoundPlayer("Knee.wav");////
		void limpiar() {
			cara->BackColor = BackColor.White;
			cuello->BackColor = BackColor.White;
			pecho->BackColor = BackColor.White;
			brazo->BackColor = BackColor.White;
			mano->BackColor = BackColor.White;
			pierna->BackColor = BackColor.White;
			pie->BackColor = BackColor.White;
			ojo->BackColor = BackColor.White;
			oreja->BackColor = BackColor.White;
			nariz->BackColor = BackColor.White;
			codo->BackColor = BackColor.White;
			rodilla->BackColor = BackColor.White;
		}
	private: System::Windows::Forms::Button^ button1;
	public:
		int x;
		Aprendizaje(int info)
		{
			x = info;
			InitializeComponent();
			if (x == 1) {
				serialPort1->Open();
			}
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Aprendizaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ traduccion;
	private: System::Windows::Forms::Label^ Inles;
	protected:



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ ojo;

	private: System::Windows::Forms::Label^ oreja;
	private: System::Windows::Forms::Label^ nariz;
	private: System::Windows::Forms::Label^ cara;

	private: System::Windows::Forms::Label^ cuello;
	private: System::Windows::Forms::Label^ pecho;

	private: System::Windows::Forms::Label^ brazo;
	private: System::Windows::Forms::Label^ mano;

	private: System::Windows::Forms::Label^ codo;

	private: System::Windows::Forms::Label^ rodilla;


	private: System::Windows::Forms::Label^ pierna;
	private: System::Windows::Forms::Label^ pie;
	private: System::ComponentModel::IContainer^ components;

































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Aprendizaje::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->traduccion = (gcnew System::Windows::Forms::Label());
			this->Inles = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ojo = (gcnew System::Windows::Forms::Label());
			this->oreja = (gcnew System::Windows::Forms::Label());
			this->nariz = (gcnew System::Windows::Forms::Label());
			this->cara = (gcnew System::Windows::Forms::Label());
			this->cuello = (gcnew System::Windows::Forms::Label());
			this->pecho = (gcnew System::Windows::Forms::Label());
			this->brazo = (gcnew System::Windows::Forms::Label());
			this->mano = (gcnew System::Windows::Forms::Label());
			this->codo = (gcnew System::Windows::Forms::Label());
			this->rodilla = (gcnew System::Windows::Forms::Label());
			this->pierna = (gcnew System::Windows::Forms::Label());
			this->pie = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(573, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"HAZ CLICK Y APRENDA LAS PARTES DEL CUERPO EN INGLES!!";
			this->label1->Click += gcnew System::EventHandler(this, &Aprendizaje::Label1_Click);
			// 
			// traduccion
			// 
			this->traduccion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->traduccion->BackColor = System::Drawing::Color::Transparent;
			this->traduccion->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 40));
			this->traduccion->ForeColor = System::Drawing::Color::Red;
			this->traduccion->Location = System::Drawing::Point(919, 340);
			this->traduccion->Name = L"traduccion";
			this->traduccion->Size = System::Drawing::Size(244, 72);
			this->traduccion->TabIndex = 2;
			// 
			// Inles
			// 
			this->Inles->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Inles->BackColor = System::Drawing::Color::Transparent;
			this->Inles->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inles->ForeColor = System::Drawing::Color::Aqua;
			this->Inles->Location = System::Drawing::Point(832, 233);
			this->Inles->Name = L"Inles";
			this->Inles->Size = System::Drawing::Size(384, 96);
			this->Inles->TabIndex = 3;
			this->Inles->Text = L"Traducción al inglés";
			this->Inles->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(48, 135);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(676, 451);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Aprendizaje::PictureBox1_Click);
			// 
			// ojo
			// 
			this->ojo->BackColor = System::Drawing::Color::White;
			this->ojo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ojo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ojo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ojo->ForeColor = System::Drawing::Color::Red;
			this->ojo->Location = System::Drawing::Point(113, 175);
			this->ojo->Name = L"ojo";
			this->ojo->Size = System::Drawing::Size(106, 28);
			this->ojo->TabIndex = 8;
			this->ojo->Text = L"Ojo";
			this->ojo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ojo->Click += gcnew System::EventHandler(this, &Aprendizaje::Ojo_Click);
			// 
			// oreja
			// 
			this->oreja->BackColor = System::Drawing::Color::White;
			this->oreja->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->oreja->Cursor = System::Windows::Forms::Cursors::Hand;
			this->oreja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oreja->ForeColor = System::Drawing::Color::Red;
			this->oreja->Location = System::Drawing::Point(550, 211);
			this->oreja->Name = L"oreja";
			this->oreja->Size = System::Drawing::Size(106, 28);
			this->oreja->TabIndex = 10;
			this->oreja->Text = L"Oreja";
			this->oreja->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->oreja->Click += gcnew System::EventHandler(this, &Aprendizaje::Oreja_Click);
			// 
			// nariz
			// 
			this->nariz->BackColor = System::Drawing::Color::White;
			this->nariz->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->nariz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nariz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nariz->ForeColor = System::Drawing::Color::Red;
			this->nariz->Location = System::Drawing::Point(113, 233);
			this->nariz->Name = L"nariz";
			this->nariz->Size = System::Drawing::Size(106, 28);
			this->nariz->TabIndex = 11;
			this->nariz->Text = L"Nariz";
			this->nariz->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->nariz->Click += gcnew System::EventHandler(this, &Aprendizaje::Nariz_Click);
			// 
			// cara
			// 
			this->cara->BackColor = System::Drawing::Color::White;
			this->cara->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->cara->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cara->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cara->ForeColor = System::Drawing::Color::Red;
			this->cara->Location = System::Drawing::Point(550, 285);
			this->cara->Name = L"cara";
			this->cara->Size = System::Drawing::Size(106, 28);
			this->cara->TabIndex = 12;
			this->cara->Text = L"Cara";
			this->cara->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cara->Click += gcnew System::EventHandler(this, &Aprendizaje::Cara_Click);
			// 
			// cuello
			// 
			this->cuello->BackColor = System::Drawing::Color::White;
			this->cuello->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->cuello->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cuello->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cuello->ForeColor = System::Drawing::Color::Red;
			this->cuello->Location = System::Drawing::Point(113, 384);
			this->cuello->Name = L"cuello";
			this->cuello->Size = System::Drawing::Size(106, 28);
			this->cuello->TabIndex = 14;
			this->cuello->Text = L"Cuello";
			this->cuello->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cuello->Click += gcnew System::EventHandler(this, &Aprendizaje::Cuello_Click);
			// 
			// pecho
			// 
			this->pecho->BackColor = System::Drawing::Color::White;
			this->pecho->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pecho->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pecho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pecho->ForeColor = System::Drawing::Color::Red;
			this->pecho->Location = System::Drawing::Point(550, 340);
			this->pecho->Name = L"pecho";
			this->pecho->Size = System::Drawing::Size(106, 28);
			this->pecho->TabIndex = 15;
			this->pecho->Text = L"Pecho";
			this->pecho->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pecho->Click += gcnew System::EventHandler(this, &Aprendizaje::Pecho_Click);
			// 
			// brazo
			// 
			this->brazo->BackColor = System::Drawing::Color::White;
			this->brazo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->brazo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->brazo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brazo->ForeColor = System::Drawing::Color::Red;
			this->brazo->Location = System::Drawing::Point(550, 419);
			this->brazo->Name = L"brazo";
			this->brazo->Size = System::Drawing::Size(106, 28);
			this->brazo->TabIndex = 17;
			this->brazo->Text = L"Brazo";
			this->brazo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->brazo->Click += gcnew System::EventHandler(this, &Aprendizaje::Brazo_Click);
			// 
			// mano
			// 
			this->mano->BackColor = System::Drawing::Color::White;
			this->mano->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->mano->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mano->ForeColor = System::Drawing::Color::Red;
			this->mano->Location = System::Drawing::Point(113, 320);
			this->mano->Name = L"mano";
			this->mano->Size = System::Drawing::Size(106, 28);
			this->mano->TabIndex = 18;
			this->mano->Text = L"Mano";
			this->mano->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->mano->Click += gcnew System::EventHandler(this, &Aprendizaje::Mano_Click);
			// 
			// codo
			// 
			this->codo->BackColor = System::Drawing::Color::White;
			this->codo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->codo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->codo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codo->ForeColor = System::Drawing::Color::Red;
			this->codo->Location = System::Drawing::Point(113, 446);
			this->codo->Name = L"codo";
			this->codo->Size = System::Drawing::Size(106, 28);
			this->codo->TabIndex = 20;
			this->codo->Text = L"Codo";
			this->codo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->codo->Click += gcnew System::EventHandler(this, &Aprendizaje::Codo_Click);
			// 
			// rodilla
			// 
			this->rodilla->BackColor = System::Drawing::Color::White;
			this->rodilla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->rodilla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rodilla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rodilla->ForeColor = System::Drawing::Color::Red;
			this->rodilla->Location = System::Drawing::Point(550, 466);
			this->rodilla->Name = L"rodilla";
			this->rodilla->Size = System::Drawing::Size(106, 28);
			this->rodilla->TabIndex = 22;
			this->rodilla->Text = L"Rodilla";
			this->rodilla->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rodilla->Click += gcnew System::EventHandler(this, &Aprendizaje::Rodilla_Click);
			// 
			// pierna
			// 
			this->pierna->BackColor = System::Drawing::Color::White;
			this->pierna->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pierna->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pierna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pierna->ForeColor = System::Drawing::Color::Red;
			this->pierna->Location = System::Drawing::Point(113, 510);
			this->pierna->Name = L"pierna";
			this->pierna->Size = System::Drawing::Size(106, 28);
			this->pierna->TabIndex = 25;
			this->pierna->Text = L"Pierna";
			this->pierna->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pierna->Click += gcnew System::EventHandler(this, &Aprendizaje::Pierna_Click);
			// 
			// pie
			// 
			this->pie->BackColor = System::Drawing::Color::White;
			this->pie->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pie->ForeColor = System::Drawing::Color::Red;
			this->pie->Location = System::Drawing::Point(550, 510);
			this->pie->Name = L"pie";
			this->pie->Size = System::Drawing::Size(106, 28);
			this->pie->TabIndex = 26;
			this->pie->Text = L"Pie";
			this->pie->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pie->Click += gcnew System::EventHandler(this, &Aprendizaje::Pie_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(865, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 50);
			this->button1->TabIndex = 48;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Aprendizaje::Button1_Click_1);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			// 
			// Aprendizaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1294, 589);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pie);
			this->Controls->Add(this->pierna);
			this->Controls->Add(this->rodilla);
			this->Controls->Add(this->codo);
			this->Controls->Add(this->mano);
			this->Controls->Add(this->brazo);
			this->Controls->Add(this->pecho);
			this->Controls->Add(this->cuello);
			this->Controls->Add(this->cara);
			this->Controls->Add(this->nariz);
			this->Controls->Add(this->oreja);
			this->Controls->Add(this->ojo);
			this->Controls->Add(this->Inles);
			this->Controls->Add(this->traduccion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"Aprendizaje";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aprendizaje";
			this->Load += gcnew System::EventHandler(this, &Aprendizaje::Aprendizaje_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void Cara_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Face";
	limpiar();
	cara->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("A");
	}
}
private: System::Void Cuello_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Neck";
	limpiar();
	cuello->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("F");
	}
}
private: System::Void Pecho_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Chest";
	limpiar();
	pecho->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("G");
	}
}
private: System::Void Brazo_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Arm";
	limpiar();
	brazo->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("H");
	}
}
private: System::Void Mano_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Hand";
	limpiar();
	mano->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("I");
	}
}

private: System::Void Pierna_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Leg";
	limpiar();
	pierna->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("K");
	}
}
private: System::Void Pie_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Foot";
	limpiar();
	pie->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("M");
	}
}
private: System::Void Ojo_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Eye";
	limpiar();
	ojo->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("B");
	}
}
private: System::Void Oreja_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Ear";
	limpiar();
	oreja->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("E");
	}
}
private: System::Void Nariz_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Nose";
	limpiar();
	nariz->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("D");
	}
}

private: System::Void Codo_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Elbow";
	limpiar();
	codo->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("J");
	}
}

private: System::Void Rodilla_Click(System::Object^ sender, System::EventArgs^ e) {
	traduccion->Text = "Knee";
	limpiar();
	rodilla->BackColor = BackColor.Aqua;
	if (x == 1) {
		serialPort1->Write("L");
	}
}

private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Aprendizaje_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (traduccion->Text == "Face") {//////////////
		Face->Play();
	}
	else if (traduccion->Text == "Neck") {//////////////
		Neck->Play();
	}
	else if (traduccion->Text == "Chest") {/////////////
		Chest->Play();
	}
	else if (traduccion->Text == "Arm") {////////////////
		Arm->Play();
	}
	else if (traduccion->Text == "Hand") {/////////////////
		Hand->Play();
	}
	else if (traduccion->Text == "Leg") {/////////////////////
		Leg->Play();
	}
	else if (traduccion->Text == "Foot") {//////////////////
		Foot->Play();
	}
	else if (traduccion->Text == "Eye") {///////////
		Eye->Play();
	}
	else if (traduccion->Text == "Ear") {//////////////////
		Ear->Play();
	}
	else if (traduccion->Text == "Nose") {///////////////////
		Nose->Play();
	}
	else if (traduccion->Text == "Elbow") {//////////////////////
		Elbow->Play();
	}
	else if (traduccion->Text == "Knee") {/////////////////////
		Knee->Play();
	}
	else {
		MessageBox::Show("Seleccione una parte del cuerpo", "APRENDIZAJE", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
};
}
