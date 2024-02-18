mkdir build
platformio run --verbose --environment STM32F103VE_longer_maple
mv .pio/build/STM32F103VE_longer_maple/project.bin build/
