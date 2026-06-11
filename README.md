# Embedded Systems & Bare-Metal Development Journey

This repository documents my progression in embedded systems programming with a focus on embedded C, bare-metal concepts, driver development, and low-level hardware interaction.

The goal is to move beyond application-level firmware and develop strong fundamentals in microcontroller architecture, peripheral control, and real-time embedded software design.

---

## 📁 Repository Structure

Each folder represents a self-contained embedded systems project:

## [Blink](./Blink)  
- **ESP32 Bare-Metal GPIO Driver:** Bypassed high-level framework abstraction layers (ESP-IDF/Arduino APIs) to implement low-level hardware control via direct register manipulation.
  - *Key Concepts Mastered:* Memory-Mapped I/O (MMIO), bitwise operations (`<<`, `|=`), and using `volatile` pointer typecasting to safely map C variables onto physical 32-bit hardware register addresses (`GPIO_ENABLE_REG`, `GPIO_OUT_W1TS_REG`, `GPIO_OUT_W1TC_REG`).
  - *Concurrency:* Integrated FreeRTOS primitive functions (`vTaskDelay`) to handle clock-tick based timing synchronization within the core application loop.
