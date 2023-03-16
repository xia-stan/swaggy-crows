add_executable(swaggy_crows swaggy_crows.cpp)
target_include_directories(swaggy_crows PUBLIC ${EXTERNAL_INCLUDE_PATHS})
target_link_directories(swaggy_crows PUBLIC ${EXTERNAL_LIB_PATHS})
target_compile_definitions(swaggy_crows PRIVATE ASIO_STANDALONE)
