# Embedded Systems & Bare-Metal Development Journey

This repository documents my progression in embedded systems programming with a focus on embedded C, bare-metal concepts, driver development, and low-level hardware interaction.

The goal is to move beyond application-level firmware and develop strong fundamentals in microcontroller architecture, peripheral control, and real-time embedded software design.

---

## 📁 Repository Structure

### [Blink](./Blink)  

- Implemented a custom register-mapped GPIO driver utilizing volatile pointer typecasting to safely map hardware addresses (`GPIO_ENABLE_REG`, `GPIO_OUT_W1TS_REG`).
- Utilized bitwise mask operations (`|=`, `<<`) to handle pin configuration without disturbing adjacent peripheral registers.
- Managed loop timing via FreeRTOS `vTaskDelay` to prevent CPU thread starvation.

<img width="200" alt="Blink" src="https://github.com/user-attachments/assets/9dd54d84-8c1a-4b3d-bb92-8670f93a4490" />
