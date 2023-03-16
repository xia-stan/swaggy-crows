add_subdirectory(blueprints)

add_executable(swaggy_crows swaggy_crows.cpp ${BLUEPRINTS})
target_include_directories(swaggy_crows PUBLIC ${EXTERNAL_INCLUDE_PATHS} ../include/ )
target_link_directories(swaggy_crows PUBLIC ${EXTERNAL_LIB_PATHS})
target_compile_definitions(swaggy_crows PRIVATE ASIO_STANDALONE)
