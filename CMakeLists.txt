cmake_minimum_required(VERSION 3.12)

set(VCPKG_OVERLAY_TRIPLETS	${CMAKE_CURRENT_SOURCE_DIR}/vendor/vcpkg-triplets)
set(CMAKE_TOOLCHAIN_FILE	${CMAKE_CURRENT_SOURCE_DIR}/vendor/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(lt-multisession-test)

find_package(LibtorrentRasterbar CONFIG REQUIRED)

add_executable(
	lt-multisession-test
	main.cpp
)

target_link_libraries(
	lt-multisession-test
	LibtorrentRasterbar::torrent-rasterbar
)

