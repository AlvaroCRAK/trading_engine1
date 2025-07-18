cmake_minimum_required(VERSION 3.10)
project(TradingEngine1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Buscar libcurl
find_package(CURL REQUIRED)

# Incluir directorios
include_directories(${CURL_INCLUDE_DIRS} include/)

# Agregar ejecutable
add_executable(trading_engine src/main.cpp src/market_data.cpp 
  src/Bank.cpp)

# Enlazar librerías
target_link_libraries(trading_engine ${CURL_LIBRARIES})
