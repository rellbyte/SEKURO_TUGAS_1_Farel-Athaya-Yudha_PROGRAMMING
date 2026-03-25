// Nama : Farel Athaya Yudha
// NIM : 18225054
// Tanggal : 24-03-2026

#include "mcu.hpp"
#include <iostream>
// [TODO] : Implementasikan class robot di file cpp ini
// [TIPS] : Gunakan MCU::<nama methode> untuk mendefinisikan class-nya
using namespace std;

int MCU::total_obj = 0;

MCU::MCU(float cpu_speed,int memory,string os,string name,int volt){
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->name = name;
    this->volt = volt;

    total_obj++;

    cout << "[KONSTRUKTOR MCU] : Objek " 
         << name << " berhasil dibuat." << endl;
}

MCU::~MCU(){
    cout << "[DESTRUKTOR MCU] : Objek base " 
         << name << " dibersihkan." << endl;
}

void MCU::showSpek(){
    cout << "[BASE MCU] : " << name
         << " | CPU: " << cpu_speed << " GHz"
         << " | RAM: " << memory << " MB"
         << " | OS: " << os
         << " | Volt: " << volt << " V" << endl;
}

void MCU::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;
    cout << "[MCU] : Volt " << name
         << " menjadi " << volt << " V" << endl;
}

void MCU::ganti_os(string new_os){
    os = new_os;
    cout << "[MCU] : OS " << name
         << " diganti menjadi " << os << endl;
}
