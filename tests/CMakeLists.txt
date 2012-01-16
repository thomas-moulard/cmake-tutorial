ADD_EXECUTABLE(test-bar bar.cc)
TARGET_LINK_LIBRARIES(test-bar bar)

ADD_TEST(test-bar ${CMAKE_CURRENT_BINARY_DIR}/test-bar)
