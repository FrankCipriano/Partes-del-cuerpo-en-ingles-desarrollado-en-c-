#pragma once
#include <fstream>

namespace ElCuerpo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Resultados
	/// </summary>
	public ref class Resultados : public System::Windows::Forms::Form
	{
	public:
		Resultados(void)
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
		~Resultados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ lstresultado;
	protected:

	private: System::Windows::Forms::ColumnHeader^ nombre;
	private: System::Windows::Forms::ColumnHeader^ grado;
	private: System::Windows::Forms::ColumnHeader^ seccion;
	private: System::Windows::Forms::ColumnHeader^ punteo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Resultados::typeid));
			this->lstresultado = (gcnew System::Windows::Forms::ListView());
			this->nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->seccion = (gcnew System::Windows::Forms::ColumnHeader());
			this->punteo = (gcnew System::Windows::Forms::ColumnHeader());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lstresultado
			// 
			this->lstresultado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->nombre, this->grado,
					this->seccion, this->punteo
			});
			this->lstresultado->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstresultado->ForeColor = System::Drawing::Color::Lime;
			this->lstresultado->Location = System::Drawing::Point(12, 12);
			this->lstresultado->Name = L"lstresultado";
			this->lstresultado->Size = System::Drawing::Size(845, 563);
			this->lstresultado->TabIndex = 0;
			this->lstresultado->UseCompatibleStateImageBehavior = false;
			this->lstresultado->View = System::Windows::Forms::View::Details;
			// 
			// nombre
			// 
			this->nombre->Text = L"NOMBRE";
			this->nombre->Width = 366;
			// 
			// grado
			// 
			this->grado->Text = L"GRADO";
			this->grado->Width = 214;
			// 
			// seccion
			// 
			this->seccion->Text = L"SECCION";
			this->seccion->Width = 76;
			// 
			// punteo
			// 
			this->punteo->Text = L"PUNTEO";
			this->punteo->Width = 137;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(854, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 563);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Resultados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1300, 587);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lstresultado);
			this->Name = L"Resultados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resultados";
			this->Load += gcnew System::EventHandler(this, &Resultados::Resultados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Resultados_Load(System::Object^ sender, System::EventArgs^ e) {
		char mystring[100];
		FILE* fe;
		fe = fopen("C://Body//resultados.txt", "r");
		char cadena[50], * nombre, * grado, * seccion, * puntaje;
		rewind(fe);
		lstresultado->Items->Clear();
		bool found = false;
		do {
			fgets(mystring, 100, fe);
			nombre = strtok(mystring, ";");
			grado = strtok(NULL, ";");
			seccion = strtok(NULL, ";");
			puntaje = strtok(NULL, ";");



			String^ name = gcnew String(nombre);
			String^ grade = gcnew String(grado);
			String^ section = gcnew String(seccion);
			String^ rank = gcnew String(puntaje);



			ListViewItem^ lstresultados = gcnew Windows::Forms::ListViewItem(name);
			lstresultados->SubItems->Add(grade);
			lstresultados->SubItems->Add(section);
			lstresultados->SubItems->Add(rank);

			this->lstresultado->Items->Add(lstresultados);


		} while (feof(fe) == 0);
	}
	
};
}
