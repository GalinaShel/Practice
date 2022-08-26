#include "PList.h"
#include <stdlib.h>
#include <ctime>
#define Numbers 11
#pragma once

namespace MyModel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ModelForm
	/// </summary>
	public ref class ModelForm : public System::Windows::Forms::Form
	{

	public:
		ModelForm(void)
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
		~ModelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonNewC;
	protected:
	private: System::Windows::Forms::Button^ buttonStep;
	private: System::Windows::Forms::Button^ buttonStrt;
	private: System::Windows::Forms::GroupBox^ groupBox1;
		   array<Label^, 2>^ peoplePic;
	private: System::Windows::Forms::Label^ effect;
	private: System::Windows::Forms::NumericUpDown^ numericEffect;

	private: System::Windows::Forms::Button^ enterEffect;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ bolnici;
	private: System::Windows::Forms::Label^ label17;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonNewC = (gcnew System::Windows::Forms::Button());
			this->buttonStep = (gcnew System::Windows::Forms::Button());
			this->buttonStrt = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bolnici = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->enterEffect = (gcnew System::Windows::Forms::Button());
			this->numericEffect = (gcnew System::Windows::Forms::NumericUpDown());
			this->effect = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bolnici))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericEffect))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonNewC
			// 
			this->buttonNewC->Location = System::Drawing::Point(230, 48);
			this->buttonNewC->Name = L"buttonNewC";
			this->buttonNewC->Size = System::Drawing::Size(75, 23);
			this->buttonNewC->TabIndex = 0;
			this->buttonNewC->Text = L"Заново";
			this->buttonNewC->UseVisualStyleBackColor = true;
			this->buttonNewC->Click += gcnew System::EventHandler(this, &ModelForm::buttonNewC_Click);
			// 
			// buttonStep
			// 
			this->buttonStep->Location = System::Drawing::Point(311, 48);
			this->buttonStep->Name = L"buttonStep";
			this->buttonStep->Size = System::Drawing::Size(75, 23);
			this->buttonStep->TabIndex = 1;
			this->buttonStep->Text = L"Шаг";
			this->buttonStep->UseVisualStyleBackColor = true;
			this->buttonStep->Click += gcnew System::EventHandler(this, &ModelForm::buttonStep_Click);
			// 
			// buttonStrt
			// 
			this->buttonStrt->Location = System::Drawing::Point(311, 19);
			this->buttonStrt->Name = L"buttonStrt";
			this->buttonStrt->Size = System::Drawing::Size(75, 23);
			this->buttonStrt->TabIndex = 2;
			this->buttonStrt->Text = L"Начать";
			this->buttonStrt->UseVisualStyleBackColor = true;
			this->buttonStrt->Click += gcnew System::EventHandler(this, &ModelForm::buttonStrt_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bolnici);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->enterEffect);
			this->groupBox1->Controls->Add(this->numericEffect);
			this->groupBox1->Controls->Add(this->effect);
			this->groupBox1->Controls->Add(this->buttonNewC);
			this->groupBox1->Controls->Add(this->buttonStrt);
			this->groupBox1->Controls->Add(this->buttonStep);
			this->groupBox1->Location = System::Drawing::Point(12, 411);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(392, 82);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// bolnici
			// 
			this->bolnici->Location = System::Drawing::Point(156, 46);
			this->bolnici->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->bolnici->Name = L"bolnici";
			this->bolnici->Size = System::Drawing::Size(68, 20);
			this->bolnici->TabIndex = 8;
			this->bolnici->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 48);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(135, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Вместимость больниц, %";
			// 
			// enterEffect
			// 
			this->enterEffect->Location = System::Drawing::Point(230, 19);
			this->enterEffect->Name = L"enterEffect";
			this->enterEffect->Size = System::Drawing::Size(75, 23);
			this->enterEffect->TabIndex = 6;
			this->enterEffect->Text = L"Применить";
			this->enterEffect->UseVisualStyleBackColor = true;
			this->enterEffect->Click += gcnew System::EventHandler(this, &ModelForm::enterEffect_Click);
			// 
			// numericEffect
			// 
			this->numericEffect->Location = System::Drawing::Point(156, 16);
			this->numericEffect->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericEffect->Name = L"numericEffect";
			this->numericEffect->Size = System::Drawing::Size(68, 20);
			this->numericEffect->TabIndex = 4;
			this->numericEffect->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// effect
			// 
			this->effect->AutoSize = true;
			this->effect->Location = System::Drawing::Point(6, 18);
			this->effect->Name = L"effect";
			this->effect->Size = System::Drawing::Size(114, 13);
			this->effect->TabIndex = 5;
			this->effect->Text = L"Вакцинированные, %";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(418, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(150, 249);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Условные обозначения:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(43, 206);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L"подвержен";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(43, 176);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"мертв";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(43, 146);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 26);
			this->label14->TabIndex = 13;
			this->label14->Text = L"выздоровел/имеет\r\nиммунитет";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(43, 116);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 26);
			this->label12->TabIndex = 11;
			this->label12->Text = L"в икубационном\r\nпериоде";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(43, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"больной";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Yellow;
			this->label10->Location = System::Drawing::Point(7, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 30);
			this->label10->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(7, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 30);
			this->label9->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(7, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 30);
			this->label8->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(7, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 30);
			this->label6->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(7, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 30);
			this->label5->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Vz - взрослый";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Pn - пенсионер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mc - медик";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ch - ребенок";
			// 
			// ModelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(580, 505);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ModelForm";
			this->Load += gcnew System::EventHandler(this, &ModelForm::ModelForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bolnici))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericEffect))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}

		PList^ list = gcnew PList();
		array<int^, 2>^ type = gcnew array<int^, 2>(Numbers, Numbers);//категория (взрослый, пожилой, медработник, ребенок)
		array<int^, 2>^ risk = gcnew array<int^, 2>(Numbers, Numbers);//риск болезни/смерти
		array<int^, 2>^ status = gcnew array<int^, 2>(Numbers, Numbers);//статус человека: подвержен, болен, инкубационный период/переносчик, привит/имеет иммунитет/выздоровел, мертв
		array<int^, 2>^ dst = gcnew array<int^, 2>(Numbers, Numbers);//кол-во дней, проведенных в определенном статусе
		int efft = 0, boln = 0;


