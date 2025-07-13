FROM fedora:42

# Instalar herramientas de compilación y dependencias
RUN dnf install -y \
    gcc-c++ \
    make \
    cmake \
    libcurl-devel \
    wget \
    && dnf clean all

# Descargar nlohmann/json
RUN mkdir -p /usr/local/include/nlohmann && \
    wget https://github.com/nlohmann/json/releases/download/v3.11.2/json.hpp -O /usr/local/include/nlohmann/json.hpp

# Copiar el proyecto al contenedor
WORKDIR /app
COPY . /app

# Construir el proyecto
RUN mkdir build && cd build && cmake .. && make

# Comando por defecto al iniciar el contenedor
CMD ["./build/trading_engine"]

