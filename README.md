# Embedded Systems & Bare-Metal Development Journey

This repository documents my progression in embedded systems programming with a focus on embedded C, bare-metal concepts, driver development, and low-level hardware interaction.

The goal is to move beyond application-level firmware and develop strong fundamentals in microcontroller architecture, peripheral control, and real-time embedded software design.

---

## 📁 Repository Structure
Each folder represents a self-contained embedded systems project:

## [Blink](./Blink)  
-Implemented a custom register-mapped GPIO driver utilizing volatile pointer typecasting to safely map hardware addresses (`GPIO_ENABLE_REG`, `GPIO_OUT_W1TS_REG`).

-Utilized bitwise mask operations (`|=`, `<<`) to handle pin configuration without disturbing adjacent peripheral registers.

-Managed loop timing via FreeRTOS `vTaskDelay` to prevent CPU thread starvation.

<img width="180" height="320" alt="045CFFEE-64AB-47C9-BAF8-BEAC371C23A0" src="https://github.com/user-attachments/assets/023f9400-377e-44db-b165-6fd24e4b2433" />
