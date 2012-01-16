ADD_EXECUTABLE(myprogram myprogram.cc)
TARGET_LINK_LIBRARIES(myprogram bar)
INSTALL(TARGETS myprogram DESTINATION bin)