#pragma endregion
	private: System::Void ModelForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->buttonNewC->Enabled = false;
		this->buttonStep->Enabled = false;
		peoplePic = gcnew array<Label^, 2>(Numbers, Numbers);
		int n = 0;
		for (int i = 0, y = 12; i < Numbers; i++)
		{
			int x = 12;
			for (int j = 0; j < Numbers; j++)
			{
				n++;
				this->peoplePic[i, j] = (gcnew System::Windows::Forms::Label());
				this->peoplePic[i, j]->AutoSize = false;
				this->peoplePic[i, j]->Location = System::Drawing::Point(x, y);
				this->peoplePic[i, j]->Name = L"people" + n.ToString();
				this->peoplePic[i, j]->Size = System::Drawing::Size(30, 30);
				this->peoplePic[i, j]->TabIndex = 5;
				this->peoplePic[i, j]->Text = L"";
				this->Controls->Add(this->peoplePic[i, j]);
				this->peoplePic[i, j]->BackColor = System::Drawing::Color::White;
				x += 36;
			}
			y += 36;
		}
				 srand(time(0));
	}

	private: System::Void buttonStep_Click(System::Object^ sender, System::EventArgs^ e) {

		int f = 3; //проверяемый статус
		int koef; //коэффициент, который будет использоваться при определении "судьбы" человека
		int m, n; //вспомогательные индексы
		int vrt[Numbers][Numbers];
		for (int i = 0; i < Numbers; i++)
		{
			for (int j = 0; j < Numbers; j++)
			{
				vrt[i][j] = rand() % 100 + 1;
			}
		}
		
		do
		{
			for (int i = 0; i < Numbers; i++)
			{
				for (int j = 0; j < Numbers; j++)
				{
					if (f == Convert::ToInt32(status[i, j]))
					{//больные - заражают и, если болеют больше 2 шагов - выздоравливают или умирают
						if (f == 3)
						{
							//проходимся по "соседям"
							for (n = i - 1; n <= i + 1; n++)
							{
								for (m = j - 1; m <= j + 1; m++)
								{
									//проверяем сущ. такого соседа
									if (n >= 0 && n < Numbers && m >= 0 && m < Numbers)
									{
										if ((n != i || m != j) && Convert::ToInt32(status[n, m]) == 1) {
											koef = Convert::ToInt32(risk[n, m]) + 15 + (Convert::ToInt32(risk[n, m]) + Convert::ToInt32(efft)) / 100;//вычисляем возможность заразиться
											if (koef < vrt[n][m])
											{
												status[n, m] = Convert::ToInt32(2);
												this->peoplePic[n, m]->BackColor = System::Drawing::Color::Yellow;
												dst[n, m] = 0;
											}
										}
									}
								}
							}
							//если день 2 - человек выздоравливает или умирает
							if (Convert::ToInt32(dst[i, j]) > 1)
							{
								//вычисляем возможность выздороветь
								//больницы повышают шанс
								if (boln > 50)
									koef = Convert::ToInt32(risk[i, j]) - 35;
								else
									koef = Convert::ToInt32(risk[i, j]);
								if (koef < vrt[i][j])
								{
									status[i, j] = Convert::ToInt32(4);
									this->peoplePic[i, j]->BackColor = System::Drawing::Color::Green;
								}
								else
								{
									status[i, j] = Convert::ToInt32(5);
									this->peoplePic[i, j]->BackColor = System::Drawing::Color::Black;
								}
								dst[i, j] = Convert::ToInt32(0);
							}
							else
							{//добавляем день
								dst[i, j] = Convert::ToInt32(dst[i, j]) + 1;
							}
						}

						//инкубационые - заражают аналогично больным и, если переносчики больше 5 шага заболевают или выздоравливают (бессимптомно)
						if (f == 2)
						{//проходимся по "соседям"
							for (n = i - 1; n <= i + 1; n++)
							{
								for (m = j - 1; m <= j + 1; m++)
								{
									//проверяем сущ. такого соседа
									if (n >= 0 && n < Numbers && m >= 0 && m < Numbers)
									{
										if ((n != i || m != j) && Convert::ToInt32(status[n, m] == 1)) {
											koef = Convert::ToInt32(risk[n, m]) + 25 + (Convert::ToInt32(risk[n, m]) + Convert::ToInt32(efft)) / 100;//вычисляем возможность заразиться
											//вычисляем возможность заразиться
											if (koef < vrt[n][m])
											{
												status[n, m] = Convert::ToInt32(2);
												this->peoplePic[n, m]->BackColor = System::Drawing::Color::Yellow;
												dst[n, m] = 0;
											}
										}
									}
								}
							}
							//если день 2 - человек заболевает
							if (Convert::ToInt32(dst[i, j]) > 1)
							{
								status[i, j] = Convert::ToInt32(3);
								this->peoplePic[i, j]->BackColor = System::Drawing::Color::Red;
								dst[i, j] = Convert::ToInt32(0);
							}
							else
								//добавляем день
								dst[i, j] = Convert::ToInt32(dst[i, j]) + 1;;

						}
					}
				}
			}
			f--;
		} while (f > 1);
	}

			 //применение настройки
	private: System::Void enterEffect_Click(System::Object^  sender, System::EventArgs^  e) {
		efft = Convert::ToInt32(numericEffect->Value);
		boln = Convert::ToInt32(bolnici->Value);
		MessageBox::Show(this, "Применено!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
			 //заново
	private: System::Void buttonNewC_Click(System::Object^  sender, System::EventArgs^  e) {
		this->buttonNewC->Enabled = false;
		this->buttonStrt->Enabled = true;
		this->buttonStep->Enabled = false;
		for (int i = 0; i < Numbers; i++)
		{
			for (int j = 0; j < Numbers; j++)
			{
				this->peoplePic[i, j]->BackColor = System::Drawing::Color::White;
				this->peoplePic[i, j]->Text = L"";
			}
		}
}
			 //пуск
	private: System::Void buttonStrt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->buttonNewC->Enabled = true;
		this->buttonStep->Enabled = true;
		this->buttonStrt->Enabled = false;
		//создание списка
		list->init_list(type, risk, status, dst);
				 for (int i = 0; i < Numbers; i++)
				 {
					 for (int j = 0; j < Numbers; j++)
					 {
						 switch (Convert::ToInt32(type[i, j]))
						 {
						 case 1:
							 this->peoplePic[i, j]->Text = "Ch";
							 break;
						 case 2:
							 this->peoplePic[i, j]->Text = "Mc";
							 break;
						 case 3:
							 this->peoplePic[i, j]->Text = "Pn";
							 break;
						 case 4:
							 this->peoplePic[i, j]->Text = "Vz";
							 break;
						 default:
							 break;
						 }
						 if (Convert::ToInt32(risk[i, j]) == 0)
							 this->peoplePic[i, j]->BackColor = System::Drawing::Color::Green;
					 }
					 
				 }
				 int i, j;
				 //выбираем рандомно первого зараженного
				 do
				 {
					 i = rand() % Numbers;
					 j = rand() % Numbers;
					 if (Convert::ToInt32(status[i, j]) != 4 && Convert::ToInt32(type[i, j]) != 1) //если это не иммуницированный и не ребенок
					 {
						 this->peoplePic[i, j]->BackColor = System::Drawing::Color::Red;
						 status[i, j] = 3;
					 }
					 else
					 {
						 i = -1; j = -1;
					 }
				 } while (i < 0);
}
		   //справка
private: System::Void stk_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}