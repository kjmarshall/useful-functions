## ---------------------- ##
## Edit: test-permutation ##
## ---------------------- ##
project(test-permutation)
message(STATUS "PROCESSING ${PROJECT_NAME}")

## -------- ##
## Includes ##
## -------- ##
sdk_list_header_files(HEADER_FILES)
sdk_list_source_files(SOURCE_FILES)

## ---------- ##
## Executable ##
## ---------- ##
add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})
sdk_setup_project_bin(${PROJECT_NAME})
add_dependencies(${PROJECT_NAME} useful-functions )
target_link_libraries(${PROJECT_NAME} useful-functions ${LIBS} ${EXTRA_LIBS})
