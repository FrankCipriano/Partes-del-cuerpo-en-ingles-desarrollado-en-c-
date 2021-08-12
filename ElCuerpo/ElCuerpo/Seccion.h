#pragma once
#include "Aprendizaje.h"
#include "Evaluacion.h"
#include "Resultados.h"

namespace ElCuerpo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Seccion
	/// </summary>
	public ref class Seccion : public System::Windows::Forms::Form
	{
	public:
		int x;
		Seccion(int info)
		{
			x = info;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Seccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnaprender;

	private: System::Windows::Forms::Button^ btnresultado;
	protected:





	private: System::Windows::Forms::Button^ btnevaluar;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Seccion::typeid));
			this->btnaprender = (gcnew System::Windows::Forms::Button());
			this->btnresultado = (gcnew System::Windows::Forms::Button());
			this->btnevaluar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnaprender
			// 
			this->btnaprender->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnaprender->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnaprender->BackColor = System::Drawing::Color::Red;
			this->btnaprender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnaprender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btnaprender->ForeColor = System::Drawing::Color::White;
			this->btnaprender->Location = System::Drawing::Point(243, 186);
			this->btnaprender->Name = L"btnaprender";
			this->btnaprender->Size = System::Drawing::Size(122, 27);
			this->btnaprender->TabIndex = 0;
			this->btnaprender->Text = L"APRENDER";
			this->btnaprender->UseVisualStyleBackColor = false;
			this->btnaprender->Click += gcnew System::EventHandler(this, &Seccion::Btnaprender_Click);
			// 
			// btnresultado
			// 
			this->btnresultado->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnresultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnresultado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnresultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btnresultado->ForeColor = System::Drawing::Color::White;
			this->btnresultado->Location = System::Drawing::Point(243, 283);
			this->btnresultado->Name = L"btnresultado";
			this->btnresultado->Size = System::Drawing::Size(122, 27);
			this->btnresultado->TabIndex = 2;
			this->btnresultado->Text = L"RESULTADO";
			this->btnresultado->UseVisualStyleBackColor = false;
			this->btnresultado->Click += gcnew System::EventHandler(this, &Seccion::Button3_Click);
			// 
			// btnevaluar
			// 
			this->btnevaluar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnevaluar->BackColor = System::Drawing::Color::Green;
			this->btnevaluar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnevaluar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btnevaluar->ForeColor = System::Drawing::Color::White;
			this->btnevaluar->Location = System::Drawing::Point(243, 235);
			this->btnevaluar->Name = L"btnevaluar";
			this->btnevaluar->Size = System::Drawing::Size(122, 27);
			this->btnevaluar->TabIndex = 4;
			this->btnevaluar->Text = L"EVALUAR";
			this->btnevaluar->UseVisualStyleBackColor = false;
			this->btnevaluar->Click += gcnew System::EventHandler(this, &Seccion::Btnevaluar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(912, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"x";
			this->label1->Click += gcnew System::EventHandler(this, &Seccion::Label1_Click);
			// 
			// Seccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(941, 389);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnevaluar);
			this->Controls->Add(this->btnresultado);
			this->Controls->Add(this->btnaprender);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Seccion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Seccion";
			this->Load += gcnew System::EventHandler(this, &Seccion::Seccion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Resultados^ fr = gcnew Resultados();
		fr->ShowDialog();
	}
private: System::Void Btnaprender_Click(System::Object^ sender, System::EventArgs^ e) {
	Aprendizaje ^fa = gcnew Aprendizaje(x);
	fa->ShowDialog();
}
private: System::Void Btnevaluar_Click(System::Object^ sender, System::EventArgs^ e) {
	Evaluacion^ fe = gcnew Evaluacion();
	fe->ShowDialog();
}
private: System::Void Btnjugar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Seccion_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btnglosario_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
