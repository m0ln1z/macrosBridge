# 🌉 MacrosBridge by m0ln1z

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)
[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)

An automated bridge building tool for games with various techniques and styles.

## ✨ Features

- 🎯 **4 different bridge building styles**
- 🔐 **Password protection** for secure usage
- 🎨 **Colorful console interface** 
- ⚡ **Fast and precise automated actions**
- 🎮 **Optimized for gaming scenarios**

## 🚀 Building Types

1. **NinjaBridging** - Fast technique for experienced players
2. **Andromeda** - Imitation of popular technique
3. **Bridge v1** - Basic version of advanced technique
4. **Bridge v2** - Enhanced version with additional capabilities

## 📋 System Requirements

- **OS:** Windows 7/8/10/11
- **Compiler:** GCC/MinGW or Visual Studio
- **Architecture:** x86/x64

## 🛠️ Installation and Compilation

### Compilation with GCC/MinGW:
```bash
g++ -o main.exe main.cpp
```

### Compilation with Visual Studio:
```bash
cl main.cpp /Fe:main.exe
```

## 🎮 Usage

1. Run the compiled file:
   ```bash
   ./main.exe
   ```

2. Enter password: `123456`

3. Select building type (1-4)

4. Use **R** key to activate the selected technique

## ⚙️ Configuration

You can change the activation key by editing the `0x52` value in the code (default - R key).

### Key Codes:
- `0x52` - R
- `0x20` - Space
- `0x46` - F
- `0x47` - G

## ⚠️ Important Notes

- The program uses Windows API for input simulation
- Intended for educational purposes only
- Use responsibly and in accordance with game rules
- The author is not responsible for misuse

## 🔧 Technical Information

- **Language:** C++
- **API:** Windows API (user32.dll)
- **Functions:** `GetAsyncKeyState`, `mouse_event`, `keybd_event`
- **Encoding:** UTF-8 with Russian language support

## 📝 License

This project is distributed under the GNU General Public License v3.0.
See the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**m0ln1z** - Creator and main developer

## 🤝 Contributing

Improvement suggestions are welcome! Please:

1. Fork the project
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📞 Support

If you have questions or issues, please create an issue in the repository.

---

⭐ **Star the project if it was helpful!**
