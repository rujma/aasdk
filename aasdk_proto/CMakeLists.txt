find_package(protobuf CONFIG REQUIRED)

file(GLOB_RECURSE proto_files ${CMAKE_CURRENT_SOURCE_DIR}/*.proto)
protobuf_generate_cpp(proto_sources proto_headers ${proto_files})
add_library(aasdk_proto STATIC ${proto_headers} ${proto_sources})
target_include_directories(aasdk_proto PUBLIC ${protobuf_INCLUDE_DIR})
target_link_libraries(aasdk_proto PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)

