#define ILI9486_DRIVER // Mengaktifkan driver ILI9486
 
// Konfigurasi pin SPI standar untuk ESP32
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin
 
#define LOAD_GLCD   // Mengaktifkan font
#define LOAD_FONT2  
#define LOAD_FONT4  
#define SPI_FREQUENCY  27000000 // Kecepatan komunikasi SPI
