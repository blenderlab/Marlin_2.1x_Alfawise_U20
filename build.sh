platformio run --verbose --environment alfawise_U20
mkdir -p .histo
cp out/project.bin .histo/`date --iso-8601`.bin
