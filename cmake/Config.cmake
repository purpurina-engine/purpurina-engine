
# Detect OS

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(PURPURONA_OS_WINDOWS 1)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
	set(PURPURONA_OS_LINUX 1)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
	set(PURPURONA_OS_MACOSX 1)
endif()
