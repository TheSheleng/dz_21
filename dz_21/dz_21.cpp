#include <iostream>

using namespace std;

class HDD
{
	unsigned int capacity;

public: 
	HDD(unsigned int _c) : capacity(_c) {}
	unsigned int getCapacity() { return capacity; }
};

class RAM
{
	unsigned int capacity;

public:
	RAM(unsigned int _c) : capacity(_c) {}
	unsigned int getCapacity() { return capacity; }
};

class CPU
{
	unsigned int frequency;
	unsigned int cores;

public:
	CPU(unsigned int _f, unsigned int _c) : frequency(_f), cores(_c) {}
	unsigned int getFrequency() { return frequency; }
	unsigned int getCores() { return cores; }
};

class GPU
{
	unsigned int frequency;
	unsigned int capacity;

public:
	GPU(unsigned int _f, unsigned int _c) : frequency(_f), capacity(_c) {}
	unsigned int getFrequency() { return frequency; }
	unsigned int getCapacity() { return capacity; }
};

class Keyboard
{
	unsigned int numButtons;

public:
	Keyboard(unsigned int _nb) : numButtons(_nb) {}
	unsigned int getNumButtons() { return numButtons; }
};

class Printer
{
	unsigned int formatByA;

public:
	Printer(unsigned int _fba) : formatByA(_fba) {}
	unsigned int getFormatByA() { return formatByA; }
};

class Computer
{
	CPU cpu;
	RAM ram;
	HDD hdd;
	GPU gpu;

	Keyboard* keyboard;
	Printer* printer;

public:
	void setCPU(CPU& cpu) { this->cpu = cpu; }
	void setRAM(RAM& ram) { this->ram = ram; }
	void setHDD(HDD& hdd) { this->hdd = hdd; }
	void setGPU(GPU& gpu) { this->gpu = gpu; }

	void setKeyboard(Keyboard* keyboard) { this->keyboard = keyboard; }
	void setPrinter(Printer* printer) { this->printer = printer; }

	CPU getCPU() { return cpu; }
	RAM getRAM() { return ram; }
	HDD getHDD() { return hdd; }
	GPU getGPU() { return gpu; }

	Keyboard* getKeyboard() { return keyboard; }
	Printer* getPrinter() { return printer; }
};

int main()
{

}