// Nama : Farel Athaya Yudha
// NIM : 18225054
// Tanggal : 24-03-2026

#include "mcu_cam_controller.hpp"
#include <iostream>
//[TODO]: Implementasikan kelas mcu_cam_controller dibawah ini
using namespace std;

int mcu_cam_controller::count_detected_obj = 0;

mcu_cam_controller::mcu_cam_controller(float cpu_speed,int memory,string os,string nama,int volt,string obj_detected)
: MCU(cpu_speed, memory, os, nama, volt)
{
    this->obj_detected = obj_detected;

    cout << "[KONSTRUKTOR CAM] : Komponen kamera untuk "
         << name << " siap digunakan." << endl;
}

mcu_cam_controller::~mcu_cam_controller(){
    cout << "[DESTRUKTOR CAM] : Komponen kamera "
         << name << " dimatikan." << endl;
}

void mcu_cam_controller::detect_other_object(string other, bool moving){
    obj_detected = other;
    count_detected_obj++;

    cout << "[CAM SYSTEM] : Terdeteksi " << other
         << " (Status: " << (moving ? "Moving" : "Static") << ")"
         << endl;
}

void mcu_cam_controller::showSpek(){
    cout << "[CAM MCU] : " << name
         << " | CPU: " << cpu_speed << " GHz"
         << " | RAM: " << memory << " MB"
         << " | OS: " << os
         << " | Volt: " << volt << " V"
         << " | Last Object: " << obj_detected
         << " | Total Detect: " << count_detected_obj
         << endl;
}

void mcu_cam_controller::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;

    cout << "[CAM] : Volt " << name
         << " menjadi " << volt << " V" << endl;
}

void mcu_cam_controller::ganti_os(string new_os){
    os = new_os;

    cout << "[CAM] : OS " << name
         << " diganti menjadi " << os << endl;
}
