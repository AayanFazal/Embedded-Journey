# Embedded Systems & Bare-Metal Development Journey

This repository documents my progression in embedded systems programming with a focus on embedded C, bare-metal concepts, driver development, and low-level hardware interaction.

The goal is to move beyond application-level firmware and develop strong fundamentals in microcontroller architecture, peripheral control, and real-time embedded software design.

---

# 📁 Repository Structure

## [Blink](./Blink)  

### Objective
Blink the ESP32 onboard LED by directly accessing GPIO hardware registers instead of using the ESP-IDF GPIO driver. 

### Concepts
- Memory-mapped I/O
- volatile
- Bitwise operations
- GPIO registers

## What I Learned
- Registers are accessed through fixed memory addresses.
- volatile prevents compiler optimization of hardware accesses.
- W1TS/W1TC registers allow individual GPIO pins to be modified safely.
  
<img width="200" alt="Blink" src="https://github.com/user-attachments/assets/9dd54d84-8c1a-4b3d-bb92-8670f93a4490" />
