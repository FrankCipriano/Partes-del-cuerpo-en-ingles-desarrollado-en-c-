#pragma once
#include "Seccion.h"
namespace ElCuerpo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		int conexion = 1;
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btninicio;
	private: System::Windows::Forms::Label^ label1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->btninicio = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->SuspendLayout();
			// 
			// btninicio
			// 
			this->btninicio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btninicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btninicio->ForeColor = System::Drawing::Color::White;
			this->btninicio->Location = System::Drawing::Point(301, 391);
			this->btninicio->Name = L"btninicio";
			this->btninicio->Size = System::Drawing::Size(250, 63);
			this->btninicio->TabIndex = 0;
			this->btninicio->Text = L"INICIAR AVENTURA";
			this->btninicio->UseVisualStyleBackColor = false;
			this->btninicio->Click += gcnew System::EventHandler(this, &Inicio::Btninicio_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(1200, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &Inicio::Label1_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1236, 556);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btninicio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btninicio_Click(System::Object^ sender, System::EventArgs^ e) {
		int info = 0;
		if (!serialPort1->IsOpen)
		{
			try
			{
				serialPort1->Open();
				info = 1;
				serialPort1->Close();
			}
			catch (Exception^ ex)
			{
				info = 0;
			}
		}

		Seccion ^F2 = gcnew Seccion(info);
		F2 -> ShowDialog();
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
