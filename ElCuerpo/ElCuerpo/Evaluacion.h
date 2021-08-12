#pragma once
#include <fstream>
#include <direct.h>
#include "Resultados.h"

namespace ElCuerpo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Evaluacion
	/// </summary>
	public ref class Evaluacion : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer^ Eye = gcnew SoundPlayer("Eye.wav");//////////
		SoundPlayer^ Face = gcnew SoundPlayer("Face.wav");////////////
		SoundPlayer^ Neck = gcnew SoundPlayer("Neck.wav");//////////////
		SoundPlayer^ Chest = gcnew SoundPlayer("Chest.wav");/////////
		SoundPlayer^ Arm = gcnew SoundPlayer("Arm.wav");///////////
		SoundPlayer^ Hand = gcnew SoundPlayer("Hand.wav");////////
		SoundPlayer^ Leg = gcnew SoundPlayer("Leg.wav");/////////////////
		SoundPlayer^ Foot = gcnew SoundPlayer("Foot.wav");////////////////////
		SoundPlayer^ Ear = gcnew SoundPlayer("Ear.wav");//////////////
		SoundPlayer^ Nose = gcnew SoundPlayer("Nose.wav");///////////
		SoundPlayer^ Elbow = gcnew SoundPlayer("Elbow.wav");////////////
	private: System::Windows::Forms::Label^ label7;
	public:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::Button^ btnresultado;




		SoundPlayer^ Knee = gcnew SoundPlayer("Knee.wav");//////////////
		//////////////////////////////////////////////////////////////////carga de sonidos
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
		}/////////////////////////////////////////////////limpieza
		
		void cambiarcolor() {
			int pasar;
			pasar = Convert::ToInt32(sonido->Text);
			if (pasar == 1) {
				btnface->BackColor = BackColor.Red;
				btnface->Enabled = false;
				btnneck->Enabled = true;
				btnneck->BackColor=BackColor.Yellow;
				sonido->Text = "2";
			}
			else if (pasar == 2) {
				btnneck->BackColor = BackColor.Red;
				btnneck->Enabled = false;
				btnchest->Enabled = true;
				btnchest->BackColor = BackColor.Yellow;
				sonido->Text = "3";
			}
			else if (pasar == 3) {
				btnchest->BackColor = BackColor.Red;
				btnchest->Enabled = false;
				btnarm->Enabled = true;
				btnarm->BackColor = BackColor.Yellow;
				sonido->Text = "4";
			}
			else if (pasar == 4) {
				btnarm->BackColor = BackColor.Red;
				btnarm->Enabled = false;
				btnhand->Enabled = true;
				btnhand->BackColor = BackColor.Yellow;
				sonido->Text = "5";
			}
			else if (pasar == 5) {
				btnhand->BackColor = BackColor.Red;
				btnhand->Enabled = false;
				btnleg->Enabled = true;
				btnleg->BackColor = BackColor.Yellow;
				sonido->Text = "6";
			}
			else if (pasar == 6) {
				btnleg->BackColor = BackColor.Red;
				btnleg->Enabled = false;
				btnfoot->Enabled = true;
				btnfoot->BackColor = BackColor.Yellow;
				sonido->Text = "7";
			}
			else if (pasar == 7) {
				btnfoot->BackColor = BackColor.Red;
				btnfoot->Enabled = false;
				btneye->Enabled = true;
				btneye->BackColor = BackColor.Yellow;
				sonido->Text = "8";
			}
			else if (pasar == 8) {
				btneye->BackColor = BackColor.Red;
				btneye->Enabled = false;
				btnear->Enabled = true;
				btnear->BackColor = BackColor.Yellow;
				sonido->Text = "9";
			}
			else if (pasar == 9) {
				btnear->BackColor = BackColor.Red;
				btnear->Enabled = false;
				btnnose->Enabled = true;
				btnnose->BackColor = BackColor.Yellow;
				sonido->Text = "10";
			}
			else if (pasar == 10) {
				btnnose->BackColor = BackColor.Red;
				btnnose->Enabled = false;
				btnelbow->Enabled = true;
				btnelbow->BackColor = BackColor.Yellow;
				sonido->Text = "11";
			}
			else if (pasar == 11) {
				btnelbow->BackColor = BackColor.Red;
				btnelbow->Enabled = false;
				btnknee->Enabled = true;
				btnknee->BackColor = BackColor.Yellow;
				sonido->Text = "12";
			}
			else if (pasar == 12) {
				btnknee->BackColor = BackColor.Red;
				btnknee->Enabled = false;
				registrar();
			}
			///////////////////////////////////////////////////////////////////////cambio de color
		}
		void activar() {
			cara->Enabled = true;
			cuello->Enabled = true;
			pecho->Enabled = true;
			brazo->Enabled = true;
			mano->Enabled = true;
			pierna->Enabled = true;
			pie->Enabled = true;
			ojo->Enabled = true;
			oreja->Enabled = true;
			nariz->Enabled = true;
			codo->Enabled = true;
			rodilla->Enabled = true;
		}/////////////////////////////////////////////////activacion
		void desactivar() {
			cara->Enabled = false;
			cuello->Enabled = false;
			pecho->Enabled = false;
			brazo->Enabled = false;
			mano->Enabled = false;
			pierna->Enabled = false;
			pie->Enabled = false;
			ojo->Enabled = false;
			oreja->Enabled = false;
			nariz->Enabled = false;
			codo->Enabled = false;
			rodilla->Enabled = false;
		}/////////////////////////////////////////////////desactivacion
		void registrar () {
			mkdir("C:/Body");
			StreamWriter^ examen = gcnew StreamWriter("C://Body//resultados.txt", "a+");
			examen->Write("\r\n");
			examen->Write(txtnombre->Text); examen->Write(";");
			examen->Write(txtgrado->Text); examen->Write(";");
			examen->Write(txtseccion->Text); examen->Write(";");
			examen->Write(ganado->Text); examen->Write(";");
			examen->Write("R");
			examen->Close();
			MessageBox::Show("El examen ha finalizado, tus datos y el resultado fueron registrados de forma automatica", "EXAMEN TERMINADO", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}///////////////////////////////////////////////////////////////////////////////////registro
		void sumar() {
			int n1, n2, control,ganar,nota=100;
			n1 = Convert::ToInt32(ganado->Text);
			n2 = Convert::ToInt32(perdido->Text);
			control = n1 + n2+9;
			if (control <= 100) {
				n1 += 9;
				ganado->Text = Convert::ToString(n1);
			}
			else {
				control = n1 + n2;
				ganar = nota - control;
				n1 += ganar;
				ganado->Text = Convert::ToString(n1);
			}
		}////////////////////////////////////////////////////////calificacion
		void restar() {
			int n1, n2, control, perder, nota = 100;
			n1 = Convert::ToInt32(ganado->Text);
			n2 = Convert::ToInt32(perdido->Text);
			control = n1 + n2 + 9;
			if (control <= 100) {
				n2 += 9;
				perdido->Text = Convert::ToString(n2);
			}
			else {
				control = n1 + n2;
				perder = nota - control;
				n2 += perder;
				perdido->Text = Convert::ToString(n2);
			}
		}////////////////////////////////////////////////////////calificacion
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ intentos;
	private: System::Windows::Forms::Label^ perdido;

	private: System::Windows::Forms::Label^ ganado;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ sonido;


	public:
		SoundPlayer^ Toe = gcnew SoundPlayer("Toe.wav");
		Evaluacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Evaluacion()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Button^ btnface;
protected:



	private: System::Windows::Forms::Button^ btnchest;
	protected:




	private: System::Windows::Forms::Button^ btnneck;
	private: System::Windows::Forms::Button^ btnarm;




	private: System::Windows::Forms::Button^ btnknee;



	private: System::Windows::Forms::Button^ btnelbow;







	private: System::Windows::Forms::Button^ btnnose;

	private: System::Windows::Forms::Button^ btnear;

	private: System::Windows::Forms::Button^ btneye;

	private: System::Windows::Forms::Button^ btnfoot;

	private: System::Windows::Forms::Button^ btnleg;



	private: System::Windows::Forms::Button^ btnhand;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtgrado;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtseccion;

	private: System::Windows::Forms::TextBox^ txtnombre;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



private: System::Windows::Forms::Label^ nariz;
private: System::Windows::Forms::Label^ oreja;
private: System::Windows::Forms::Label^ ojo;








private: System::Windows::Forms::Label^ cara;
private: System::Windows::Forms::Label^ cuello;
private: System::Windows::Forms::Label^ pecho;
private: System::Windows::Forms::Label^ brazo;
private: System::Windows::Forms::Label^ mano;

private: System::Windows::Forms::Label^ pierna;
private: System::Windows::Forms::Label^ pie;












private: System::Windows::Forms::Label^ codo;



private: System::Windows::Forms::Label^ rodilla;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Evaluacion::typeid));
			this->btnface = (gcnew System::Windows::Forms::Button());
			this->btnchest = (gcnew System::Windows::Forms::Button());
			this->btnneck = (gcnew System::Windows::Forms::Button());
			this->btnarm = (gcnew System::Windows::Forms::Button());
			this->btnknee = (gcnew System::Windows::Forms::Button());
			this->btnelbow = (gcnew System::Windows::Forms::Button());
			this->btnnose = (gcnew System::Windows::Forms::Button());
			this->btnear = (gcnew System::Windows::Forms::Button());
			this->btneye = (gcnew System::Windows::Forms::Button());
			this->btnfoot = (gcnew System::Windows::Forms::Button());
			this->btnleg = (gcnew System::Windows::Forms::Button());
			this->btnhand = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtgrado = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtseccion = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nariz = (gcnew System::Windows::Forms::Label());
			this->oreja = (gcnew System::Windows::Forms::Label());
			this->ojo = (gcnew System::Windows::Forms::Label());
			this->cara = (gcnew System::Windows::Forms::Label());
			this->cuello = (gcnew System::Windows::Forms::Label());
			this->pecho = (gcnew System::Windows::Forms::Label());
			this->brazo = (gcnew System::Windows::Forms::Label());
			this->mano = (gcnew System::Windows::Forms::Label());
			this->pierna = (gcnew System::Windows::Forms::Label());
			this->pie = (gcnew System::Windows::Forms::Label());
			this->codo = (gcnew System::Windows::Forms::Label());
			this->rodilla = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->intentos = (gcnew System::Windows::Forms::Label());
			this->perdido = (gcnew System::Windows::Forms::Label());
			this->ganado = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->sonido = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->btnresultado = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnface
			// 
			this->btnface->BackColor = System::Drawing::Color::Yellow;
			this->btnface->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnface.BackgroundImage")));
			this->btnface->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnface->Location = System::Drawing::Point(42, 34);
			this->btnface->Name = L"btnface";
			this->btnface->Size = System::Drawing::Size(35, 30);
			this->btnface->TabIndex = 0;
			this->btnface->UseVisualStyleBackColor = false;
			this->btnface->Click += gcnew System::EventHandler(this, &Evaluacion::Button1_Click);
			// 
			// btnchest
			// 
			this->btnchest->BackColor = System::Drawing::SystemColors::Control;
			this->btnchest->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnchest.BackgroundImage")));
			this->btnchest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnchest->Enabled = false;
			this->btnchest->Location = System::Drawing::Point(200, 34);
			this->btnchest->Name = L"btnchest";
			this->btnchest->Size = System::Drawing::Size(36, 30);
			this->btnchest->TabIndex = 3;
			this->btnchest->UseVisualStyleBackColor = false;
			this->btnchest->Click += gcnew System::EventHandler(this, &Evaluacion::Btnchest_Click);
			// 
			// btnneck
			// 
			this->btnneck->BackColor = System::Drawing::SystemColors::Control;
			this->btnneck->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnneck.BackgroundImage")));
			this->btnneck->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnneck->Enabled = false;
			this->btnneck->Location = System::Drawing::Point(120, 34);
			this->btnneck->Name = L"btnneck";
			this->btnneck->Size = System::Drawing::Size(36, 30);
			this->btnneck->TabIndex = 4;
			this->btnneck->UseVisualStyleBackColor = false;
			this->btnneck->Click += gcnew System::EventHandler(this, &Evaluacion::Button5_Click);
			// 
			// btnarm
			// 
			this->btnarm->BackColor = System::Drawing::SystemColors::Control;
			this->btnarm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnarm.BackgroundImage")));
			this->btnarm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnarm->Enabled = false;
			this->btnarm->Location = System::Drawing::Point(42, 78);
			this->btnarm->Name = L"btnarm";
			this->btnarm->Size = System::Drawing::Size(36, 30);
			this->btnarm->TabIndex = 5;
			this->btnarm->UseVisualStyleBackColor = false;
			this->btnarm->Click += gcnew System::EventHandler(this, &Evaluacion::Btnarm_Click);
			// 
			// btnknee
			// 
			this->btnknee->BackColor = System::Drawing::SystemColors::Control;
			this->btnknee->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnknee.BackgroundImage")));
			this->btnknee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnknee->Enabled = false;
			this->btnknee->Location = System::Drawing::Point(200, 161);
			this->btnknee->Name = L"btnknee";
			this->btnknee->Size = System::Drawing::Size(36, 30);
			this->btnknee->TabIndex = 7;
			this->btnknee->UseVisualStyleBackColor = false;
			this->btnknee->Click += gcnew System::EventHandler(this, &Evaluacion::Btnknee_Click);
			// 
			// btnelbow
			// 
			this->btnelbow->BackColor = System::Drawing::SystemColors::Control;
			this->btnelbow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnelbow.BackgroundImage")));
			this->btnelbow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnelbow->Enabled = false;
			this->btnelbow->Location = System::Drawing::Point(120, 161);
			this->btnelbow->Name = L"btnelbow";
			this->btnelbow->Size = System::Drawing::Size(36, 30);
			this->btnelbow->TabIndex = 9;
			this->btnelbow->UseVisualStyleBackColor = false;
			this->btnelbow->Click += gcnew System::EventHandler(this, &Evaluacion::Btnelbow_Click);
			// 
			// btnnose
			// 
			this->btnnose->BackColor = System::Drawing::SystemColors::Control;
			this->btnnose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnnose.BackgroundImage")));
			this->btnnose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnnose->Enabled = false;
			this->btnnose->Location = System::Drawing::Point(42, 161);
			this->btnnose->Name = L"btnnose";
			this->btnnose->Size = System::Drawing::Size(36, 30);
			this->btnnose->TabIndex = 13;
			this->btnnose->UseVisualStyleBackColor = false;
			this->btnnose->Click += gcnew System::EventHandler(this, &Evaluacion::Btnnose_Click);
			// 
			// btnear
			// 
			this->btnear->BackColor = System::Drawing::SystemColors::Control;
			this->btnear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnear.BackgroundImage")));
			this->btnear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnear->Enabled = false;
			this->btnear->Location = System::Drawing::Point(200, 118);
			this->btnear->Name = L"btnear";
			this->btnear->Size = System::Drawing::Size(36, 30);
			this->btnear->TabIndex = 14;
			this->btnear->UseVisualStyleBackColor = false;
			this->btnear->Click += gcnew System::EventHandler(this, &Evaluacion::Btnear_Click);
			// 
			// btneye
			// 
			this->btneye->BackColor = System::Drawing::SystemColors::Control;
			this->btneye->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btneye.BackgroundImage")));
			this->btneye->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btneye->Enabled = false;
			this->btneye->Location = System::Drawing::Point(120, 120);
			this->btneye->Name = L"btneye";
			this->btneye->Size = System::Drawing::Size(36, 30);
			this->btneye->TabIndex = 15;
			this->btneye->UseVisualStyleBackColor = false;
			this->btneye->Click += gcnew System::EventHandler(this, &Evaluacion::Btneye_Click);
			// 
			// btnfoot
			// 
			this->btnfoot->BackColor = System::Drawing::SystemColors::Control;
			this->btnfoot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnfoot.BackgroundImage")));
			this->btnfoot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnfoot->Enabled = false;
			this->btnfoot->Location = System::Drawing::Point(42, 121);
			this->btnfoot->Name = L"btnfoot";
			this->btnfoot->Size = System::Drawing::Size(36, 30);
			this->btnfoot->TabIndex = 16;
			this->btnfoot->UseVisualStyleBackColor = false;
			this->btnfoot->Click += gcnew System::EventHandler(this, &Evaluacion::Btnfoot_Click);
			// 
			// btnleg
			// 
			this->btnleg->BackColor = System::Drawing::SystemColors::Control;
			this->btnleg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnleg.BackgroundImage")));
			this->btnleg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnleg->Enabled = false;
			this->btnleg->Location = System::Drawing::Point(200, 77);
			this->btnleg->Name = L"btnleg";
			this->btnleg->Size = System::Drawing::Size(36, 30);
			this->btnleg->TabIndex = 17;
			this->btnleg->UseVisualStyleBackColor = false;
			this->btnleg->Click += gcnew System::EventHandler(this, &Evaluacion::Btnleg_Click);
			// 
			// btnhand
			// 
			this->btnhand->BackColor = System::Drawing::SystemColors::Control;
			this->btnhand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnhand.BackgroundImage")));
			this->btnhand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnhand->Enabled = false;
			this->btnhand->Location = System::Drawing::Point(120, 77);
			this->btnhand->Name = L"btnhand";
			this->btnhand->Size = System::Drawing::Size(36, 30);
			this->btnhand->TabIndex = 19;
			this->btnhand->UseVisualStyleBackColor = false;
			this->btnhand->Click += gcnew System::EventHandler(this, &Evaluacion::Btnhand_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(84, 210);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(560, 413);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(144, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"NOMBRE COMPLETO";
			// 
			// txtgrado
			// 
			this->txtgrado->BackColor = System::Drawing::Color::White;
			this->txtgrado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtgrado->ForeColor = System::Drawing::Color::Blue;
			this->txtgrado->Location = System::Drawing::Point(53, 130);
			this->txtgrado->Name = L"txtgrado";
			this->txtgrado->Size = System::Drawing::Size(175, 20);
			this->txtgrado->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnchest);
			this->groupBox1->Controls->Add(this->btnface);
			this->groupBox1->Controls->Add(this->btnneck);
			this->groupBox1->Controls->Add(this->btnarm);
			this->groupBox1->Controls->Add(this->btnhand);
			this->groupBox1->Controls->Add(this->btnknee);
			this->groupBox1->Controls->Add(this->btnelbow);
			this->groupBox1->Controls->Add(this->btnnose);
			this->groupBox1->Controls->Add(this->btnear);
			this->groupBox1->Controls->Add(this->btneye);
			this->groupBox1->Controls->Add(this->btnfoot);
			this->groupBox1->Controls->Add(this->btnleg);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->groupBox1->ForeColor = System::Drawing::Color::Aqua;
			this->groupBox1->Location = System::Drawing::Point(762, 290);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 211);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pronunciaciones en Ingles";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Evaluacion::GroupBox1_Enter);
			// 
			// txtseccion
			// 
			this->txtseccion->BackColor = System::Drawing::Color::White;
			this->txtseccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtseccion->ForeColor = System::Drawing::Color::Blue;
			this->txtseccion->Location = System::Drawing::Point(271, 130);
			this->txtseccion->Name = L"txtseccion";
			this->txtseccion->Size = System::Drawing::Size(96, 20);
			this->txtseccion->TabIndex = 24;
			this->txtseccion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtnombre
			// 
			this->txtnombre->BackColor = System::Drawing::Color::White;
			this->txtnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre->ForeColor = System::Drawing::Color::Blue;
			this->txtnombre->Location = System::Drawing::Point(48, 74);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(319, 20);
			this->txtnombre->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(36, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 35);
			this->label3->TabIndex = 28;
			this->label3->Text = L"INGRESE TUS DATOS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(286, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 29;
			this->label4->Text = L"SECCIÓN";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(128, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"GRADO";
			// 
			// nariz
			// 
			this->nariz->BackColor = System::Drawing::Color::White;
			this->nariz->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->nariz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nariz->Enabled = false;
			this->nariz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->nariz->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->nariz->Location = System::Drawing::Point(159, 302);
			this->nariz->Name = L"nariz";
			this->nariz->Size = System::Drawing::Size(69, 20);
			this->nariz->TabIndex = 35;
			this->nariz->Text = L"Nose";
			this->nariz->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->nariz->Click += gcnew System::EventHandler(this, &Evaluacion::Nariz_Click);
			// 
			// oreja
			// 
			this->oreja->BackColor = System::Drawing::Color::White;
			this->oreja->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->oreja->Cursor = System::Windows::Forms::Cursors::Hand;
			this->oreja->Enabled = false;
			this->oreja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->oreja->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->oreja->Location = System::Drawing::Point(497, 283);
			this->oreja->Name = L"oreja";
			this->oreja->Size = System::Drawing::Size(69, 20);
			this->oreja->TabIndex = 36;
			this->oreja->Text = L"Ear";
			this->oreja->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->oreja->Click += gcnew System::EventHandler(this, &Evaluacion::Oreja_Click);
			// 
			// ojo
			// 
			this->ojo->BackColor = System::Drawing::Color::White;
			this->ojo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ojo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ojo->Enabled = false;
			this->ojo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->ojo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ojo->Location = System::Drawing::Point(159, 245);
			this->ojo->Name = L"ojo";
			this->ojo->Size = System::Drawing::Size(69, 20);
			this->ojo->TabIndex = 37;
			this->ojo->Text = L"Eye";
			this->ojo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ojo->Click += gcnew System::EventHandler(this, &Evaluacion::Ojo_Click);
			// 
			// cara
			// 
			this->cara->BackColor = System::Drawing::Color::White;
			this->cara->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->cara->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cara->Enabled = false;
			this->cara->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->cara->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cara->Location = System::Drawing::Point(497, 347);
			this->cara->Name = L"cara";
			this->cara->Size = System::Drawing::Size(69, 20);
			this->cara->TabIndex = 38;
			this->cara->Text = L"Face";
			this->cara->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cara->Click += gcnew System::EventHandler(this, &Evaluacion::Cara_Click);
			// 
			// cuello
			// 
			this->cuello->BackColor = System::Drawing::Color::White;
			this->cuello->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->cuello->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cuello->Enabled = false;
			this->cuello->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->cuello->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cuello->Location = System::Drawing::Point(159, 440);
			this->cuello->Name = L"cuello";
			this->cuello->Size = System::Drawing::Size(69, 20);
			this->cuello->TabIndex = 39;
			this->cuello->Text = L"Neck";
			this->cuello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cuello->Click += gcnew System::EventHandler(this, &Evaluacion::Cuello_Click);
			// 
			// pecho
			// 
			this->pecho->BackColor = System::Drawing::Color::White;
			this->pecho->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pecho->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pecho->Enabled = false;
			this->pecho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->pecho->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pecho->Location = System::Drawing::Point(497, 402);
			this->pecho->Name = L"pecho";
			this->pecho->Size = System::Drawing::Size(69, 20);
			this->pecho->TabIndex = 40;
			this->pecho->Text = L"Chest";
			this->pecho->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pecho->Click += gcnew System::EventHandler(this, &Evaluacion::Pecho_Click);
			// 
			// brazo
			// 
			this->brazo->BackColor = System::Drawing::Color::White;
			this->brazo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->brazo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->brazo->Enabled = false;
			this->brazo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->brazo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->brazo->Location = System::Drawing::Point(497, 471);
			this->brazo->Name = L"brazo";
			this->brazo->Size = System::Drawing::Size(69, 20);
			this->brazo->TabIndex = 41;
			this->brazo->Text = L"Arm";
			this->brazo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->brazo->Click += gcnew System::EventHandler(this, &Evaluacion::Brazo_Click);
			// 
			// mano
			// 
			this->mano->BackColor = System::Drawing::Color::White;
			this->mano->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->mano->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mano->Enabled = false;
			this->mano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->mano->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->mano->Location = System::Drawing::Point(159, 384);
			this->mano->Name = L"mano";
			this->mano->Size = System::Drawing::Size(69, 20);
			this->mano->TabIndex = 42;
			this->mano->Text = L"Hand";
			this->mano->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->mano->Click += gcnew System::EventHandler(this, &Evaluacion::Mano_Click);
			// 
			// pierna
			// 
			this->pierna->BackColor = System::Drawing::Color::White;
			this->pierna->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pierna->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pierna->Enabled = false;
			this->pierna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->pierna->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pierna->Location = System::Drawing::Point(159, 556);
			this->pierna->Name = L"pierna";
			this->pierna->Size = System::Drawing::Size(69, 20);
			this->pierna->TabIndex = 44;
			this->pierna->Text = L"Leg";
			this->pierna->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pierna->Click += gcnew System::EventHandler(this, &Evaluacion::Pierna_Click);
			// 
			// pie
			// 
			this->pie->BackColor = System::Drawing::Color::White;
			this->pie->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pie->Enabled = false;
			this->pie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->pie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pie->Location = System::Drawing::Point(497, 558);
			this->pie->Name = L"pie";
			this->pie->Size = System::Drawing::Size(69, 20);
			this->pie->TabIndex = 45;
			this->pie->Text = L"Foot";
			this->pie->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pie->Click += gcnew System::EventHandler(this, &Evaluacion::Pie_Click);
			// 
			// codo
			// 
			this->codo->BackColor = System::Drawing::Color::White;
			this->codo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->codo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->codo->Enabled = false;
			this->codo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->codo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->codo->Location = System::Drawing::Point(159, 500);
			this->codo->Name = L"codo";
			this->codo->Size = System::Drawing::Size(69, 20);
			this->codo->TabIndex = 48;
			this->codo->Text = L"Elbow";
			this->codo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->codo->Click += gcnew System::EventHandler(this, &Evaluacion::Codo_Click);
			// 
			// rodilla
			// 
			this->rodilla->BackColor = System::Drawing::Color::White;
			this->rodilla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->rodilla->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rodilla->Enabled = false;
			this->rodilla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->rodilla->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rodilla->Location = System::Drawing::Point(497, 521);
			this->rodilla->Name = L"rodilla";
			this->rodilla->Size = System::Drawing::Size(69, 20);
			this->rodilla->TabIndex = 50;
			this->rodilla->Text = L"Knee";
			this->rodilla->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rodilla->Click += gcnew System::EventHandler(this, &Evaluacion::Rodilla_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(827, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 53;
			this->button1->Text = L"Ver Instrucciones";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Evaluacion::Button1_Click_1);
			// 
			// intentos
			// 
			this->intentos->BackColor = System::Drawing::Color::Transparent;
			this->intentos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->intentos->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intentos->ForeColor = System::Drawing::Color::Black;
			this->intentos->Location = System::Drawing::Point(797, 55);
			this->intentos->Name = L"intentos";
			this->intentos->Size = System::Drawing::Size(83, 46);
			this->intentos->TabIndex = 54;
			this->intentos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// perdido
			// 
			this->perdido->BackColor = System::Drawing::Color::Transparent;
			this->perdido->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->perdido->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perdido->ForeColor = System::Drawing::Color::Black;
			this->perdido->Location = System::Drawing::Point(1043, 55);
			this->perdido->Name = L"perdido";
			this->perdido->Size = System::Drawing::Size(83, 46);
			this->perdido->TabIndex = 55;
			this->perdido->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ganado
			// 
			this->ganado->BackColor = System::Drawing::Color::Transparent;
			this->ganado->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ganado->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ganado->ForeColor = System::Drawing::Color::Black;
			this->ganado->Location = System::Drawing::Point(917, 55);
			this->ganado->Name = L"ganado";
			this->ganado->Size = System::Drawing::Size(83, 46);
			this->ganado->TabIndex = 56;
			this->ganado->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(814, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 16);
			this->label2->TabIndex = 57;
			this->label2->Text = L"TIENE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(801, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 16);
			this->label6->TabIndex = 58;
			this->label6->Text = L"INTENTOS";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(924, 38);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(71, 16);
			this->label27->TabIndex = 59;
			this->label27->Text = L"PUNTOS";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(921, 101);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(82, 16);
			this->label28->TabIndex = 60;
			this->label28->Text = L"GANADOS";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(1051, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(71, 16);
			this->label29->TabIndex = 61;
			this->label29->Text = L"PUNTOS";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(1046, 101);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(86, 16);
			this->label30->TabIndex = 62;
			this->label30->Text = L"PERDIDOS";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(690, 38);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(59, 16);
			this->label32->TabIndex = 64;
			this->label32->Text = L"PARTE";
			// 
			// sonido
			// 
			this->sonido->BackColor = System::Drawing::Color::Transparent;
			this->sonido->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->sonido->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sonido->ForeColor = System::Drawing::Color::Black;
			this->sonido->Location = System::Drawing::Point(678, 55);
			this->sonido->Name = L"sonido";
			this->sonido->Size = System::Drawing::Size(83, 46);
			this->sonido->TabIndex = 63;
			this->sonido->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(48, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 65;
			this->label7->Text = L"*Campo obligatorio";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(270, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 13);
			this->label8->TabIndex = 66;
			this->label8->Text = L"*Campo obligatorio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(54, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 67;
			this->label9->Text = L"*Campo obligatorio";
			// 
			// btnsalir
			// 
			this->btnsalir->BackColor = System::Drawing::Color::Transparent;
			this->btnsalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnsalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnsalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsalir->ForeColor = System::Drawing::Color::White;
			this->btnsalir->Location = System::Drawing::Point(1043, 589);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(95, 25);
			this->btnsalir->TabIndex = 68;
			this->btnsalir->Text = L"SALIR";
			this->btnsalir->UseVisualStyleBackColor = false;
			this->btnsalir->Click += gcnew System::EventHandler(this, &Evaluacion::Button2_Click);
			// 
			// btnresultado
			// 
			this->btnresultado->BackColor = System::Drawing::Color::Transparent;
			this->btnresultado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnresultado->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnresultado->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnresultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnresultado->ForeColor = System::Drawing::Color::White;
			this->btnresultado->Location = System::Drawing::Point(882, 589);
			this->btnresultado->Name = L"btnresultado";
			this->btnresultado->Size = System::Drawing::Size(140, 25);
			this->btnresultado->TabIndex = 69;
			this->btnresultado->Text = L"VER RESULTADOS";
			this->btnresultado->UseVisualStyleBackColor = false;
			this->btnresultado->Click += gcnew System::EventHandler(this, &Evaluacion::Btnresultado_Click);
			// 
			// Evaluacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1153, 626);
			this->Controls->Add(this->btnresultado);
			this->Controls->Add(this->btnsalir);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->sonido);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ganado);
			this->Controls->Add(this->perdido);
			this->Controls->Add(this->intentos);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rodilla);
			this->Controls->Add(this->codo);
			this->Controls->Add(this->pie);
			this->Controls->Add(this->pierna);
			this->Controls->Add(this->mano);
			this->Controls->Add(this->brazo);
			this->Controls->Add(this->pecho);
			this->Controls->Add(this->cuello);
			this->Controls->Add(this->cara);
			this->Controls->Add(this->ojo);
			this->Controls->Add(this->oreja);
			this->Controls->Add(this->nariz);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtseccion);
			this->Controls->Add(this->txtgrado);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Blue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Evaluacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Evaluacion";
			this->Load += gcnew System::EventHandler(this, &Evaluacion::Evaluacion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtgrado->Text == "") {
			MessageBox::Show("Debe registrar tus datos para comenzar el examen", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (txtnombre->Text == "") {
			MessageBox::Show("Debe registrar tus datos para comenzar el examen", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (txtseccion->Text == "") {
			MessageBox::Show("Debe registrar tus datos para comenzar el examen", "DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			Face->Play();
			activar();
		}
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Neck->Play();
		activar();
		limpiar();
	}
private: System::Void Evaluacion_Load(System::Object^ sender, System::EventArgs^ e) {
	intentos->Text = "2";
	ganado->Text = "0";
	perdido->Text = "0";
	sonido->Text = "1";
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Presione un botón para escuchar la pronunciacion en inglés, luego presione el botón que corresponde al español ubicados a la izquierda en la imagen correspondiente.\n\nSolo tiene dos intentos para encontrar la respuesta correcta o pasar al siguiente sonido","INSTRUCCIONES",MessageBoxButtons::OK,MessageBoxIcon::Information);
}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Btnchest_Click(System::Object^ sender, System::EventArgs^ e) {
	Chest->Play();
	activar();
	limpiar();
}
private: System::Void Btnarm_Click(System::Object^ sender, System::EventArgs^ e) {
	Arm->Play();
	activar();
	limpiar();
}
private: System::Void Btnhand_Click(System::Object^ sender, System::EventArgs^ e) {
	Hand->Play();
	activar();
	limpiar();
}

private: System::Void Btnleg_Click(System::Object^ sender, System::EventArgs^ e) {
	Leg->Play();
	activar();
	limpiar();
}
private: System::Void Btnfoot_Click(System::Object^ sender, System::EventArgs^ e) {
	Foot->Play();
	activar();
	limpiar();
}
private: System::Void Btneye_Click(System::Object^ sender, System::EventArgs^ e) {
	Eye->Play();
	activar();
	limpiar();
}
private: System::Void Btnear_Click(System::Object^ sender, System::EventArgs^ e) {
	Ear->Play();
	activar();
	limpiar();
}
private: System::Void Btnnose_Click(System::Object^ sender, System::EventArgs^ e) {
	Nose->Play();
	activar();
	limpiar();
}
private: System::Void Btnelbow_Click(System::Object^ sender, System::EventArgs^ e) {
	Elbow->Play();
	activar();
	limpiar();
}
private: System::Void Btnknee_Click(System::Object^ sender, System::EventArgs^ e) {
	Knee->Play();
	activar();
	limpiar();
}


private: System::Void Cara_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 1) {
		cara->BackColor = BackColor.GreenYellow;
		btnface->BackColor = BackColor.Blue;
		btnface->Enabled = false;
		btnneck->Enabled = true;
		btnneck->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "2";
		intentos->Text = "2";
		desactivar();
	}
	else {
		cara->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Cuello_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 2) {
		cuello->BackColor = BackColor.GreenYellow;
		btnneck->BackColor = BackColor.Blue;
		btnneck->Enabled = false;
		btnchest->Enabled = true;
		btnchest->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "3";
		intentos->Text = "2";
		desactivar();
	}
	else {
		cuello->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Pecho_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 3) {
		pecho->BackColor = BackColor.GreenYellow;
		btnchest->BackColor = BackColor.Blue;
		btnchest->Enabled = false;
		btnarm->Enabled = true;
		btnarm->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "4";
		intentos->Text = "2";
		desactivar();
	}
	else {
		pecho->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Brazo_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 4) {
		brazo->BackColor = BackColor.GreenYellow;
		btnarm->BackColor = BackColor.Blue;
		btnarm->Enabled = false;
		btnhand->Enabled = true;
		btnhand->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "5";
		intentos->Text = "2";
		desactivar();
	}
	else {
		brazo->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Mano_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 5) {
		mano->BackColor = BackColor.GreenYellow;
		btnhand->BackColor = BackColor.Blue;
		btnhand->Enabled = false;
		btnleg->Enabled = true;
		btnleg->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "6";
		intentos->Text = "2";
		desactivar();
	}
	else {
		mano->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Pierna_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 6) {
		pierna->BackColor = BackColor.GreenYellow;
		btnleg->BackColor = BackColor.Blue;
		btnleg->Enabled = false;
		btnfoot->Enabled = true;
		btnfoot->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "7";
		intentos->Text = "2";
		desactivar();
	}
	else {
		pierna->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Pie_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 7) {
		pie->BackColor = BackColor.GreenYellow;
		btnfoot->BackColor = BackColor.Blue;
		btnfoot->Enabled = false;
		btneye->Enabled = true;
		btneye->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "8";
		intentos->Text = "2";
		desactivar();
	}
	else {
		pie->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Ojo_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 8) {
		ojo->BackColor = BackColor.GreenYellow;
		btneye->BackColor = BackColor.Blue;
		btneye->Enabled = false;
		btnear->Enabled = true;
		btnear->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "9";
		intentos->Text = "2";
		desactivar();
	}
	else {
		ojo->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Oreja_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 9) {
		oreja->BackColor = BackColor.GreenYellow;
		btnear->BackColor = BackColor.Blue;
		btnear->Enabled = false;
		btnnose->Enabled = true;
		btnnose->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "10";
		intentos->Text = "2";
		desactivar();
	}
	else {
		oreja->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Nariz_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 10) {
		nariz->BackColor = BackColor.GreenYellow;
		btnnose->BackColor = BackColor.Blue;
		btnnose->Enabled = false;
		btnelbow->Enabled = true;
		btnelbow->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "11";
		intentos->Text = "2";
		desactivar();
	}
	else {
		nariz->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Codo_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion, descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 11) {
		codo->BackColor = BackColor.GreenYellow;
		btnelbow->BackColor = BackColor.Blue;
		btnelbow->Enabled = false;
		btnknee->Enabled = true;
		btnknee->BackColor = BackColor.Yellow;
		sumar();
		sonido->Text = "12";
		intentos->Text = "2";
		desactivar();
	}
	else {
		codo->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Rodilla_Click(System::Object^ sender, System::EventArgs^ e) {
	int comparacion,  descontar;
	comparacion = Convert::ToInt32(sonido->Text);
	if (comparacion == 12) {
		rodilla->BackColor = BackColor.GreenYellow;
		btnknee->BackColor = BackColor.Blue;
		btnknee->Enabled = false;
		sumar();
		registrar();
		intentos->Text = "2";
		desactivar();
	}
	else {
		rodilla->BackColor = BackColor.Red;
		descontar = Convert::ToInt32(intentos->Text);
		descontar -= 1;
		if (descontar <= 0) {
			restar();
			cambiarcolor();
			intentos->Text = "2";
			desactivar();
		}
		else {
			intentos->Text = Convert::ToString(descontar);
		}
	}
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sonido->Text == "12"&&btnknee->Enabled==false) {
		this->Close();
	}
	else {
		MessageBox::Show("Debe terminar el examen para poder salir", "SALIR?", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	
}
private: System::Void Btnresultado_Click(System::Object^ sender, System::EventArgs^ e) {
	Resultados^ fr = gcnew Resultados();
	fr->ShowDialog();
}
private: System::Void Dientes_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dedopie_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
