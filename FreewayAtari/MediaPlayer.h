#pragma managed

using namespace System;
using namespace Threading;

ref class SomWork
{

private:
	int m_frequencia;
	int m_duracao;

public:

	SomWork(int frequencia, int duracao)
	{
		m_frequencia = frequencia;
		m_duracao = duracao;
	}

	void Tocar()
	{
		Console::Beep(m_frequencia, m_duracao);
	}

};

ref class MusicWork
{
private:
	int* m_notas;
	int  m_tamanho;

public:
	MusicWork(int* notas, int tamanho)
	{
		m_notas = notas;
		m_tamanho = tamanho;
	}

	void Tocar()
	{
		for (;;)
		{
			for (int i = 0; i < m_tamanho; i += 2)
			{
				if (m_notas[i] == 0)
					Thread::Sleep(m_notas[i + 1]);
				else
					Console::Beep(m_notas[i], m_notas[i + 1]);
			}
		}
	}
};


ref class MediaPlayer
{

public:
	static void TocarSom(int frequencia, int duracao)
	{
		SomWork^ work = gcnew SomWork(frequencia, duracao);
		ThreadStart^ ths = gcnew  ThreadStart(work, &SomWork::Tocar);
		Thread ^ th = gcnew Thread(ths);
		th->Start();
	}

	static void TocarMusica(int* notas, int tamanho)
	{
		MusicWork^ work = gcnew MusicWork(notas, tamanho);
		ThreadStart^ ths = gcnew  ThreadStart(work, &MusicWork::Tocar);
		Thread ^ th = gcnew Thread(ths);
		th->Start();
	}

};

