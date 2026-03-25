// Nama : Farel Athaya Yudha
// NIM : 18225054
// Tanggal : 24-03-2026

#include "mcu_walker.hpp"
#include <iostream>
//[TODO]: Implementasikan kelas mcu_walker dibawah ini
using namespace std;

// ini constructor
mcu_walker::mcu_walker(float cpu_speed,int memory,string os,string nama,int volt,int motor_speed,int rotation)
: MCU(cpu_speed, memory, os, nama, volt)
{
    this->motor_speed = motor_speed;
    this->rotation = rotation;

    cout << "[KONSTRUKTOR WALKER] : Sistem gerak "
         << name << " telah diinisialisasi." << endl;
}

// ini destructor
mcu_walker::~mcu_walker(){
    cout << "[DESTRUKTOR WALKER] : Komponen walker "
         << name << " dimatikan." << endl;
}

// ini rotate
void mcu_walker::rotate(int rotation){
    this->rotation = rotation;

    cout << "[WALKER] : " << name
         << " berputar ke arah " << rotation << " derajat." << endl;
}

void mcu_walker::increase_speed(int speed){
    motor_speed += speed;

    cout << "[WALKER] : Kecepatan " << name
         << " menjadi " << motor_speed << " RPM." << endl;
}

void mcu_walker::showSpek(){
    cout << "[WALKER MCU] : " << name
         << " | CPU: " << cpu_speed << " GHz"
         << " | RAM: " << memory << " MB"
         << " | OS: " << os
         << " | Volt: " << volt << " V"
         << " | Speed: " << motor_speed
         << " | Rotation: " << rotation
         << endl;
}

void mcu_walker::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;

    cout << "[WALKER] : Volt " << name
         << " menjadi " << volt << " V" << endl;
}

void mcu_walker::ganti_os(string new_os){
    os = new_os;

    cout << "[WALKER UPDATE] : " << name
         << " sekarang menggunakan OS " << os << endl;
}
